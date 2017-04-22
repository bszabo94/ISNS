
// Generated from ISNS.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "ISNSVisitor.h"


/**
 * This class provides an empty implementation of ISNSVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ISNSBaseVisitor : public ISNSVisitor {
public:

  virtual antlrcpp::Any visitProgram(ISNSParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportedlibrary(ISNSParser::ImportedlibraryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportlib(ISNSParser::ImportlibContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPath(ISNSParser::PathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(ISNSParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVardeclaration(ISNSParser::VardeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVartype(ISNSParser::VartypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctiondeclaration(ISNSParser::FunctiondeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctiontype(ISNSParser::FunctiontypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(ISNSParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(ISNSParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(ISNSParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(ISNSParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(ISNSParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(ISNSParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctioncall(ISNSParser::FunctioncallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallargs(ISNSParser::CallargsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExp(ISNSParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMexp(ISNSParser::MexpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPexp(ISNSParser::PexpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBexp(ISNSParser::BexpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(ISNSParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfblock(ISNSParser::IfblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileblock(ISNSParser::WhileblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForblock(ISNSParser::ForblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForinit(ISNSParser::ForinitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForcond(ISNSParser::ForcondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForstep(ISNSParser::ForstepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnstatement(ISNSParser::ReturnstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompareop(ISNSParser::CompareopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUop(ISNSParser::UopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(ISNSParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(ISNSParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStackmark(ISNSParser::StackmarkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(ISNSParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }


};

