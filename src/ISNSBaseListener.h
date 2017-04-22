
// Generated from ISNS.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "ISNSListener.h"


/**
 * This class provides an empty implementation of ISNSListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ISNSBaseListener : public ISNSListener {
public:

  virtual void enterProgram(ISNSParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ISNSParser::ProgramContext * /*ctx*/) override { }

  virtual void enterImportedlibrary(ISNSParser::ImportedlibraryContext * /*ctx*/) override { }
  virtual void exitImportedlibrary(ISNSParser::ImportedlibraryContext * /*ctx*/) override { }

  virtual void enterImportlib(ISNSParser::ImportlibContext * /*ctx*/) override { }
  virtual void exitImportlib(ISNSParser::ImportlibContext * /*ctx*/) override { }

  virtual void enterPath(ISNSParser::PathContext * /*ctx*/) override { }
  virtual void exitPath(ISNSParser::PathContext * /*ctx*/) override { }

  virtual void enterDeclaration(ISNSParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(ISNSParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterVardeclaration(ISNSParser::VardeclarationContext * /*ctx*/) override { }
  virtual void exitVardeclaration(ISNSParser::VardeclarationContext * /*ctx*/) override { }

  virtual void enterVartype(ISNSParser::VartypeContext * /*ctx*/) override { }
  virtual void exitVartype(ISNSParser::VartypeContext * /*ctx*/) override { }

  virtual void enterFunctiondeclaration(ISNSParser::FunctiondeclarationContext * /*ctx*/) override { }
  virtual void exitFunctiondeclaration(ISNSParser::FunctiondeclarationContext * /*ctx*/) override { }

  virtual void enterFunctiontype(ISNSParser::FunctiontypeContext * /*ctx*/) override { }
  virtual void exitFunctiontype(ISNSParser::FunctiontypeContext * /*ctx*/) override { }

  virtual void enterArgs(ISNSParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(ISNSParser::ArgsContext * /*ctx*/) override { }

  virtual void enterBlock(ISNSParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(ISNSParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(ISNSParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(ISNSParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(ISNSParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(ISNSParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterValue(ISNSParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(ISNSParser::ValueContext * /*ctx*/) override { }

  virtual void enterLiteral(ISNSParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(ISNSParser::LiteralContext * /*ctx*/) override { }

  virtual void enterFunctioncall(ISNSParser::FunctioncallContext * /*ctx*/) override { }
  virtual void exitFunctioncall(ISNSParser::FunctioncallContext * /*ctx*/) override { }

  virtual void enterCallargs(ISNSParser::CallargsContext * /*ctx*/) override { }
  virtual void exitCallargs(ISNSParser::CallargsContext * /*ctx*/) override { }

  virtual void enterExp(ISNSParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(ISNSParser::ExpContext * /*ctx*/) override { }

  virtual void enterMexp(ISNSParser::MexpContext * /*ctx*/) override { }
  virtual void exitMexp(ISNSParser::MexpContext * /*ctx*/) override { }

  virtual void enterPexp(ISNSParser::PexpContext * /*ctx*/) override { }
  virtual void exitPexp(ISNSParser::PexpContext * /*ctx*/) override { }

  virtual void enterBexp(ISNSParser::BexpContext * /*ctx*/) override { }
  virtual void exitBexp(ISNSParser::BexpContext * /*ctx*/) override { }

  virtual void enterAtom(ISNSParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(ISNSParser::AtomContext * /*ctx*/) override { }

  virtual void enterIfblock(ISNSParser::IfblockContext * /*ctx*/) override { }
  virtual void exitIfblock(ISNSParser::IfblockContext * /*ctx*/) override { }

  virtual void enterWhileblock(ISNSParser::WhileblockContext * /*ctx*/) override { }
  virtual void exitWhileblock(ISNSParser::WhileblockContext * /*ctx*/) override { }

  virtual void enterForblock(ISNSParser::ForblockContext * /*ctx*/) override { }
  virtual void exitForblock(ISNSParser::ForblockContext * /*ctx*/) override { }

  virtual void enterForinit(ISNSParser::ForinitContext * /*ctx*/) override { }
  virtual void exitForinit(ISNSParser::ForinitContext * /*ctx*/) override { }

  virtual void enterForcond(ISNSParser::ForcondContext * /*ctx*/) override { }
  virtual void exitForcond(ISNSParser::ForcondContext * /*ctx*/) override { }

  virtual void enterForstep(ISNSParser::ForstepContext * /*ctx*/) override { }
  virtual void exitForstep(ISNSParser::ForstepContext * /*ctx*/) override { }

  virtual void enterReturnstatement(ISNSParser::ReturnstatementContext * /*ctx*/) override { }
  virtual void exitReturnstatement(ISNSParser::ReturnstatementContext * /*ctx*/) override { }

  virtual void enterCompareop(ISNSParser::CompareopContext * /*ctx*/) override { }
  virtual void exitCompareop(ISNSParser::CompareopContext * /*ctx*/) override { }

  virtual void enterUop(ISNSParser::UopContext * /*ctx*/) override { }
  virtual void exitUop(ISNSParser::UopContext * /*ctx*/) override { }

  virtual void enterNumber(ISNSParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(ISNSParser::NumberContext * /*ctx*/) override { }

  virtual void enterIdentifier(ISNSParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(ISNSParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterStackmark(ISNSParser::StackmarkContext * /*ctx*/) override { }
  virtual void exitStackmark(ISNSParser::StackmarkContext * /*ctx*/) override { }

  virtual void enterString(ISNSParser::StringContext * /*ctx*/) override { }
  virtual void exitString(ISNSParser::StringContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

