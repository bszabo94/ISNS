#include "ISNSInterpreter.h"


antlrcpp::Any ISNSInterpreter::visitProgram ( ISNSParser::ProgramContext* ctx ) {

    for ( ISNSParser::ImportlibContext* i : ctx->importlib() ) {
        visitImportlib ( i );
    }

    enterScope();

    ISNSParser::FunctiondeclarationContext* mainFunction;

    initSysFunctions();

    for ( ISNSParser::DeclarationContext* i : ctx->declaration() ) {
        if ( i->functiondeclaration() != nullptr && i->functiondeclaration()->identifier()->IDEN()->getText() == "main" ) {
            mainFunction = i->functiondeclaration();
        }

        visitDeclaration ( i );
    }

    antlrcpp::Any exitVal;

    if ( mainFunction != nullptr ) {
        if ( findFunction ( "main" )->getType() != INT ) {
            abort ( "The main function must be daclared as type 'int'." );
        }

        exitVal = callMainFunction ( mainFunction );

    } else {
        abort ( "No main function found" );
    }

    exitScope();

    if ( this->warnsEnabled ) {
        printWarns();
    }
    
    this->returnValue = exitVal.as<int>();

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitImportlib ( ISNSParser::ImportlibContext* ctx ) {

    enterScope();
    for ( ISNSParser::PathContext* path : ctx->path() ) {
        visitPath ( path );
    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitPath ( ISNSParser::PathContext* ctx ) {
    std::string path = ctx->getText();
    ISNSOperator::trimStr ( path );

    std::ifstream stream;
    stream.open ( path );

    _importInput.push_back ( new antlr4::ANTLRInputStream ( stream ) );
    _importLexer.push_back ( new ISNSLexer ( _importInput.back() ) );
    _importTokens.push_back ( new antlr4::CommonTokenStream ( _importLexer.back() ) );
    _importParser.push_back ( new ISNSParser ( _importTokens.back() ) );
    _importParser.back()->removeErrorListeners();
    _importParser.back()->addErrorListener ( &_importListener );
    _importLexer.back()->addErrorListener ( &_importListener );

    _importLibraryCtx.push_back ( _importParser.back()->importedlibrary() );

    visitImportedlibrary ( _importLibraryCtx.back() );

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitImportedlibrary ( ISNSParser::ImportedlibraryContext* ctx ) {

    for ( ISNSParser::ImportlibContext* i : ctx->importlib() ) {
        visitImportlib ( i );
    }

    for ( ISNSParser::DeclarationContext* i : ctx->declaration() ) {
        if ( i->functiondeclaration() != nullptr && i->functiondeclaration()->identifier()->IDEN()->getText() != "main" ) {
            visitDeclaration ( i );
        }
    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::callMainFunction ( ISNSParser::FunctiondeclarationContext* mainFunction ) {
    enterScope();

    antlrcpp::Any r;
    Type t;

    currentlyExecuting.push_back ( findFunction ( "main" )->clone() );
    currentFunction = currentlyExecuting.back();

    ISNSParser::FunctiondeclarationContext* currCtx = currentFunction->getContext();

    visitBlock ( currCtx->block() );

    r = currentFunction->getReturnValue();
    t = currentFunction->getType();

    delete currentFunction;
    currentlyExecuting.pop_back();
    if ( currentlyExecuting.size() > 0 ) {
        currentFunction = currentlyExecuting.back();
    }

    exitScope();

    return ISNSOperator::convertToType ( r, t );
}

antlrcpp::Any ISNSInterpreter::visitFunctioncall ( ISNSParser::FunctioncallContext* ctx ) {
    if ( ctx->identifier()->stackmark() != nullptr ) {
        abort ( "Stack type functions are not supported." );
    }

    Function* f = findFunction ( ctx->identifier()->IDEN()->getText() )->clone();

    if ( f->getContext() == nullptr ) {

        std::vector<antlrcpp::Any> args;

        if ( ctx->callargs() != nullptr )
            for ( ISNSParser::ValueContext* v : ctx->callargs()->value() ) {
                args.push_back ( visitValue ( v ) );
            }

        return callSysFunction ( f, args );
    }

    enterScope();

    antlrcpp::Any r;
    Type t;

    currentlyExecuting.push_back ( f );
    currentFunction = currentlyExecuting.back();
    ISNSParser::FunctiondeclarationContext* currCtx = currentFunction->getContext();

    visitCallargs ( ctx->callargs() );

    visitBlock ( currCtx->block() );

    r = currentFunction->getReturnValue();
    t = currentFunction->getType();

    delete currentFunction;
    currentlyExecuting.pop_back();

    if ( currentlyExecuting.size() > 0 ) {
        currentFunction = currentlyExecuting.back();
    }

    exitScope();
    return ISNSOperator::convertToType ( r, t );
}

antlrcpp::Any ISNSInterpreter::visitCallargs ( ISNSParser::CallargsContext* ctx ) {

    std::vector<ISNSParser::VardeclarationContext*> argsDec;
    std::vector<ISNSParser::ValueContext*> callargs;

    if ( currentFunction->getContext()->args() != nullptr ) {
        argsDec = currentFunction->getContext()->args()->vardeclaration();
    }

    if ( ctx != nullptr ) {
        callargs = ctx->value();
    }

    std::vector<std::string> declaredVarIdentifiers;
    ISNSParser::VardeclarationContext* currVarCtx;
    Var* v;
    int cnt = 0;

    if ( currentFunction->getContext()->args() != nullptr ) {
        for ( ISNSParser::VardeclarationContext* i : argsDec ) {
            for ( ISNSParser::IdentifierContext* t : i->identifier() ) {
                cnt++;
            }
            for ( ISNSParser::AssignmentContext* a : i->assignment() ) {
                cnt++;
            }
        }
    }

    if ( callargs.size() > cnt ) {
        abort ( "Mismatched calling arguments for function '" + currentFunction->getName() + "'." );
    }

    cnt = callargs.size();

    for ( int i=0; i < cnt; i++ ) {
        currentFunction->addParamValue ( visitValue ( callargs.at ( i ) ) );
    }

    ISNSParser::FunctiondeclarationContext* currCtx = currentFunction->getContext();

    if ( currCtx->args() != nullptr ) {
        for ( ISNSParser::VardeclarationContext* i : currCtx->args()->vardeclaration() ) {
            visitVardeclaration ( i );
        }
    }

    declaredVarIdentifiers = currentFunction->getParamIDs();

    for ( int i = 0; i < currentFunction->getParamValues().size(); i++ ) {
        v = findVar ( declaredVarIdentifiers.at ( i ) );
        v->setValue ( ISNSOperator::convertToType ( currentFunction->getParamValues().at ( i ), v->getType() ) );

    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitDeclaration ( ISNSParser::DeclarationContext* ctx ) {

    if ( ctx->functiondeclaration() != nullptr ) {
        visitFunctiondeclaration ( ctx->functiondeclaration() );
    } else {
        visitVardeclaration ( ctx->vardeclaration() );
    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitVardeclaration ( ISNSParser::VardeclarationContext* ctx ) {

    for ( ISNSParser::IdentifierContext* i : ctx->identifier() ) {

        if ( getScope()->isVarDeclared ( i->IDEN()->getText() ) ) {
            abort ( "Var '" + i->getText() + "' is already declared in this scope." );
        }

        Var* v;

        if ( i->stackmark() != nullptr ) {
            if ( i->stackmark()->value() != nullptr ) {
                abort ( "Non-allowed stack indexing at declaration at: '" + ctx->getText() + "', (use indexing only to reach elemnts of the stack)." );
            }
            v = new Var ( i->IDEN()->getText(), ctx->vartype()->getText(), true );

        } else {
            v = new Var ( i->IDEN()->getText(), ctx->vartype()->getText(), false );
        }

        getScope()->addVar ( v->getName(), v );

        if ( currentFunction != nullptr ) {
            currentFunction->addParamID ( v->getName() );
        }
    }

    for ( ISNSParser::AssignmentContext* i : ctx->assignment() ) {

        if ( getScope()->isVarDeclared ( i->getText() ) ) {
            abort ( "Var '" + i->getText() + "' is already declared in this scope." );
        }

        if ( i->identifier()->stackmark() != nullptr ) {
            abort ( "Non-allowed stack indexing at declaration at: '" + ctx->getText() + "', (no value can be assigned to a stack during initialization)." );
        }

        Var* v = new Var ( i->identifier()->IDEN()->getText(), ctx->vartype()->getText(), false );
        getScope()->addVar ( v->getName(), v );
        v->setValue ( ISNSOperator::convertToType ( visitValue ( i->value() ), v->getType() ) );
        if ( currentFunction != nullptr ) {
            currentFunction->addParamID ( v->getName() );
        }
    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitFunctiondeclaration ( ISNSParser::FunctiondeclarationContext* ctx ) {

    if ( ctx->identifier()->stackmark() != nullptr ) {
        abort ( "Stack type functions are not supported." );
    }

    if ( getScope()->isFunctionDeclared ( ctx->identifier()->IDEN()->getText() ) ) {
        abort ( "Function '" + ctx->identifier()->IDEN()->getText() + "' is already declared in this scope." );
    }

    Function* f = new Function ( ctx->identifier()->IDEN()->getText(), ctx->functiontype()->getText(), ctx );
    getScope()->addFunction ( f->getName(), f );

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitBlock ( ISNSParser::BlockContext* ctx ) {

    int cnt = 0;

    for ( ISNSParser::StatementContext* s : ctx->statement() ) {
        visitStatement ( s );

        if ( currentFunction != nullptr ) {
            if ( currentFunction->getHasReturnValue() ) {
                /*checking for possible warning*/
                if ( cnt < ctx->statement().size()-1 ) {
                    warning ( "Unreachable code after 'return' statement in function: '" + currentFunction->getName() + "'." );
                }

                break;
            }
        }
        cnt++;
    }

    if ( !getScope()->isCycle() && currentFunction->getHasReturnValue() == false && currentFunction->getType() != VOID ) {
        abort ( "Missing return statement from function '" + currentFunction->getName() + "'." );
    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitValue ( ISNSParser::ValueContext* ctx ) {
    if ( ctx->identifier() != nullptr ) {
        return visitIdentifier ( ctx->identifier() );
    }
    if ( ctx->literal() != nullptr ) {
        return visitLiteral ( ctx->literal() );
    }
    if ( ctx->exp() != nullptr ) {
        return visitExp ( ctx->exp() );
    }

    abort ( "Something unexpected happened while visiting a value: '" + ctx->getText() + "'." );
    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitAssignment ( ISNSParser::AssignmentContext* ctx ) {
    Var* v = findVar ( ctx->identifier()->IDEN()->getText() );

    if ( ctx->identifier()->stackmark() != nullptr && ( !v->isStack() && v->getType() != STR ) ) {
        abort ( "Invalid reference to non-stack variable as stack: '" + v->getName() + "'." );
    }

    if ( ctx->identifier()->stackmark() == nullptr && v->isStack() ) {
        abort ( "Invalid reference to stack variable as non-stack: '" + v->getName() + "'." );
    }

    if ( ctx->identifier()->stackmark() != nullptr ) {
        if ( ctx->identifier()->stackmark()->value() == nullptr ) {
            abort ( "Missing index from stack reference at: '" + ctx->getText() + "'." );
        }

        int index = ISNSOperator::convertToType ( visitValue ( ctx->identifier()->stackmark()->value() ), INT );

        if ( ctx->value() != nullptr ) {
            v->setValue ( ISNSOperator::convertToType ( visitValue ( ctx->value() ), v->getType() ), index );
        } else {
            v->setValue ( ISNSOperator::convertToType ( visitCompareop ( ctx->compareop() ), v->getType() ), index );
        }

    } else {
        if ( ctx->value() != nullptr ) {
            v->setValue ( ISNSOperator::convertToType ( visitValue ( ctx->value() ), v->getType() ) );
        } else {
            v->setValue ( ISNSOperator::convertToType ( visitCompareop ( ctx->compareop() ), v->getType() ) );
        }
    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitExp ( ISNSParser::ExpContext* ctx ) {

    antlrcpp::Any retValue = visitMexp ( ctx->mexp().at ( 0 ) );
    for ( int i=0; i < ctx->mexp().size() - 1 ; i++ ) {
        antlrcpp::Any v1 = retValue;
        antlrcpp::Any v2 = visitMexp ( ctx->mexp().at ( i+1 ) );
        retValue = ISNSOperator::operate (
                       v1,
                       v2,
                       ctx->PLUSMINUS().at ( i )->getText() );
    }

    return retValue;
}

antlrcpp::Any ISNSInterpreter::visitMexp ( ISNSParser::MexpContext* ctx ) {
    antlrcpp::Any retValue = visitPexp ( ctx->pexp().at ( 0 ) );
    for ( int i=0; i < ctx->pexp().size() - 1 ; i++ ) {
        antlrcpp::Any v1 = retValue;
        antlrcpp::Any v2 = visitPexp ( ctx->pexp().at ( i+1 ) );
        retValue = ISNSOperator::operate (
                       v1,
                       v2,
                       ctx->TIMESDIVMOD().at ( i )->getText() );
    }

    return retValue;
}

antlrcpp::Any ISNSInterpreter::visitPexp ( ISNSParser::PexpContext* ctx ) {
    antlrcpp::Any retValue = visitBexp ( ctx->bexp().at ( 0 ) );
    for ( int i=0; i < ctx->bexp().size() - 1 ; i++ ) {
        antlrcpp::Any v1 = retValue;
        antlrcpp::Any v2 = visitBexp ( ctx->bexp().at ( i+1 ) );
        retValue = ISNSOperator::operate (
                       v1,
                       v2,
                       ctx->POW().at ( i )->getText() );
    }

    return retValue;
}

antlrcpp::Any ISNSInterpreter::visitBexp ( ISNSParser::BexpContext* ctx ) {
    antlrcpp::Any retValue = visitAtom ( ctx->atom().at ( 0 ) );
    for ( int i=0; i < ctx->atom().size() - 1 ; i++ ) {
        antlrcpp::Any v1 = retValue;
        antlrcpp::Any v2 = visitAtom ( ctx->atom().at ( i+1 ) );
        retValue = ISNSOperator::operate (
                       v1,
                       v2,
                       ctx->BBITWISE().at ( i )->getText() );
    }

    return retValue;
}

antlrcpp::Any ISNSInterpreter::visitAtom ( ISNSParser::AtomContext* ctx ) {
    if ( ctx->identifier() != nullptr ) {
        return visitIdentifier ( ctx->identifier() );
    }
    if ( ctx->exp() != nullptr ) {
        return visitExp ( ctx->exp() );
    }
    if ( ctx->literal() != nullptr ) {
        return visitLiteral ( ctx->literal() );
    }
    if ( ctx->functioncall() != nullptr ) {
        return visitFunctioncall ( ctx->functioncall() );
    }
    if ( ctx->uop() != nullptr ) {
        return visitUop ( ctx->uop() );
    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitIdentifier ( ISNSParser::IdentifierContext* ctx ) {
    if ( ctx->stackmark() != nullptr ) {
        if ( ctx->stackmark()->value() != nullptr ) {
            return findVar ( ctx->IDEN()->getText() )->getValue ( ISNSOperator::convertToType ( visitValue ( ctx->stackmark()->value() ),INT ) );
        } else {
            abort ( "Missing index while referencing to an element of a stack: '" + ctx->getText() + "'." );
        }
    } else {
        return findVar ( ctx->IDEN()->getText() )->getValue();
    }
}

antlrcpp::Any ISNSInterpreter::visitUop ( ISNSParser::UopContext* ctx ) {
    return ISNSOperator::uOperate ( visitAtom ( ctx->atom() ), ctx->UBITWISE()->getText() );
}

antlrcpp::Any ISNSInterpreter::visitStatement ( ISNSParser::StatementContext* ctx ) {

    if ( ctx->declaration() != nullptr ) {
        visitDeclaration ( ctx->declaration() );
    }

    else if ( ctx->assignment() != nullptr ) {
        visitAssignment ( ctx->assignment() );
    }

    else if ( ctx->value() != nullptr ) {
        visitValue ( ctx->value() );
    }

    else if ( ctx->returnstatement() != nullptr ) {
        visitReturnstatement ( ctx->returnstatement() );
    }

    else if ( ctx->ifblock() != nullptr ) {
        visitIfblock ( ctx->ifblock() );
    }

    else if ( ctx->whileblock() != nullptr ) {
        visitWhileblock ( ctx->whileblock() );
    }

    else if ( ctx->forblock() != nullptr ) {
        visitForblock ( ctx->forblock() );
    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitReturnstatement ( ISNSParser::ReturnstatementContext* ctx ) {

    if ( currentFunction->getType() == VOID ) {
        if ( ctx->value() != nullptr ) {
            abort ( "Void functions cannot return any value." );
        } else {
            currentFunction->setHasReturnValue ( true );
            currentFunction->setReturnValue ( ISNSOperator::convertToType ( visitValue ( ctx->value() ), currentFunction->getType() ) );
        }
        return dummy;
    } else {
        currentFunction->setHasReturnValue ( true );
        currentFunction->setReturnValue ( ISNSOperator::convertToType ( visitValue ( ctx->value() ), currentFunction->getType() ) );
    }

    return dummy;;
}

antlrcpp::Any ISNSInterpreter::visitLiteral ( ISNSParser::LiteralContext* ctx ) {

    if ( ctx->string() != nullptr ) {
        return visitString ( ctx->string() );
    }
    if ( ctx->number() != nullptr ) {
        return visitNumber ( ctx->number() );
    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitString ( ISNSParser::StringContext* ctx ) {

    std::string s = ctx->getText();
    antlrcpp::Any temp, retVal;

    ISNSOperator::trimStr ( s );

    temp = s;
    retVal = temp.as<std::string>();

    return retVal;

}

antlrcpp::Any ISNSInterpreter::visitNumber ( ISNSParser::NumberContext* ctx ) {

    antlrcpp::Any temp, retVal;
    std::string s;

    if ( ctx->INTNUMBER() != nullptr ) {
        s = ctx->INTNUMBER()->getText();
        int i = std::stoi ( s );

        temp = i;
        retVal = temp.as<int>();

        return retVal;
    }

    if ( ctx->FRACNUMBER() != nullptr ) {
        s = ctx->FRACNUMBER()->getText();
        double d = std::stod ( s );

        temp = d;
        retVal = temp.as<double>();

        return retVal;
    }

    if ( ctx->BINNUMBER() != nullptr ) {
        s = ctx->BINNUMBER()->getText();

        s = s.substr ( 3, s.length()-3 );

        if ( s.length() > 8 ) {
            abort ( "Variables of type 'BYTE' can only contain 8 or less bits." );
        }

        std::bitset<8> bs = std::bitset<8> ( s );
        temp = bs;
        retVal = temp.as<std::bitset<8>>();

        return retVal;
    }

    abort ( "Something unexpected happened during reading of a number in '" + ctx->getText() + "'." );

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitWhileblock ( ISNSParser::WhileblockContext* ctx ) {
    enterScope();
    getScope()->setCycle ( true );

    bool b;

    while ( true ) {

        if ( ctx->compareop() != nullptr ) {
            b = ISNSOperator::cOperate ( visitValue ( ctx->compareop()->value().at ( 0 ) ), visitValue ( ctx->compareop()->value().at ( 1 ) ), ctx->compareop()->COP()->getText() );
        } else if ( ctx->value() != nullptr ) {
            b = ISNSOperator::getBool ( visitValue ( ctx->value() ) );
        } else {
            abort ( "Unable to reach proper condition of while at '" + ctx->getText() + "'." );
        }

        if ( b && !currentFunction->getHasReturnValue() /*&& getScope()->isCycle()*/ ) {
            visitBlock ( ctx->block() );
        } else {
            break;
        }
    }

    exitScope();
    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitForblock ( ISNSParser::ForblockContext* ctx ) {
    enterScope();
    getScope()->setCycle ( true );

    bool b;

    if ( ctx->forinit() != nullptr ) {
        visitForinit ( ctx->forinit() );
    }

    while ( true ) {

        if ( ctx->forcond() != nullptr ) {
            b = ISNSOperator::getBool ( visitForcond ( ctx->forcond() ) );
        } else {
            b = true;
        }

        if ( !b || currentFunction->getHasReturnValue() /*|| !(getScope()->isCycle())*/ ) {
            break;
        }

        visitBlock ( ctx->block() );

        if ( ctx->forstep() != nullptr ) {
            visitForstep ( ctx->forstep() );
        }

    }

    exitScope();
    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitForcond ( ISNSParser::ForcondContext* ctx ) {
    antlrcpp::Any temp, retVal;
    bool b;

    if ( ctx->value() != nullptr ) {
        b = ISNSOperator::getBool ( visitValue ( ctx->value() ) );
    } else if ( ctx->compareop() != nullptr ) {
        b = ISNSOperator::cOperate (
                visitValue ( ctx->compareop()->value().at ( 0 ) ),
                visitValue ( ctx->compareop()->value().at ( 1 ) ),
                ctx->compareop()->COP()->getText()
            );
    } else {
        abort ( "Unable to reach proper condition of for block, at '" + ctx->getText() + "'." );
    }


    if ( b ) {
        temp = 1;
    } else {
        temp = 0;
    }

    retVal = temp.as<int>();

    return retVal;
}


antlrcpp::Any ISNSInterpreter::visitForinit ( ISNSParser::ForinitContext* ctx ) {

    if ( ctx->vardeclaration() != nullptr ) {
        visitVardeclaration ( ctx->vardeclaration() );
    } else if ( ctx->assignment() != nullptr ) {
        visitAssignment ( ctx->assignment() );
    } else if ( ctx->value() != nullptr ) {
        visitValue ( ctx->value() );
    } else if ( ctx->compareop() != nullptr ) {
        visitCompareop ( ctx->compareop() );
    } else {
        abort ( "Unable to reach proper init part of for block, at '" + ctx->getText() + "'." );
    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitForstep ( ISNSParser::ForstepContext* ctx ) {

    if ( ctx->vardeclaration() != nullptr ) {
        visitVardeclaration ( ctx->vardeclaration() );
    } else if ( ctx->assignment() != nullptr ) {
        visitAssignment ( ctx->assignment() );
    } else if ( ctx->value() != nullptr ) {
        visitValue ( ctx->value() );
    } else if ( ctx->compareop() != nullptr ) {
        visitCompareop ( ctx->compareop() );
    } else {
        abort ( "Unable to reach proper step part of for block, at '" + ctx->getText() + "'." );
    }

    return dummy;
}

antlrcpp::Any ISNSInterpreter::visitIfblock ( ISNSParser::IfblockContext* ctx ) {
    enterScope();
    getScope()->setCycle ( true );
    bool b;
    if ( ctx->compareop() != nullptr ) {
        b = ISNSOperator::cOperate ( visitValue ( ctx->compareop()->value().at ( 0 ) ), visitValue ( ctx->compareop()->value().at ( 1 ) ), ctx->compareop()->COP()->getText() );
    } else if ( ctx->value() != nullptr ) {
        b = ISNSOperator::getBool ( visitValue ( ctx->value() ) );
    } else {
        abort ( "Unable to reach proper condition of if at '" + ctx->getText() + "'." );
    }


    if ( b ) {
        visitBlock ( ctx->block().at ( 0 ) );
    } else if ( ctx->block().size() > 1 ) {
        visitBlock ( ctx->block().at ( 1 ) );
    }

    exitScope();
    return dummy;
}



/***************************NON-VISITORS**************************/

ISNSInterpreter::~ISNSInterpreter() {
    while ( !referenceTable.empty() ) {
        exitScope();
    }

    while ( !currentlyExecuting.empty() ) {
        delete currentlyExecuting.back();
        currentlyExecuting.pop_back();
    }

    while ( !_importInput.empty() ) {
        delete _importInput.back();
        _importInput.pop_back();
    }
    while ( !_importLexer.empty() ) {
        delete _importLexer.back();
        _importLexer.pop_back();
    }
    while ( !_importTokens.empty() ) {
        delete _importTokens.back();
        _importTokens.pop_back();
    }

    while ( !_importParser.empty() ) {
        delete _importParser.back();
        _importParser.pop_back();
    }

}

void ISNSInterpreter::initSysFunctions() {

    Function *printFunction = new Function ( "print", VOID, nullptr ),
    *printlnFunction = new Function ( "println", VOID, nullptr ),
    *readFunction = new Function ( "read", STR, nullptr );

    getScope()->addFunction ( "print", printFunction );
    getScope()->addFunction ( "println", printlnFunction );
    getScope()->addFunction ( "read", readFunction );

}

antlrcpp::Any ISNSInterpreter::callSysFunction ( Function* f , std::vector<antlrcpp::Any> args ) {

    if ( f->getName() == "print" ) {
        if ( args.size() != 1 ) {
            abort ( "Function 'print' requires exactly 1 argument." );
        }

        delete f;
        return SysFunctions::print ( ISNSOperator::convertToType ( args.at ( 0 ), STR ) );
    }

    if ( f->getName() == "println" ) {
        if ( args.size() != 1 ) {
            abort ( "Function 'println' requires exactly 1 argument." );
        }

        delete f;
        return SysFunctions::println ( ISNSOperator::convertToType ( args.at ( 0 ), STR ) );
    }

    if ( f->getName() == "read" ) {
        if ( args.size() != 0 ) {
            abort ( "Function 'read' requires no argument." );
        }

        delete f;
        return SysFunctions::read();
    }

    abort ( "Something unexpected happened while calling '" + f->getName() + "' as system function." );

}

Var* ISNSInterpreter::findVar ( std::__cxx11::string ref ) {

    std::map< std::__cxx11::string, Var* > allVars = getAllVarReferences();

    for ( std::map<std::string, Var*>::iterator i = allVars.begin(); i != allVars.end(); ++i )
        if ( i->first == ref ) {
            return i->second;
        }

    throw ISNSRuntimeException ( "No variable named '" + ref + "' found in this scope." );

    return dummy;
}

Function* ISNSInterpreter::findFunction ( std::__cxx11::string ref ) {

    std::map< std::__cxx11::string, Function* > allFunctions = getAllFunctionReferences();

    for ( std::map<std::string, Function*>::iterator i = allFunctions.begin(); i != allFunctions.end(); ++i )
        if ( i->first == ref ) {
            return i->second;
        }

    throw ISNSRuntimeException ( "No function named '" + ref + "' found in this scope." );

    return dummy;
}

std::map< std::__cxx11::string, Function* > ISNSInterpreter::getAllFunctionReferences() {
    std::map< std::__cxx11::string, Function* > merged;

    for ( ReferenceTable* currTable : this->referenceTable ) {
        std::map< std::__cxx11::string, Function* > fr = currTable->getFunctionReferences();
        for ( std::map<std::string, Function*>::iterator currPair = fr.begin(); currPair != fr.end(); ++currPair ) {
            merged[currPair->first] = currPair->second;
        }
    }

    return merged;
}

std::map< std::__cxx11::string, Function* > ISNSInterpreter::getPrevFunctionReferences() {
    std::map< std::__cxx11::string, Function* > merged;
    ReferenceTable* r;
    for ( int i = 0; i < this->referenceTable.size() - 1; i++ ) {
        r = this->referenceTable.at ( i );
        std::map< std::__cxx11::string, Function* > fr = r->getFunctionReferences();
        for ( std::map<std::string, Function*>::iterator currPair = fr.begin(); currPair != fr.end(); ++currPair ) {
            merged[currPair->first] = currPair->second;
        }
    }

    return merged;
}

std::map< std::__cxx11::string, Var* > ISNSInterpreter::getPrevVarReferences() {
    std::map< std::__cxx11::string, Var* > merged;
    ReferenceTable* r;
    for ( int i = 0; i < this->referenceTable.size() - 1; i++ ) {
        r = this->referenceTable.at ( i );
        std::map< std::__cxx11::string, Var* > fr = r->getVarReferences();
        for ( std::map<std::string, Var*>::iterator currPair = fr.begin(); currPair != fr.end(); ++currPair ) {
            merged[currPair->first] = currPair->second;
        }
    }

    return merged;
}


std::map< std::__cxx11::string, Var* > ISNSInterpreter::getAllVarReferences() {
    std::map< std::__cxx11::string, Var* > merged;

    for ( ReferenceTable* currTable : this->referenceTable ) {
        std::map< std::__cxx11::string, Var* > vr = currTable->getVarReferences();
        for ( std::map<std::string, Var*>::iterator currPair = vr.begin(); currPair != vr.end(); ++currPair ) {
            merged[currPair->first] = currPair->second;
        }
    }

    return merged;
}


ReferenceTable* ISNSInterpreter::getScope() {
    if ( this->referenceTable.size() >0 ) {
        return this->referenceTable.back();
    } else {
        abort ( "No scope found." );
    }
    return dummy;
}

void ISNSInterpreter::enterScope() {
    referenceTable.push_back ( new ReferenceTable() );
}

void ISNSInterpreter::exitScope() {

    if ( this->referenceTable.size() ==0 ) {
        return;
    }

    ReferenceTable* r = referenceTable.back();
    std::map< std::__cxx11::string, Var* > vr = r->getVarReferences();
    std::map< std::__cxx11::string, Function* > fr = r->getFunctionReferences();

    for ( std::map<std::string, Var*>::iterator i = vr.begin(); i != vr.end(); ++i ) {
        delete i->second;
    }
    for ( std::map<std::string, Function*>::iterator i = fr.begin(); i != fr.end(); ++i ) {
        delete i->second;
    }

    delete r;
    referenceTable.pop_back();
}

void ISNSInterpreter::warning ( std::__cxx11::string e ) {
    warnings.push_back ( e );
}


void ISNSInterpreter::printWarns() {
    int i = 1;
    for ( auto s: warnings ) {
        std::cout << "Warning " << i << ": " << s << std::endl;
        i++;
    }
}

void ISNSInterpreter::abort ( std::__cxx11::string e ) {
    throw ISNSRuntimeException ( "Runtime Error: " + e );
}

void ISNSInterpreter::printAllFunction() {
    std::cout << "*****Functions***** " << std::endl;
    std::cout << getAllFunctionReferences().size() << std::endl;
    for ( std::pair<std::string, Function*> f : getAllFunctionReferences() ) {
        std::cout << f.second->toString() << std::endl;
    }
    std::cout << "*****/Functions***** " << std::endl;
}

void ISNSInterpreter::printAllVar() {
    std::cout << "*****Variables***** " << std::endl;
    std::cout << getAllVarReferences().size() << std::endl;
    for ( std::pair<std::string,Var*> v : getAllVarReferences() ) {
        std::cout << v.second->toString() << std::endl;
    }
    std::cout << "*****/Variables***** " << std::endl;
}

void ISNSInterpreter::disableWarns() {
    this->warnsEnabled = false;
}

void ISNSInterpreter::enableWarns() {
    this->warnsEnabled = true;
}

int ISNSInterpreter::getReturnValue() {
	return this->returnValue;
}