
// Generated from ISNS.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "ISNSParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ISNSParser.
 */
class  ISNSVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ISNSParser.
   */
    virtual antlrcpp::Any visitProgram(ISNSParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitImportedlibrary(ISNSParser::ImportedlibraryContext *context) = 0;

    virtual antlrcpp::Any visitImportlib(ISNSParser::ImportlibContext *context) = 0;

    virtual antlrcpp::Any visitPath(ISNSParser::PathContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(ISNSParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVardeclaration(ISNSParser::VardeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVartype(ISNSParser::VartypeContext *context) = 0;

    virtual antlrcpp::Any visitFunctiondeclaration(ISNSParser::FunctiondeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctiontype(ISNSParser::FunctiontypeContext *context) = 0;

    virtual antlrcpp::Any visitArgs(ISNSParser::ArgsContext *context) = 0;

    virtual antlrcpp::Any visitBlock(ISNSParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStatement(ISNSParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(ISNSParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitValue(ISNSParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(ISNSParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitFunctioncall(ISNSParser::FunctioncallContext *context) = 0;

    virtual antlrcpp::Any visitCallargs(ISNSParser::CallargsContext *context) = 0;

    virtual antlrcpp::Any visitExp(ISNSParser::ExpContext *context) = 0;

    virtual antlrcpp::Any visitMexp(ISNSParser::MexpContext *context) = 0;

    virtual antlrcpp::Any visitPexp(ISNSParser::PexpContext *context) = 0;

    virtual antlrcpp::Any visitBexp(ISNSParser::BexpContext *context) = 0;

    virtual antlrcpp::Any visitAtom(ISNSParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitIfblock(ISNSParser::IfblockContext *context) = 0;

    virtual antlrcpp::Any visitWhileblock(ISNSParser::WhileblockContext *context) = 0;

    virtual antlrcpp::Any visitForblock(ISNSParser::ForblockContext *context) = 0;

    virtual antlrcpp::Any visitForinit(ISNSParser::ForinitContext *context) = 0;

    virtual antlrcpp::Any visitForcond(ISNSParser::ForcondContext *context) = 0;

    virtual antlrcpp::Any visitForstep(ISNSParser::ForstepContext *context) = 0;

    virtual antlrcpp::Any visitReturnstatement(ISNSParser::ReturnstatementContext *context) = 0;

    virtual antlrcpp::Any visitCompareop(ISNSParser::CompareopContext *context) = 0;

    virtual antlrcpp::Any visitUop(ISNSParser::UopContext *context) = 0;

    virtual antlrcpp::Any visitNumber(ISNSParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(ISNSParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitStackmark(ISNSParser::StackmarkContext *context) = 0;

    virtual antlrcpp::Any visitString(ISNSParser::StringContext *context) = 0;


};

