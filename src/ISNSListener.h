
// Generated from ISNS.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "ISNSParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ISNSParser.
 */
class  ISNSListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(ISNSParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ISNSParser::ProgramContext *ctx) = 0;

  virtual void enterImportedlibrary(ISNSParser::ImportedlibraryContext *ctx) = 0;
  virtual void exitImportedlibrary(ISNSParser::ImportedlibraryContext *ctx) = 0;

  virtual void enterImportlib(ISNSParser::ImportlibContext *ctx) = 0;
  virtual void exitImportlib(ISNSParser::ImportlibContext *ctx) = 0;

  virtual void enterPath(ISNSParser::PathContext *ctx) = 0;
  virtual void exitPath(ISNSParser::PathContext *ctx) = 0;

  virtual void enterDeclaration(ISNSParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(ISNSParser::DeclarationContext *ctx) = 0;

  virtual void enterVardeclaration(ISNSParser::VardeclarationContext *ctx) = 0;
  virtual void exitVardeclaration(ISNSParser::VardeclarationContext *ctx) = 0;

  virtual void enterVartype(ISNSParser::VartypeContext *ctx) = 0;
  virtual void exitVartype(ISNSParser::VartypeContext *ctx) = 0;

  virtual void enterFunctiondeclaration(ISNSParser::FunctiondeclarationContext *ctx) = 0;
  virtual void exitFunctiondeclaration(ISNSParser::FunctiondeclarationContext *ctx) = 0;

  virtual void enterFunctiontype(ISNSParser::FunctiontypeContext *ctx) = 0;
  virtual void exitFunctiontype(ISNSParser::FunctiontypeContext *ctx) = 0;

  virtual void enterArgs(ISNSParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(ISNSParser::ArgsContext *ctx) = 0;

  virtual void enterBlock(ISNSParser::BlockContext *ctx) = 0;
  virtual void exitBlock(ISNSParser::BlockContext *ctx) = 0;

  virtual void enterStatement(ISNSParser::StatementContext *ctx) = 0;
  virtual void exitStatement(ISNSParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(ISNSParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(ISNSParser::AssignmentContext *ctx) = 0;

  virtual void enterValue(ISNSParser::ValueContext *ctx) = 0;
  virtual void exitValue(ISNSParser::ValueContext *ctx) = 0;

  virtual void enterLiteral(ISNSParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(ISNSParser::LiteralContext *ctx) = 0;

  virtual void enterFunctioncall(ISNSParser::FunctioncallContext *ctx) = 0;
  virtual void exitFunctioncall(ISNSParser::FunctioncallContext *ctx) = 0;

  virtual void enterCallargs(ISNSParser::CallargsContext *ctx) = 0;
  virtual void exitCallargs(ISNSParser::CallargsContext *ctx) = 0;

  virtual void enterExp(ISNSParser::ExpContext *ctx) = 0;
  virtual void exitExp(ISNSParser::ExpContext *ctx) = 0;

  virtual void enterMexp(ISNSParser::MexpContext *ctx) = 0;
  virtual void exitMexp(ISNSParser::MexpContext *ctx) = 0;

  virtual void enterPexp(ISNSParser::PexpContext *ctx) = 0;
  virtual void exitPexp(ISNSParser::PexpContext *ctx) = 0;

  virtual void enterBexp(ISNSParser::BexpContext *ctx) = 0;
  virtual void exitBexp(ISNSParser::BexpContext *ctx) = 0;

  virtual void enterAtom(ISNSParser::AtomContext *ctx) = 0;
  virtual void exitAtom(ISNSParser::AtomContext *ctx) = 0;

  virtual void enterIfblock(ISNSParser::IfblockContext *ctx) = 0;
  virtual void exitIfblock(ISNSParser::IfblockContext *ctx) = 0;

  virtual void enterWhileblock(ISNSParser::WhileblockContext *ctx) = 0;
  virtual void exitWhileblock(ISNSParser::WhileblockContext *ctx) = 0;

  virtual void enterForblock(ISNSParser::ForblockContext *ctx) = 0;
  virtual void exitForblock(ISNSParser::ForblockContext *ctx) = 0;

  virtual void enterForinit(ISNSParser::ForinitContext *ctx) = 0;
  virtual void exitForinit(ISNSParser::ForinitContext *ctx) = 0;

  virtual void enterForcond(ISNSParser::ForcondContext *ctx) = 0;
  virtual void exitForcond(ISNSParser::ForcondContext *ctx) = 0;

  virtual void enterForstep(ISNSParser::ForstepContext *ctx) = 0;
  virtual void exitForstep(ISNSParser::ForstepContext *ctx) = 0;

  virtual void enterReturnstatement(ISNSParser::ReturnstatementContext *ctx) = 0;
  virtual void exitReturnstatement(ISNSParser::ReturnstatementContext *ctx) = 0;

  virtual void enterCompareop(ISNSParser::CompareopContext *ctx) = 0;
  virtual void exitCompareop(ISNSParser::CompareopContext *ctx) = 0;

  virtual void enterUop(ISNSParser::UopContext *ctx) = 0;
  virtual void exitUop(ISNSParser::UopContext *ctx) = 0;

  virtual void enterNumber(ISNSParser::NumberContext *ctx) = 0;
  virtual void exitNumber(ISNSParser::NumberContext *ctx) = 0;

  virtual void enterIdentifier(ISNSParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(ISNSParser::IdentifierContext *ctx) = 0;

  virtual void enterStackmark(ISNSParser::StackmarkContext *ctx) = 0;
  virtual void exitStackmark(ISNSParser::StackmarkContext *ctx) = 0;

  virtual void enterString(ISNSParser::StringContext *ctx) = 0;
  virtual void exitString(ISNSParser::StringContext *ctx) = 0;


};

