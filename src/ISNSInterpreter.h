#pragma once

#include <antlr4-runtime.h>
#include "ISNSBaseVisitor.h"
#include "lang/ReferenceTable.h"
#include "lang/Function.h"
#include "lang/Var.h"
#include "ISNSLexer.h"
#include "ISNSErrorListener.h"
#include "lang/SysFunctions.h"

class ISNSInterpreter : public ISNSBaseVisitor{

protected:
    /*******Required to make parse trees of imports persistent********/
    std::vector<antlr4::ANTLRInputStream*> _importInput;
    std::vector<ISNSLexer*> _importLexer;
    std::vector<antlr4::CommonTokenStream*> _importTokens;
    std::vector<ISNSParser*> _importParser;
    std::vector<ISNSParser::ImportedlibraryContext*> _importLibraryCtx;
    ISNSErrorListener _importListener;

private:
    std::vector<ReferenceTable*> referenceTable;
    std::vector<Function*> currentlyExecuting;
    std::vector<antlr4::tree::ParseTree*> importTrees;
    Function* currentFunction;
    std::vector<std::string> warnings;
    bool warnsEnabled = true;
	int returnValue;

    /**Mr. Dummy is here to ensure that no segmentation faults happen.**/
    antlrcpp::Any dummy;

    /**NON-visitors**/

    Function* findFunction ( std::string ref );
    Var* findVar ( std::string ref );
    void enterScope();
    void exitScope();
    ReferenceTable* getScope();
    std::map<std::string, Var*> getAllVarReferences();
    std::map<std::string, Var*> getPrevVarReferences();
    std::map<std::string, Function*> getAllFunctionReferences();
    std::map<std::string, Function* > getPrevFunctionReferences();
    void printWarns();
    void abort ( std::string e );
    void printAllVar();
    void printAllFunction();
    void initSysFunctions();
    antlrcpp::Any callSysFunction ( Function* f , std::vector<antlrcpp::Any> args );

public:
    ~ISNSInterpreter();
    antlrcpp::Any visitAssignment ( ISNSParser::AssignmentContext* ctx );
    antlrcpp::Any visitAtom ( ISNSParser::AtomContext* ctx );
    antlrcpp::Any visitBexp ( ISNSParser::BexpContext* ctx );
    antlrcpp::Any visitBlock ( ISNSParser::BlockContext* ctx );
    antlrcpp::Any visitCallargs ( ISNSParser::CallargsContext* ctx );
    antlrcpp::Any visitDeclaration ( ISNSParser::DeclarationContext* ctx );
    antlrcpp::Any visitExp ( ISNSParser::ExpContext* ctx );
    antlrcpp::Any visitForblock ( ISNSParser::ForblockContext* ctx );
    antlrcpp::Any visitFunctioncall ( ISNSParser::FunctioncallContext* ctx );
    antlrcpp::Any visitFunctiondeclaration ( ISNSParser::FunctiondeclarationContext* ctx );
    antlrcpp::Any visitIfblock ( ISNSParser::IfblockContext* ctx );
    antlrcpp::Any visitImportlib ( ISNSParser::ImportlibContext* ctx );
    antlrcpp::Any visitLiteral ( ISNSParser::LiteralContext* ctx );
    antlrcpp::Any visitMexp ( ISNSParser::MexpContext* ctx );
    antlrcpp::Any visitNumber ( ISNSParser::NumberContext* ctx );
    antlrcpp::Any visitPath ( ISNSParser::PathContext* ctx );
    antlrcpp::Any visitPexp ( ISNSParser::PexpContext* ctx );
    antlrcpp::Any visitProgram ( ISNSParser::ProgramContext* ctx );
    antlrcpp::Any visitReturnstatement ( ISNSParser::ReturnstatementContext* ctx );
    antlrcpp::Any visitStatement ( ISNSParser::StatementContext* ctx );
    antlrcpp::Any visitString ( ISNSParser::StringContext* ctx );
    antlrcpp::Any visitUop ( ISNSParser::UopContext* ctx );
    antlrcpp::Any visitValue ( ISNSParser::ValueContext* ctx );
    antlrcpp::Any visitVardeclaration ( ISNSParser::VardeclarationContext* ctx );
    antlrcpp::Any visitWhileblock ( ISNSParser::WhileblockContext* ctx );
    antlrcpp::Any visitForcond ( ISNSParser::ForcondContext* ctx );
    antlrcpp::Any visitForinit ( ISNSParser::ForinitContext* ctx );
    antlrcpp::Any visitForstep ( ISNSParser::ForstepContext* ctx );
    antlrcpp::Any visitImportedlibrary ( ISNSParser::ImportedlibraryContext* ctx );
    antlrcpp::Any visitIdentifier ( ISNSParser::IdentifierContext* ctx );

    antlrcpp::Any callMainFunction ( ISNSParser::FunctiondeclarationContext* mainFunction );

    void warning ( std::string e );
    void enableWarns();
    void disableWarns();
	int getReturnValue();

};