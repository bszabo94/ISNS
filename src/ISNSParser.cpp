
// Generated from ISNS.g4 by ANTLR 4.7


#include "ISNSListener.h"
#include "ISNSVisitor.h"

#include "ISNSParser.h"


using namespace antlrcpp;
using namespace antlr4;

ISNSParser::ISNSParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ISNSParser::~ISNSParser() {
  delete _interpreter;
}

std::string ISNSParser::getGrammarFileName() const {
  return "ISNS.g4";
}

const std::vector<std::string>& ISNSParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ISNSParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

ISNSParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ISNSParser::ProgramContext::EOF() {
  return getToken(ISNSParser::EOF, 0);
}

std::vector<ISNSParser::ImportlibContext *> ISNSParser::ProgramContext::importlib() {
  return getRuleContexts<ISNSParser::ImportlibContext>();
}

ISNSParser::ImportlibContext* ISNSParser::ProgramContext::importlib(size_t i) {
  return getRuleContext<ISNSParser::ImportlibContext>(i);
}

std::vector<ISNSParser::DeclarationContext *> ISNSParser::ProgramContext::declaration() {
  return getRuleContexts<ISNSParser::DeclarationContext>();
}

ISNSParser::DeclarationContext* ISNSParser::ProgramContext::declaration(size_t i) {
  return getRuleContext<ISNSParser::DeclarationContext>(i);
}


size_t ISNSParser::ProgramContext::getRuleIndex() const {
  return ISNSParser::RuleProgram;
}

void ISNSParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void ISNSParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any ISNSParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::ProgramContext* ISNSParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ISNSParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ISNSParser::T__0) {
      setState(70);
      importlib();
      setState(75);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(79);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::INTTYPE)
      | (1ULL << ISNSParser::STRTYPE)
      | (1ULL << ISNSParser::BYTETYPE)
      | (1ULL << ISNSParser::VOIDTYPE)
      | (1ULL << ISNSParser::FRACTYPE))) != 0)) {
      setState(76);
      declaration();
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(82);
    match(ISNSParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportedlibraryContext ------------------------------------------------------------------

ISNSParser::ImportedlibraryContext::ImportedlibraryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ISNSParser::ImportedlibraryContext::EOF() {
  return getToken(ISNSParser::EOF, 0);
}

std::vector<ISNSParser::ImportlibContext *> ISNSParser::ImportedlibraryContext::importlib() {
  return getRuleContexts<ISNSParser::ImportlibContext>();
}

ISNSParser::ImportlibContext* ISNSParser::ImportedlibraryContext::importlib(size_t i) {
  return getRuleContext<ISNSParser::ImportlibContext>(i);
}

std::vector<ISNSParser::DeclarationContext *> ISNSParser::ImportedlibraryContext::declaration() {
  return getRuleContexts<ISNSParser::DeclarationContext>();
}

ISNSParser::DeclarationContext* ISNSParser::ImportedlibraryContext::declaration(size_t i) {
  return getRuleContext<ISNSParser::DeclarationContext>(i);
}


size_t ISNSParser::ImportedlibraryContext::getRuleIndex() const {
  return ISNSParser::RuleImportedlibrary;
}

void ISNSParser::ImportedlibraryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportedlibrary(this);
}

void ISNSParser::ImportedlibraryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportedlibrary(this);
}


antlrcpp::Any ISNSParser::ImportedlibraryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitImportedlibrary(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::ImportedlibraryContext* ISNSParser::importedlibrary() {
  ImportedlibraryContext *_localctx = _tracker.createInstance<ImportedlibraryContext>(_ctx, getState());
  enterRule(_localctx, 2, ISNSParser::RuleImportedlibrary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ISNSParser::T__0) {
      setState(84);
      importlib();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(93);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::INTTYPE)
      | (1ULL << ISNSParser::STRTYPE)
      | (1ULL << ISNSParser::BYTETYPE)
      | (1ULL << ISNSParser::VOIDTYPE)
      | (1ULL << ISNSParser::FRACTYPE))) != 0)) {
      setState(90);
      declaration();
      setState(95);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(96);
    match(ISNSParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportlibContext ------------------------------------------------------------------

ISNSParser::ImportlibContext::ImportlibContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ISNSParser::PathContext *> ISNSParser::ImportlibContext::path() {
  return getRuleContexts<ISNSParser::PathContext>();
}

ISNSParser::PathContext* ISNSParser::ImportlibContext::path(size_t i) {
  return getRuleContext<ISNSParser::PathContext>(i);
}


size_t ISNSParser::ImportlibContext::getRuleIndex() const {
  return ISNSParser::RuleImportlib;
}

void ISNSParser::ImportlibContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportlib(this);
}

void ISNSParser::ImportlibContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportlib(this);
}


antlrcpp::Any ISNSParser::ImportlibContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitImportlib(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::ImportlibContext* ISNSParser::importlib() {
  ImportlibContext *_localctx = _tracker.createInstance<ImportlibContext>(_ctx, getState());
  enterRule(_localctx, 4, ISNSParser::RuleImportlib);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(ISNSParser::T__0);
    setState(99);
    path();
    setState(104);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ISNSParser::T__1) {
      setState(100);
      match(ISNSParser::T__1);
      setState(101);
      path();
      setState(106);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(107);
    match(ISNSParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathContext ------------------------------------------------------------------

ISNSParser::PathContext::PathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::StringContext* ISNSParser::PathContext::string() {
  return getRuleContext<ISNSParser::StringContext>(0);
}


size_t ISNSParser::PathContext::getRuleIndex() const {
  return ISNSParser::RulePath;
}

void ISNSParser::PathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPath(this);
}

void ISNSParser::PathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPath(this);
}


antlrcpp::Any ISNSParser::PathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitPath(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::PathContext* ISNSParser::path() {
  PathContext *_localctx = _tracker.createInstance<PathContext>(_ctx, getState());
  enterRule(_localctx, 6, ISNSParser::RulePath);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

ISNSParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::VardeclarationContext* ISNSParser::DeclarationContext::vardeclaration() {
  return getRuleContext<ISNSParser::VardeclarationContext>(0);
}

ISNSParser::FunctiondeclarationContext* ISNSParser::DeclarationContext::functiondeclaration() {
  return getRuleContext<ISNSParser::FunctiondeclarationContext>(0);
}


size_t ISNSParser::DeclarationContext::getRuleIndex() const {
  return ISNSParser::RuleDeclaration;
}

void ISNSParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void ISNSParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any ISNSParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::DeclarationContext* ISNSParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, ISNSParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(111);
      vardeclaration();
      setState(112);
      match(ISNSParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(114);
      functiondeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VardeclarationContext ------------------------------------------------------------------

ISNSParser::VardeclarationContext::VardeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::VartypeContext* ISNSParser::VardeclarationContext::vartype() {
  return getRuleContext<ISNSParser::VartypeContext>(0);
}

std::vector<ISNSParser::IdentifierContext *> ISNSParser::VardeclarationContext::identifier() {
  return getRuleContexts<ISNSParser::IdentifierContext>();
}

ISNSParser::IdentifierContext* ISNSParser::VardeclarationContext::identifier(size_t i) {
  return getRuleContext<ISNSParser::IdentifierContext>(i);
}

std::vector<ISNSParser::AssignmentContext *> ISNSParser::VardeclarationContext::assignment() {
  return getRuleContexts<ISNSParser::AssignmentContext>();
}

ISNSParser::AssignmentContext* ISNSParser::VardeclarationContext::assignment(size_t i) {
  return getRuleContext<ISNSParser::AssignmentContext>(i);
}


size_t ISNSParser::VardeclarationContext::getRuleIndex() const {
  return ISNSParser::RuleVardeclaration;
}

void ISNSParser::VardeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVardeclaration(this);
}

void ISNSParser::VardeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVardeclaration(this);
}


antlrcpp::Any ISNSParser::VardeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitVardeclaration(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::VardeclarationContext* ISNSParser::vardeclaration() {
  VardeclarationContext *_localctx = _tracker.createInstance<VardeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, ISNSParser::RuleVardeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(117);
    vartype();
    setState(120);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(118);
      identifier();
      break;
    }

    case 2: {
      setState(119);
      assignment();
      break;
    }

    }
    setState(129);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(122);
        match(ISNSParser::T__1);
        setState(125);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          setState(123);
          identifier();
          break;
        }

        case 2: {
          setState(124);
          assignment();
          break;
        }

        } 
      }
      setState(131);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VartypeContext ------------------------------------------------------------------

ISNSParser::VartypeContext::VartypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ISNSParser::VartypeContext::INTTYPE() {
  return getToken(ISNSParser::INTTYPE, 0);
}

tree::TerminalNode* ISNSParser::VartypeContext::STRTYPE() {
  return getToken(ISNSParser::STRTYPE, 0);
}

tree::TerminalNode* ISNSParser::VartypeContext::BYTETYPE() {
  return getToken(ISNSParser::BYTETYPE, 0);
}

tree::TerminalNode* ISNSParser::VartypeContext::FRACTYPE() {
  return getToken(ISNSParser::FRACTYPE, 0);
}


size_t ISNSParser::VartypeContext::getRuleIndex() const {
  return ISNSParser::RuleVartype;
}

void ISNSParser::VartypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVartype(this);
}

void ISNSParser::VartypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVartype(this);
}


antlrcpp::Any ISNSParser::VartypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitVartype(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::VartypeContext* ISNSParser::vartype() {
  VartypeContext *_localctx = _tracker.createInstance<VartypeContext>(_ctx, getState());
  enterRule(_localctx, 12, ISNSParser::RuleVartype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::INTTYPE)
      | (1ULL << ISNSParser::STRTYPE)
      | (1ULL << ISNSParser::BYTETYPE)
      | (1ULL << ISNSParser::FRACTYPE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondeclarationContext ------------------------------------------------------------------

ISNSParser::FunctiondeclarationContext::FunctiondeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::FunctiontypeContext* ISNSParser::FunctiondeclarationContext::functiontype() {
  return getRuleContext<ISNSParser::FunctiontypeContext>(0);
}

ISNSParser::IdentifierContext* ISNSParser::FunctiondeclarationContext::identifier() {
  return getRuleContext<ISNSParser::IdentifierContext>(0);
}

ISNSParser::BlockContext* ISNSParser::FunctiondeclarationContext::block() {
  return getRuleContext<ISNSParser::BlockContext>(0);
}

ISNSParser::ArgsContext* ISNSParser::FunctiondeclarationContext::args() {
  return getRuleContext<ISNSParser::ArgsContext>(0);
}


size_t ISNSParser::FunctiondeclarationContext::getRuleIndex() const {
  return ISNSParser::RuleFunctiondeclaration;
}

void ISNSParser::FunctiondeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiondeclaration(this);
}

void ISNSParser::FunctiondeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiondeclaration(this);
}


antlrcpp::Any ISNSParser::FunctiondeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitFunctiondeclaration(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::FunctiondeclarationContext* ISNSParser::functiondeclaration() {
  FunctiondeclarationContext *_localctx = _tracker.createInstance<FunctiondeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, ISNSParser::RuleFunctiondeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    functiontype();
    setState(135);
    identifier();
    setState(136);
    match(ISNSParser::T__3);
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::INTTYPE)
      | (1ULL << ISNSParser::STRTYPE)
      | (1ULL << ISNSParser::BYTETYPE)
      | (1ULL << ISNSParser::FRACTYPE))) != 0)) {
      setState(137);
      args();
    }
    setState(140);
    match(ISNSParser::T__4);
    setState(141);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiontypeContext ------------------------------------------------------------------

ISNSParser::FunctiontypeContext::FunctiontypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ISNSParser::FunctiontypeContext::INTTYPE() {
  return getToken(ISNSParser::INTTYPE, 0);
}

tree::TerminalNode* ISNSParser::FunctiontypeContext::STRTYPE() {
  return getToken(ISNSParser::STRTYPE, 0);
}

tree::TerminalNode* ISNSParser::FunctiontypeContext::BYTETYPE() {
  return getToken(ISNSParser::BYTETYPE, 0);
}

tree::TerminalNode* ISNSParser::FunctiontypeContext::FRACTYPE() {
  return getToken(ISNSParser::FRACTYPE, 0);
}

tree::TerminalNode* ISNSParser::FunctiontypeContext::VOIDTYPE() {
  return getToken(ISNSParser::VOIDTYPE, 0);
}


size_t ISNSParser::FunctiontypeContext::getRuleIndex() const {
  return ISNSParser::RuleFunctiontype;
}

void ISNSParser::FunctiontypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiontype(this);
}

void ISNSParser::FunctiontypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiontype(this);
}


antlrcpp::Any ISNSParser::FunctiontypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitFunctiontype(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::FunctiontypeContext* ISNSParser::functiontype() {
  FunctiontypeContext *_localctx = _tracker.createInstance<FunctiontypeContext>(_ctx, getState());
  enterRule(_localctx, 16, ISNSParser::RuleFunctiontype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::INTTYPE)
      | (1ULL << ISNSParser::STRTYPE)
      | (1ULL << ISNSParser::BYTETYPE)
      | (1ULL << ISNSParser::VOIDTYPE)
      | (1ULL << ISNSParser::FRACTYPE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

ISNSParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ISNSParser::VardeclarationContext *> ISNSParser::ArgsContext::vardeclaration() {
  return getRuleContexts<ISNSParser::VardeclarationContext>();
}

ISNSParser::VardeclarationContext* ISNSParser::ArgsContext::vardeclaration(size_t i) {
  return getRuleContext<ISNSParser::VardeclarationContext>(i);
}


size_t ISNSParser::ArgsContext::getRuleIndex() const {
  return ISNSParser::RuleArgs;
}

void ISNSParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void ISNSParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}


antlrcpp::Any ISNSParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::ArgsContext* ISNSParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 18, ISNSParser::RuleArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    vardeclaration();
    setState(150);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ISNSParser::T__1) {
      setState(146);
      match(ISNSParser::T__1);
      setState(147);
      vardeclaration();
      setState(152);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ISNSParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ISNSParser::StatementContext *> ISNSParser::BlockContext::statement() {
  return getRuleContexts<ISNSParser::StatementContext>();
}

ISNSParser::StatementContext* ISNSParser::BlockContext::statement(size_t i) {
  return getRuleContext<ISNSParser::StatementContext>(i);
}


size_t ISNSParser::BlockContext::getRuleIndex() const {
  return ISNSParser::RuleBlock;
}

void ISNSParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void ISNSParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any ISNSParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::BlockContext* ISNSParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 20, ISNSParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(ISNSParser::T__5);
    setState(157);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::T__3)
      | (1ULL << ISNSParser::T__8)
      | (1ULL << ISNSParser::T__10)
      | (1ULL << ISNSParser::T__11)
      | (1ULL << ISNSParser::T__12)
      | (1ULL << ISNSParser::UBITWISE)
      | (1ULL << ISNSParser::INTTYPE)
      | (1ULL << ISNSParser::STRTYPE)
      | (1ULL << ISNSParser::BYTETYPE)
      | (1ULL << ISNSParser::VOIDTYPE)
      | (1ULL << ISNSParser::FRACTYPE)
      | (1ULL << ISNSParser::IDEN)
      | (1ULL << ISNSParser::INTNUMBER)
      | (1ULL << ISNSParser::FRACNUMBER)
      | (1ULL << ISNSParser::BINNUMBER)
      | (1ULL << ISNSParser::SSTRING)
      | (1ULL << ISNSParser::DSTRING))) != 0)) {
      setState(154);
      statement();
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(160);
    match(ISNSParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ISNSParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::DeclarationContext* ISNSParser::StatementContext::declaration() {
  return getRuleContext<ISNSParser::DeclarationContext>(0);
}

ISNSParser::AssignmentContext* ISNSParser::StatementContext::assignment() {
  return getRuleContext<ISNSParser::AssignmentContext>(0);
}

ISNSParser::ValueContext* ISNSParser::StatementContext::value() {
  return getRuleContext<ISNSParser::ValueContext>(0);
}

ISNSParser::ReturnstatementContext* ISNSParser::StatementContext::returnstatement() {
  return getRuleContext<ISNSParser::ReturnstatementContext>(0);
}

ISNSParser::IfblockContext* ISNSParser::StatementContext::ifblock() {
  return getRuleContext<ISNSParser::IfblockContext>(0);
}

ISNSParser::WhileblockContext* ISNSParser::StatementContext::whileblock() {
  return getRuleContext<ISNSParser::WhileblockContext>(0);
}

ISNSParser::ForblockContext* ISNSParser::StatementContext::forblock() {
  return getRuleContext<ISNSParser::ForblockContext>(0);
}


size_t ISNSParser::StatementContext::getRuleIndex() const {
  return ISNSParser::RuleStatement;
}

void ISNSParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void ISNSParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any ISNSParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::StatementContext* ISNSParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, ISNSParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(162);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(163);
      assignment();
      setState(164);
      match(ISNSParser::T__2);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(166);
      value();
      setState(167);
      match(ISNSParser::T__2);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(169);
      returnstatement();
      setState(170);
      match(ISNSParser::T__2);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(172);
      ifblock();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(173);
      whileblock();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(174);
      forblock();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

ISNSParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::IdentifierContext* ISNSParser::AssignmentContext::identifier() {
  return getRuleContext<ISNSParser::IdentifierContext>(0);
}

ISNSParser::ValueContext* ISNSParser::AssignmentContext::value() {
  return getRuleContext<ISNSParser::ValueContext>(0);
}

ISNSParser::CompareopContext* ISNSParser::AssignmentContext::compareop() {
  return getRuleContext<ISNSParser::CompareopContext>(0);
}


size_t ISNSParser::AssignmentContext::getRuleIndex() const {
  return ISNSParser::RuleAssignment;
}

void ISNSParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void ISNSParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


antlrcpp::Any ISNSParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::AssignmentContext* ISNSParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 24, ISNSParser::RuleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(177);
      identifier();
      setState(178);
      match(ISNSParser::T__7);
      setState(179);
      value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(181);
      identifier();
      setState(182);
      match(ISNSParser::T__7);
      setState(183);
      compareop();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

ISNSParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::IdentifierContext* ISNSParser::ValueContext::identifier() {
  return getRuleContext<ISNSParser::IdentifierContext>(0);
}

ISNSParser::LiteralContext* ISNSParser::ValueContext::literal() {
  return getRuleContext<ISNSParser::LiteralContext>(0);
}

ISNSParser::ExpContext* ISNSParser::ValueContext::exp() {
  return getRuleContext<ISNSParser::ExpContext>(0);
}


size_t ISNSParser::ValueContext::getRuleIndex() const {
  return ISNSParser::RuleValue;
}

void ISNSParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void ISNSParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any ISNSParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::ValueContext* ISNSParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 26, ISNSParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(187);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(188);
      literal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(189);
      exp();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

ISNSParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::StringContext* ISNSParser::LiteralContext::string() {
  return getRuleContext<ISNSParser::StringContext>(0);
}

ISNSParser::NumberContext* ISNSParser::LiteralContext::number() {
  return getRuleContext<ISNSParser::NumberContext>(0);
}


size_t ISNSParser::LiteralContext::getRuleIndex() const {
  return ISNSParser::RuleLiteral;
}

void ISNSParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void ISNSParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any ISNSParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::LiteralContext* ISNSParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 28, ISNSParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(194);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ISNSParser::SSTRING:
      case ISNSParser::DSTRING: {
        enterOuterAlt(_localctx, 1);
        setState(192);
        string();
        break;
      }

      case ISNSParser::INTNUMBER:
      case ISNSParser::FRACNUMBER:
      case ISNSParser::BINNUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(193);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctioncallContext ------------------------------------------------------------------

ISNSParser::FunctioncallContext::FunctioncallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::IdentifierContext* ISNSParser::FunctioncallContext::identifier() {
  return getRuleContext<ISNSParser::IdentifierContext>(0);
}

ISNSParser::CallargsContext* ISNSParser::FunctioncallContext::callargs() {
  return getRuleContext<ISNSParser::CallargsContext>(0);
}


size_t ISNSParser::FunctioncallContext::getRuleIndex() const {
  return ISNSParser::RuleFunctioncall;
}

void ISNSParser::FunctioncallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctioncall(this);
}

void ISNSParser::FunctioncallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctioncall(this);
}


antlrcpp::Any ISNSParser::FunctioncallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitFunctioncall(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::FunctioncallContext* ISNSParser::functioncall() {
  FunctioncallContext *_localctx = _tracker.createInstance<FunctioncallContext>(_ctx, getState());
  enterRule(_localctx, 30, ISNSParser::RuleFunctioncall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    identifier();
    setState(197);
    match(ISNSParser::T__3);
    setState(199);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::T__3)
      | (1ULL << ISNSParser::UBITWISE)
      | (1ULL << ISNSParser::IDEN)
      | (1ULL << ISNSParser::INTNUMBER)
      | (1ULL << ISNSParser::FRACNUMBER)
      | (1ULL << ISNSParser::BINNUMBER)
      | (1ULL << ISNSParser::SSTRING)
      | (1ULL << ISNSParser::DSTRING))) != 0)) {
      setState(198);
      callargs();
    }
    setState(201);
    match(ISNSParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallargsContext ------------------------------------------------------------------

ISNSParser::CallargsContext::CallargsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ISNSParser::ValueContext *> ISNSParser::CallargsContext::value() {
  return getRuleContexts<ISNSParser::ValueContext>();
}

ISNSParser::ValueContext* ISNSParser::CallargsContext::value(size_t i) {
  return getRuleContext<ISNSParser::ValueContext>(i);
}


size_t ISNSParser::CallargsContext::getRuleIndex() const {
  return ISNSParser::RuleCallargs;
}

void ISNSParser::CallargsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallargs(this);
}

void ISNSParser::CallargsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallargs(this);
}


antlrcpp::Any ISNSParser::CallargsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitCallargs(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::CallargsContext* ISNSParser::callargs() {
  CallargsContext *_localctx = _tracker.createInstance<CallargsContext>(_ctx, getState());
  enterRule(_localctx, 32, ISNSParser::RuleCallargs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    value();
    setState(208);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ISNSParser::T__1) {
      setState(204);
      match(ISNSParser::T__1);
      setState(205);
      value();
      setState(210);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

ISNSParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ISNSParser::MexpContext *> ISNSParser::ExpContext::mexp() {
  return getRuleContexts<ISNSParser::MexpContext>();
}

ISNSParser::MexpContext* ISNSParser::ExpContext::mexp(size_t i) {
  return getRuleContext<ISNSParser::MexpContext>(i);
}

std::vector<tree::TerminalNode *> ISNSParser::ExpContext::PLUSMINUS() {
  return getTokens(ISNSParser::PLUSMINUS);
}

tree::TerminalNode* ISNSParser::ExpContext::PLUSMINUS(size_t i) {
  return getToken(ISNSParser::PLUSMINUS, i);
}


size_t ISNSParser::ExpContext::getRuleIndex() const {
  return ISNSParser::RuleExp;
}

void ISNSParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void ISNSParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}


antlrcpp::Any ISNSParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::ExpContext* ISNSParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 34, ISNSParser::RuleExp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    mexp();
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ISNSParser::PLUSMINUS) {
      setState(212);
      match(ISNSParser::PLUSMINUS);
      setState(213);
      mexp();
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MexpContext ------------------------------------------------------------------

ISNSParser::MexpContext::MexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ISNSParser::PexpContext *> ISNSParser::MexpContext::pexp() {
  return getRuleContexts<ISNSParser::PexpContext>();
}

ISNSParser::PexpContext* ISNSParser::MexpContext::pexp(size_t i) {
  return getRuleContext<ISNSParser::PexpContext>(i);
}

std::vector<tree::TerminalNode *> ISNSParser::MexpContext::TIMESDIVMOD() {
  return getTokens(ISNSParser::TIMESDIVMOD);
}

tree::TerminalNode* ISNSParser::MexpContext::TIMESDIVMOD(size_t i) {
  return getToken(ISNSParser::TIMESDIVMOD, i);
}


size_t ISNSParser::MexpContext::getRuleIndex() const {
  return ISNSParser::RuleMexp;
}

void ISNSParser::MexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMexp(this);
}

void ISNSParser::MexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMexp(this);
}


antlrcpp::Any ISNSParser::MexpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitMexp(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::MexpContext* ISNSParser::mexp() {
  MexpContext *_localctx = _tracker.createInstance<MexpContext>(_ctx, getState());
  enterRule(_localctx, 36, ISNSParser::RuleMexp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    pexp();
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ISNSParser::TIMESDIVMOD) {
      setState(220);
      match(ISNSParser::TIMESDIVMOD);
      setState(221);
      pexp();
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PexpContext ------------------------------------------------------------------

ISNSParser::PexpContext::PexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ISNSParser::BexpContext *> ISNSParser::PexpContext::bexp() {
  return getRuleContexts<ISNSParser::BexpContext>();
}

ISNSParser::BexpContext* ISNSParser::PexpContext::bexp(size_t i) {
  return getRuleContext<ISNSParser::BexpContext>(i);
}

std::vector<tree::TerminalNode *> ISNSParser::PexpContext::POW() {
  return getTokens(ISNSParser::POW);
}

tree::TerminalNode* ISNSParser::PexpContext::POW(size_t i) {
  return getToken(ISNSParser::POW, i);
}


size_t ISNSParser::PexpContext::getRuleIndex() const {
  return ISNSParser::RulePexp;
}

void ISNSParser::PexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPexp(this);
}

void ISNSParser::PexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPexp(this);
}


antlrcpp::Any ISNSParser::PexpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitPexp(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::PexpContext* ISNSParser::pexp() {
  PexpContext *_localctx = _tracker.createInstance<PexpContext>(_ctx, getState());
  enterRule(_localctx, 38, ISNSParser::RulePexp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    bexp();
    setState(232);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ISNSParser::POW) {
      setState(228);
      match(ISNSParser::POW);
      setState(229);
      bexp();
      setState(234);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BexpContext ------------------------------------------------------------------

ISNSParser::BexpContext::BexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ISNSParser::AtomContext *> ISNSParser::BexpContext::atom() {
  return getRuleContexts<ISNSParser::AtomContext>();
}

ISNSParser::AtomContext* ISNSParser::BexpContext::atom(size_t i) {
  return getRuleContext<ISNSParser::AtomContext>(i);
}

std::vector<tree::TerminalNode *> ISNSParser::BexpContext::BBITWISE() {
  return getTokens(ISNSParser::BBITWISE);
}

tree::TerminalNode* ISNSParser::BexpContext::BBITWISE(size_t i) {
  return getToken(ISNSParser::BBITWISE, i);
}


size_t ISNSParser::BexpContext::getRuleIndex() const {
  return ISNSParser::RuleBexp;
}

void ISNSParser::BexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBexp(this);
}

void ISNSParser::BexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBexp(this);
}


antlrcpp::Any ISNSParser::BexpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitBexp(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::BexpContext* ISNSParser::bexp() {
  BexpContext *_localctx = _tracker.createInstance<BexpContext>(_ctx, getState());
  enterRule(_localctx, 40, ISNSParser::RuleBexp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    atom();
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ISNSParser::BBITWISE) {
      setState(236);
      match(ISNSParser::BBITWISE);
      setState(237);
      atom();
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

ISNSParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::LiteralContext* ISNSParser::AtomContext::literal() {
  return getRuleContext<ISNSParser::LiteralContext>(0);
}

ISNSParser::FunctioncallContext* ISNSParser::AtomContext::functioncall() {
  return getRuleContext<ISNSParser::FunctioncallContext>(0);
}

ISNSParser::IdentifierContext* ISNSParser::AtomContext::identifier() {
  return getRuleContext<ISNSParser::IdentifierContext>(0);
}

ISNSParser::UopContext* ISNSParser::AtomContext::uop() {
  return getRuleContext<ISNSParser::UopContext>(0);
}

ISNSParser::ExpContext* ISNSParser::AtomContext::exp() {
  return getRuleContext<ISNSParser::ExpContext>(0);
}


size_t ISNSParser::AtomContext::getRuleIndex() const {
  return ISNSParser::RuleAtom;
}

void ISNSParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void ISNSParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


antlrcpp::Any ISNSParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::AtomContext* ISNSParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 42, ISNSParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(251);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(243);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(244);
      functioncall();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(245);
      identifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(246);
      uop();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(247);
      match(ISNSParser::T__3);
      setState(248);
      exp();
      setState(249);
      match(ISNSParser::T__4);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfblockContext ------------------------------------------------------------------

ISNSParser::IfblockContext::IfblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ISNSParser::BlockContext *> ISNSParser::IfblockContext::block() {
  return getRuleContexts<ISNSParser::BlockContext>();
}

ISNSParser::BlockContext* ISNSParser::IfblockContext::block(size_t i) {
  return getRuleContext<ISNSParser::BlockContext>(i);
}

ISNSParser::ValueContext* ISNSParser::IfblockContext::value() {
  return getRuleContext<ISNSParser::ValueContext>(0);
}

ISNSParser::CompareopContext* ISNSParser::IfblockContext::compareop() {
  return getRuleContext<ISNSParser::CompareopContext>(0);
}


size_t ISNSParser::IfblockContext::getRuleIndex() const {
  return ISNSParser::RuleIfblock;
}

void ISNSParser::IfblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfblock(this);
}

void ISNSParser::IfblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfblock(this);
}


antlrcpp::Any ISNSParser::IfblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitIfblock(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::IfblockContext* ISNSParser::ifblock() {
  IfblockContext *_localctx = _tracker.createInstance<IfblockContext>(_ctx, getState());
  enterRule(_localctx, 44, ISNSParser::RuleIfblock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(ISNSParser::T__8);
    setState(254);
    match(ISNSParser::T__3);
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(255);
      value();
      break;
    }

    case 2: {
      setState(256);
      compareop();
      break;
    }

    }
    setState(259);
    match(ISNSParser::T__4);
    setState(260);
    block();
    setState(263);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ISNSParser::T__9) {
      setState(261);
      match(ISNSParser::T__9);
      setState(262);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileblockContext ------------------------------------------------------------------

ISNSParser::WhileblockContext::WhileblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::BlockContext* ISNSParser::WhileblockContext::block() {
  return getRuleContext<ISNSParser::BlockContext>(0);
}

ISNSParser::ValueContext* ISNSParser::WhileblockContext::value() {
  return getRuleContext<ISNSParser::ValueContext>(0);
}

ISNSParser::CompareopContext* ISNSParser::WhileblockContext::compareop() {
  return getRuleContext<ISNSParser::CompareopContext>(0);
}


size_t ISNSParser::WhileblockContext::getRuleIndex() const {
  return ISNSParser::RuleWhileblock;
}

void ISNSParser::WhileblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileblock(this);
}

void ISNSParser::WhileblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileblock(this);
}


antlrcpp::Any ISNSParser::WhileblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitWhileblock(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::WhileblockContext* ISNSParser::whileblock() {
  WhileblockContext *_localctx = _tracker.createInstance<WhileblockContext>(_ctx, getState());
  enterRule(_localctx, 46, ISNSParser::RuleWhileblock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(ISNSParser::T__10);
    setState(266);
    match(ISNSParser::T__3);
    setState(269);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      setState(267);
      value();
      break;
    }

    case 2: {
      setState(268);
      compareop();
      break;
    }

    }
    setState(271);
    match(ISNSParser::T__4);
    setState(272);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForblockContext ------------------------------------------------------------------

ISNSParser::ForblockContext::ForblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::BlockContext* ISNSParser::ForblockContext::block() {
  return getRuleContext<ISNSParser::BlockContext>(0);
}

ISNSParser::ForinitContext* ISNSParser::ForblockContext::forinit() {
  return getRuleContext<ISNSParser::ForinitContext>(0);
}

ISNSParser::ForcondContext* ISNSParser::ForblockContext::forcond() {
  return getRuleContext<ISNSParser::ForcondContext>(0);
}

ISNSParser::ForstepContext* ISNSParser::ForblockContext::forstep() {
  return getRuleContext<ISNSParser::ForstepContext>(0);
}


size_t ISNSParser::ForblockContext::getRuleIndex() const {
  return ISNSParser::RuleForblock;
}

void ISNSParser::ForblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForblock(this);
}

void ISNSParser::ForblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForblock(this);
}


antlrcpp::Any ISNSParser::ForblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitForblock(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::ForblockContext* ISNSParser::forblock() {
  ForblockContext *_localctx = _tracker.createInstance<ForblockContext>(_ctx, getState());
  enterRule(_localctx, 48, ISNSParser::RuleForblock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(ISNSParser::T__11);
    setState(275);
    match(ISNSParser::T__3);
    setState(277);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::T__3)
      | (1ULL << ISNSParser::UBITWISE)
      | (1ULL << ISNSParser::INTTYPE)
      | (1ULL << ISNSParser::STRTYPE)
      | (1ULL << ISNSParser::BYTETYPE)
      | (1ULL << ISNSParser::FRACTYPE)
      | (1ULL << ISNSParser::IDEN)
      | (1ULL << ISNSParser::INTNUMBER)
      | (1ULL << ISNSParser::FRACNUMBER)
      | (1ULL << ISNSParser::BINNUMBER)
      | (1ULL << ISNSParser::SSTRING)
      | (1ULL << ISNSParser::DSTRING))) != 0)) {
      setState(276);
      forinit();
    }
    setState(279);
    match(ISNSParser::T__2);
    setState(281);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::T__3)
      | (1ULL << ISNSParser::UBITWISE)
      | (1ULL << ISNSParser::IDEN)
      | (1ULL << ISNSParser::INTNUMBER)
      | (1ULL << ISNSParser::FRACNUMBER)
      | (1ULL << ISNSParser::BINNUMBER)
      | (1ULL << ISNSParser::SSTRING)
      | (1ULL << ISNSParser::DSTRING))) != 0)) {
      setState(280);
      forcond();
    }
    setState(283);
    match(ISNSParser::T__2);
    setState(285);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::T__3)
      | (1ULL << ISNSParser::UBITWISE)
      | (1ULL << ISNSParser::INTTYPE)
      | (1ULL << ISNSParser::STRTYPE)
      | (1ULL << ISNSParser::BYTETYPE)
      | (1ULL << ISNSParser::FRACTYPE)
      | (1ULL << ISNSParser::IDEN)
      | (1ULL << ISNSParser::INTNUMBER)
      | (1ULL << ISNSParser::FRACNUMBER)
      | (1ULL << ISNSParser::BINNUMBER)
      | (1ULL << ISNSParser::SSTRING)
      | (1ULL << ISNSParser::DSTRING))) != 0)) {
      setState(284);
      forstep();
    }
    setState(287);
    match(ISNSParser::T__4);
    setState(288);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForinitContext ------------------------------------------------------------------

ISNSParser::ForinitContext::ForinitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::VardeclarationContext* ISNSParser::ForinitContext::vardeclaration() {
  return getRuleContext<ISNSParser::VardeclarationContext>(0);
}

ISNSParser::AssignmentContext* ISNSParser::ForinitContext::assignment() {
  return getRuleContext<ISNSParser::AssignmentContext>(0);
}

ISNSParser::ValueContext* ISNSParser::ForinitContext::value() {
  return getRuleContext<ISNSParser::ValueContext>(0);
}

ISNSParser::CompareopContext* ISNSParser::ForinitContext::compareop() {
  return getRuleContext<ISNSParser::CompareopContext>(0);
}


size_t ISNSParser::ForinitContext::getRuleIndex() const {
  return ISNSParser::RuleForinit;
}

void ISNSParser::ForinitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForinit(this);
}

void ISNSParser::ForinitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForinit(this);
}


antlrcpp::Any ISNSParser::ForinitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitForinit(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::ForinitContext* ISNSParser::forinit() {
  ForinitContext *_localctx = _tracker.createInstance<ForinitContext>(_ctx, getState());
  enterRule(_localctx, 50, ISNSParser::RuleForinit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(294);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(290);
      vardeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(291);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(292);
      value();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(293);
      compareop();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForcondContext ------------------------------------------------------------------

ISNSParser::ForcondContext::ForcondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::ValueContext* ISNSParser::ForcondContext::value() {
  return getRuleContext<ISNSParser::ValueContext>(0);
}

ISNSParser::CompareopContext* ISNSParser::ForcondContext::compareop() {
  return getRuleContext<ISNSParser::CompareopContext>(0);
}


size_t ISNSParser::ForcondContext::getRuleIndex() const {
  return ISNSParser::RuleForcond;
}

void ISNSParser::ForcondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForcond(this);
}

void ISNSParser::ForcondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForcond(this);
}


antlrcpp::Any ISNSParser::ForcondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitForcond(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::ForcondContext* ISNSParser::forcond() {
  ForcondContext *_localctx = _tracker.createInstance<ForcondContext>(_ctx, getState());
  enterRule(_localctx, 52, ISNSParser::RuleForcond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(298);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(296);
      value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(297);
      compareop();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForstepContext ------------------------------------------------------------------

ISNSParser::ForstepContext::ForstepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::VardeclarationContext* ISNSParser::ForstepContext::vardeclaration() {
  return getRuleContext<ISNSParser::VardeclarationContext>(0);
}

ISNSParser::AssignmentContext* ISNSParser::ForstepContext::assignment() {
  return getRuleContext<ISNSParser::AssignmentContext>(0);
}

ISNSParser::ValueContext* ISNSParser::ForstepContext::value() {
  return getRuleContext<ISNSParser::ValueContext>(0);
}

ISNSParser::CompareopContext* ISNSParser::ForstepContext::compareop() {
  return getRuleContext<ISNSParser::CompareopContext>(0);
}


size_t ISNSParser::ForstepContext::getRuleIndex() const {
  return ISNSParser::RuleForstep;
}

void ISNSParser::ForstepContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForstep(this);
}

void ISNSParser::ForstepContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForstep(this);
}


antlrcpp::Any ISNSParser::ForstepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitForstep(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::ForstepContext* ISNSParser::forstep() {
  ForstepContext *_localctx = _tracker.createInstance<ForstepContext>(_ctx, getState());
  enterRule(_localctx, 54, ISNSParser::RuleForstep);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(304);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(300);
      vardeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(301);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(302);
      value();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(303);
      compareop();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnstatementContext ------------------------------------------------------------------

ISNSParser::ReturnstatementContext::ReturnstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::ValueContext* ISNSParser::ReturnstatementContext::value() {
  return getRuleContext<ISNSParser::ValueContext>(0);
}


size_t ISNSParser::ReturnstatementContext::getRuleIndex() const {
  return ISNSParser::RuleReturnstatement;
}

void ISNSParser::ReturnstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnstatement(this);
}

void ISNSParser::ReturnstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnstatement(this);
}


antlrcpp::Any ISNSParser::ReturnstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitReturnstatement(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::ReturnstatementContext* ISNSParser::returnstatement() {
  ReturnstatementContext *_localctx = _tracker.createInstance<ReturnstatementContext>(_ctx, getState());
  enterRule(_localctx, 56, ISNSParser::RuleReturnstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    match(ISNSParser::T__12);
    setState(308);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::T__3)
      | (1ULL << ISNSParser::UBITWISE)
      | (1ULL << ISNSParser::IDEN)
      | (1ULL << ISNSParser::INTNUMBER)
      | (1ULL << ISNSParser::FRACNUMBER)
      | (1ULL << ISNSParser::BINNUMBER)
      | (1ULL << ISNSParser::SSTRING)
      | (1ULL << ISNSParser::DSTRING))) != 0)) {
      setState(307);
      value();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareopContext ------------------------------------------------------------------

ISNSParser::CompareopContext::CompareopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ISNSParser::ValueContext *> ISNSParser::CompareopContext::value() {
  return getRuleContexts<ISNSParser::ValueContext>();
}

ISNSParser::ValueContext* ISNSParser::CompareopContext::value(size_t i) {
  return getRuleContext<ISNSParser::ValueContext>(i);
}

tree::TerminalNode* ISNSParser::CompareopContext::COP() {
  return getToken(ISNSParser::COP, 0);
}


size_t ISNSParser::CompareopContext::getRuleIndex() const {
  return ISNSParser::RuleCompareop;
}

void ISNSParser::CompareopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareop(this);
}

void ISNSParser::CompareopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareop(this);
}


antlrcpp::Any ISNSParser::CompareopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitCompareop(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::CompareopContext* ISNSParser::compareop() {
  CompareopContext *_localctx = _tracker.createInstance<CompareopContext>(_ctx, getState());
  enterRule(_localctx, 58, ISNSParser::RuleCompareop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    value();
    setState(311);
    match(ISNSParser::COP);
    setState(312);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UopContext ------------------------------------------------------------------

ISNSParser::UopContext::UopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ISNSParser::UopContext::UBITWISE() {
  return getToken(ISNSParser::UBITWISE, 0);
}

ISNSParser::AtomContext* ISNSParser::UopContext::atom() {
  return getRuleContext<ISNSParser::AtomContext>(0);
}


size_t ISNSParser::UopContext::getRuleIndex() const {
  return ISNSParser::RuleUop;
}

void ISNSParser::UopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUop(this);
}

void ISNSParser::UopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUop(this);
}


antlrcpp::Any ISNSParser::UopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitUop(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::UopContext* ISNSParser::uop() {
  UopContext *_localctx = _tracker.createInstance<UopContext>(_ctx, getState());
  enterRule(_localctx, 60, ISNSParser::RuleUop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(ISNSParser::UBITWISE);
    setState(315);
    atom();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

ISNSParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ISNSParser::NumberContext::INTNUMBER() {
  return getToken(ISNSParser::INTNUMBER, 0);
}

tree::TerminalNode* ISNSParser::NumberContext::FRACNUMBER() {
  return getToken(ISNSParser::FRACNUMBER, 0);
}

tree::TerminalNode* ISNSParser::NumberContext::BINNUMBER() {
  return getToken(ISNSParser::BINNUMBER, 0);
}


size_t ISNSParser::NumberContext::getRuleIndex() const {
  return ISNSParser::RuleNumber;
}

void ISNSParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void ISNSParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


antlrcpp::Any ISNSParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::NumberContext* ISNSParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 62, ISNSParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::INTNUMBER)
      | (1ULL << ISNSParser::FRACNUMBER)
      | (1ULL << ISNSParser::BINNUMBER))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

ISNSParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ISNSParser::IdentifierContext::IDEN() {
  return getToken(ISNSParser::IDEN, 0);
}

ISNSParser::StackmarkContext* ISNSParser::IdentifierContext::stackmark() {
  return getRuleContext<ISNSParser::StackmarkContext>(0);
}


size_t ISNSParser::IdentifierContext::getRuleIndex() const {
  return ISNSParser::RuleIdentifier;
}

void ISNSParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void ISNSParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any ISNSParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::IdentifierContext* ISNSParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 64, ISNSParser::RuleIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    match(ISNSParser::IDEN);
    setState(321);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ISNSParser::T__13) {
      setState(320);
      stackmark();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StackmarkContext ------------------------------------------------------------------

ISNSParser::StackmarkContext::StackmarkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ISNSParser::ValueContext* ISNSParser::StackmarkContext::value() {
  return getRuleContext<ISNSParser::ValueContext>(0);
}


size_t ISNSParser::StackmarkContext::getRuleIndex() const {
  return ISNSParser::RuleStackmark;
}

void ISNSParser::StackmarkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStackmark(this);
}

void ISNSParser::StackmarkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStackmark(this);
}


antlrcpp::Any ISNSParser::StackmarkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitStackmark(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::StackmarkContext* ISNSParser::stackmark() {
  StackmarkContext *_localctx = _tracker.createInstance<StackmarkContext>(_ctx, getState());
  enterRule(_localctx, 66, ISNSParser::RuleStackmark);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    match(ISNSParser::T__13);
    setState(325);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ISNSParser::T__3)
      | (1ULL << ISNSParser::UBITWISE)
      | (1ULL << ISNSParser::IDEN)
      | (1ULL << ISNSParser::INTNUMBER)
      | (1ULL << ISNSParser::FRACNUMBER)
      | (1ULL << ISNSParser::BINNUMBER)
      | (1ULL << ISNSParser::SSTRING)
      | (1ULL << ISNSParser::DSTRING))) != 0)) {
      setState(324);
      value();
    }
    setState(327);
    match(ISNSParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

ISNSParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ISNSParser::StringContext::SSTRING() {
  return getToken(ISNSParser::SSTRING, 0);
}

tree::TerminalNode* ISNSParser::StringContext::DSTRING() {
  return getToken(ISNSParser::DSTRING, 0);
}


size_t ISNSParser::StringContext::getRuleIndex() const {
  return ISNSParser::RuleString;
}

void ISNSParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void ISNSParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ISNSListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


antlrcpp::Any ISNSParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ISNSVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

ISNSParser::StringContext* ISNSParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 68, ISNSParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    _la = _input->LA(1);
    if (!(_la == ISNSParser::SSTRING

    || _la == ISNSParser::DSTRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ISNSParser::_decisionToDFA;
atn::PredictionContextCache ISNSParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ISNSParser::_atn;
std::vector<uint16_t> ISNSParser::_serializedATN;

std::vector<std::string> ISNSParser::_ruleNames = {
  "program", "importedlibrary", "importlib", "path", "declaration", "vardeclaration", 
  "vartype", "functiondeclaration", "functiontype", "args", "block", "statement", 
  "assignment", "value", "literal", "functioncall", "callargs", "exp", "mexp", 
  "pexp", "bexp", "atom", "ifblock", "whileblock", "forblock", "forinit", 
  "forcond", "forstep", "returnstatement", "compareop", "uop", "number", 
  "identifier", "stackmark", "string"
};

std::vector<std::string> ISNSParser::_literalNames = {
  "", "'import '", "','", "';'", "'('", "')'", "'{'", "'}'", "'='", "'if'", 
  "'else'", "'while'", "'for'", "'return '", "'['", "']'", "", "", "", "", 
  "", "", "'**'", "'int '", "'str '", "'byte '", "'void '", "'frac '"
};

std::vector<std::string> ISNSParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "LINECOMMENT", 
  "BLOCKCOMMENT", "UBITWISE", "BBITWISE", "PLUSMINUS", "TIMESDIVMOD", "POW", 
  "INTTYPE", "STRTYPE", "BYTETYPE", "VOIDTYPE", "FRACTYPE", "COP", "IDEN", 
  "INTNUMBER", "FRACNUMBER", "BINNUMBER", "SSTRING", "DSTRING", "WS"
};

dfa::Vocabulary ISNSParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ISNSParser::_tokenNames;

ISNSParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x25, 0x14e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x3, 0x2, 0x7, 
    0x2, 0x4a, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x4d, 0xb, 0x2, 0x3, 0x2, 0x7, 
    0x2, 0x50, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x53, 0xb, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x7, 0x3, 0x58, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x5b, 0xb, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x5e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x61, 0xb, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x69, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x6c, 0xb, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0x76, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x7b, 0xa, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x80, 0xa, 0x7, 0x7, 0x7, 
    0x82, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x85, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x8d, 0xa, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x7, 0xb, 0x97, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x9a, 0xb, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x7, 0xc, 0x9e, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xa1, 0xb, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x5, 0xd, 0xb2, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xbc, 0xa, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xc1, 0xa, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0xc5, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0xca, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0xd1, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xd4, 0xb, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xd9, 0xa, 0x13, 0xc, 
    0x13, 0xe, 0x13, 0xdc, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 
    0x14, 0xe1, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xe4, 0xb, 0x14, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0xe9, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
    0xec, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0xf1, 0xa, 
    0x16, 0xc, 0x16, 0xe, 0x16, 0xf4, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 
    0xfe, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x104, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x10a, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0x110, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x5, 0x1a, 0x118, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
    0x11c, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x120, 0xa, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x5, 0x1b, 0x129, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
    0x12d, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0x133, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x137, 0xa, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x144, 
    0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x148, 0xa, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x2, 0x2, 0x25, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x2, 0x6, 0x4, 0x2, 
    0x19, 0x1b, 0x1d, 0x1d, 0x3, 0x2, 0x19, 0x1d, 0x3, 0x2, 0x20, 0x22, 
    0x3, 0x2, 0x23, 0x24, 0x2, 0x15a, 0x2, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x6, 0x64, 0x3, 0x2, 0x2, 0x2, 0x8, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x75, 0x3, 0x2, 0x2, 0x2, 0xc, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x86, 0x3, 0x2, 0x2, 0x2, 0x10, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x91, 0x3, 0x2, 0x2, 0x2, 0x14, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x18, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xbb, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x22, 0xcd, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x26, 0xdd, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x32, 0x114, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x128, 0x3, 0x2, 0x2, 0x2, 0x36, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x38, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x134, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x138, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x141, 0x3, 0x2, 0x2, 0x2, 0x44, 0x145, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4a, 0x5, 0x6, 0x4, 0x2, 
    0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4b, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x50, 0x5, 
    0xa, 0x6, 0x2, 0x4f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x54, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x55, 0x7, 0x2, 0x2, 0x3, 0x55, 0x3, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x58, 0x5, 0x6, 0x4, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x5e, 0x5, 0xa, 0x6, 0x2, 0x5d, 0x5c, 0x3, 0x2, 0x2, 
    0x2, 0x5e, 0x61, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x62, 0x3, 0x2, 0x2, 0x2, 0x61, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0x2, 0x2, 0x3, 0x63, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0x3, 0x2, 0x2, 0x65, 0x6a, 0x5, 
    0x8, 0x5, 0x2, 0x66, 0x67, 0x7, 0x4, 0x2, 0x2, 0x67, 0x69, 0x5, 0x8, 
    0x5, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x6b, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6d, 
    0x6e, 0x7, 0x5, 0x2, 0x2, 0x6e, 0x7, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 
    0x5, 0x46, 0x24, 0x2, 0x70, 0x9, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x5, 
    0xc, 0x7, 0x2, 0x72, 0x73, 0x7, 0x5, 0x2, 0x2, 0x73, 0x76, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x76, 0x5, 0x10, 0x9, 0x2, 0x75, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x7a, 0x5, 0xe, 0x8, 0x2, 0x78, 0x7b, 0x5, 0x42, 0x22, 0x2, 0x79, 
    0x7b, 0x5, 0x1a, 0xe, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x7b, 0x83, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7f, 0x7, 
    0x4, 0x2, 0x2, 0x7d, 0x80, 0x5, 0x42, 0x22, 0x2, 0x7e, 0x80, 0x5, 0x1a, 
    0xe, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7c, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x85, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0xd, 0x3, 0x2, 0x2, 0x2, 0x85, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x9, 0x2, 0x2, 0x2, 0x87, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x88, 0x89, 0x5, 0x12, 0xa, 0x2, 0x89, 0x8a, 0x5, 0x42, 
    0x22, 0x2, 0x8a, 0x8c, 0x7, 0x6, 0x2, 0x2, 0x8b, 0x8d, 0x5, 0x14, 0xb, 
    0x2, 0x8c, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x7, 0x2, 0x2, 0x8f, 
    0x90, 0x5, 0x16, 0xc, 0x2, 0x90, 0x11, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 
    0x9, 0x3, 0x2, 0x2, 0x92, 0x13, 0x3, 0x2, 0x2, 0x2, 0x93, 0x98, 0x5, 
    0xc, 0x7, 0x2, 0x94, 0x95, 0x7, 0x4, 0x2, 0x2, 0x95, 0x97, 0x5, 0xc, 
    0x7, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x15, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x9f, 0x7, 0x8, 0x2, 0x2, 0x9c, 0x9e, 0x5, 0x18, 0xd, 0x2, 0x9d, 0x9c, 
    0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x9, 0x2, 
    0x2, 0xa3, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xb2, 0x5, 0xa, 0x6, 0x2, 
    0xa5, 0xa6, 0x5, 0x1a, 0xe, 0x2, 0xa6, 0xa7, 0x7, 0x5, 0x2, 0x2, 0xa7, 
    0xb2, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x5, 0x1c, 0xf, 0x2, 0xa9, 0xaa, 
    0x7, 0x5, 0x2, 0x2, 0xaa, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x5, 
    0x3a, 0x1e, 0x2, 0xac, 0xad, 0x7, 0x5, 0x2, 0x2, 0xad, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xae, 0xb2, 0x5, 0x2e, 0x18, 0x2, 0xaf, 0xb2, 0x5, 0x30, 0x19, 
    0x2, 0xb0, 0xb2, 0x5, 0x32, 0x1a, 0x2, 0xb1, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0xb1, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xab, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 
    0x3, 0x2, 0x2, 0x2, 0xb1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb4, 0x5, 0x42, 0x22, 0x2, 0xb4, 0xb5, 0x7, 0xa, 
    0x2, 0x2, 0xb5, 0xb6, 0x5, 0x1c, 0xf, 0x2, 0xb6, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xb8, 0x5, 0x42, 0x22, 0x2, 0xb8, 0xb9, 0x7, 0xa, 0x2, 0x2, 
    0xb9, 0xba, 0x5, 0x3c, 0x1f, 0x2, 0xba, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0xbd, 0xc1, 0x5, 0x42, 0x22, 0x2, 0xbe, 0xc1, 0x5, 
    0x1e, 0x10, 0x2, 0xbf, 0xc1, 0x5, 0x24, 0x13, 0x2, 0xc0, 0xbd, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc5, 0x5, 0x46, 0x24, 
    0x2, 0xc3, 0xc5, 0x5, 0x40, 0x21, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0xc7, 0x5, 0x42, 0x22, 0x2, 0xc7, 0xc9, 0x7, 0x6, 0x2, 0x2, 0xc8, 0xca, 
    0x5, 0x22, 0x12, 0x2, 0xc9, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 
    0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x7, 
    0x2, 0x2, 0xcc, 0x21, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd2, 0x5, 0x1c, 0xf, 
    0x2, 0xce, 0xcf, 0x7, 0x4, 0x2, 0x2, 0xcf, 0xd1, 0x5, 0x1c, 0xf, 0x2, 
    0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xda, 0x5, 
    0x26, 0x14, 0x2, 0xd6, 0xd7, 0x7, 0x16, 0x2, 0x2, 0xd7, 0xd9, 0x5, 0x26, 
    0x14, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 0x2, 
    0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0xdb, 0x25, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 
    0xe2, 0x5, 0x28, 0x15, 0x2, 0xde, 0xdf, 0x7, 0x17, 0x2, 0x2, 0xdf, 0xe1, 
    0x5, 0x28, 0x15, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe4, 0x3, 
    0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0x27, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe5, 0xea, 0x5, 0x2a, 0x16, 0x2, 0xe6, 0xe7, 0x7, 0x18, 0x2, 0x2, 
    0xe7, 0xe9, 0x5, 0x2a, 0x16, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0x29, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 
    0x2, 0x2, 0x2, 0xed, 0xf2, 0x5, 0x2c, 0x17, 0x2, 0xee, 0xef, 0x7, 0x15, 
    0x2, 0x2, 0xef, 0xf1, 0x5, 0x2c, 0x17, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0xf1, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xf4, 
    0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xfe, 0x5, 0x1e, 0x10, 0x2, 0xf6, 0xfe, 
    0x5, 0x20, 0x11, 0x2, 0xf7, 0xfe, 0x5, 0x42, 0x22, 0x2, 0xf8, 0xfe, 
    0x5, 0x3e, 0x20, 0x2, 0xf9, 0xfa, 0x7, 0x6, 0x2, 0x2, 0xfa, 0xfb, 0x5, 
    0x24, 0x13, 0x2, 0xfb, 0xfc, 0x7, 0x7, 0x2, 0x2, 0xfc, 0xfe, 0x3, 0x2, 
    0x2, 0x2, 0xfd, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xf6, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0x100, 0x7, 0xb, 0x2, 0x2, 0x100, 0x103, 0x7, 0x6, 0x2, 0x2, 0x101, 
    0x104, 0x5, 0x1c, 0xf, 0x2, 0x102, 0x104, 0x5, 0x3c, 0x1f, 0x2, 0x103, 
    0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0x7, 0x2, 0x2, 0x106, 
    0x109, 0x5, 0x16, 0xc, 0x2, 0x107, 0x108, 0x7, 0xc, 0x2, 0x2, 0x108, 
    0x10a, 0x5, 0x16, 0xc, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x109, 
    0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 
    0x7, 0xd, 0x2, 0x2, 0x10c, 0x10f, 0x7, 0x6, 0x2, 0x2, 0x10d, 0x110, 
    0x5, 0x1c, 0xf, 0x2, 0x10e, 0x110, 0x5, 0x3c, 0x1f, 0x2, 0x10f, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x7, 0x2, 0x2, 0x112, 0x113, 
    0x5, 0x16, 0xc, 0x2, 0x113, 0x31, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 
    0x7, 0xe, 0x2, 0x2, 0x115, 0x117, 0x7, 0x6, 0x2, 0x2, 0x116, 0x118, 
    0x5, 0x34, 0x1b, 0x2, 0x117, 0x116, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11b, 
    0x7, 0x5, 0x2, 0x2, 0x11a, 0x11c, 0x5, 0x36, 0x1c, 0x2, 0x11b, 0x11a, 
    0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 
    0x3, 0x2, 0x2, 0x2, 0x11d, 0x11f, 0x7, 0x5, 0x2, 0x2, 0x11e, 0x120, 
    0x5, 0x38, 0x1d, 0x2, 0x11f, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
    0x7, 0x7, 0x2, 0x2, 0x122, 0x123, 0x5, 0x16, 0xc, 0x2, 0x123, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x129, 0x5, 0xc, 0x7, 0x2, 0x125, 0x129, 
    0x5, 0x1a, 0xe, 0x2, 0x126, 0x129, 0x5, 0x1c, 0xf, 0x2, 0x127, 0x129, 
    0x5, 0x3c, 0x1f, 0x2, 0x128, 0x124, 0x3, 0x2, 0x2, 0x2, 0x128, 0x125, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x127, 
    0x3, 0x2, 0x2, 0x2, 0x129, 0x35, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12d, 0x5, 
    0x1c, 0xf, 0x2, 0x12b, 0x12d, 0x5, 0x3c, 0x1f, 0x2, 0x12c, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x12c, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x12e, 0x133, 0x5, 0xc, 0x7, 0x2, 0x12f, 0x133, 0x5, 0x1a, 
    0xe, 0x2, 0x130, 0x133, 0x5, 0x1c, 0xf, 0x2, 0x131, 0x133, 0x5, 0x3c, 
    0x1f, 0x2, 0x132, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x132, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x39, 0x3, 0x2, 0x2, 0x2, 0x134, 0x136, 0x7, 0xf, 0x2, 
    0x2, 0x135, 0x137, 0x5, 0x1c, 0xf, 0x2, 0x136, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x138, 0x139, 0x5, 0x1c, 0xf, 0x2, 0x139, 0x13a, 0x7, 0x1e, 0x2, 0x2, 
    0x13a, 0x13b, 0x5, 0x1c, 0xf, 0x2, 0x13b, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x13c, 0x13d, 0x7, 0x14, 0x2, 0x2, 0x13d, 0x13e, 0x5, 0x2c, 0x17, 0x2, 
    0x13e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x9, 0x4, 0x2, 0x2, 0x140, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x141, 0x143, 0x7, 0x1f, 0x2, 0x2, 0x142, 
    0x144, 0x5, 0x44, 0x23, 0x2, 0x143, 0x142, 0x3, 0x2, 0x2, 0x2, 0x143, 
    0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 0x43, 0x3, 0x2, 0x2, 0x2, 0x145, 0x147, 
    0x7, 0x10, 0x2, 0x2, 0x146, 0x148, 0x5, 0x1c, 0xf, 0x2, 0x147, 0x146, 
    0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 
    0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x11, 0x2, 0x2, 0x14a, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x9, 0x5, 0x2, 0x2, 0x14c, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x25, 0x4b, 0x51, 0x59, 0x5f, 0x6a, 0x75, 0x7a, 0x7f, 
    0x83, 0x8c, 0x98, 0x9f, 0xb1, 0xbb, 0xc0, 0xc4, 0xc9, 0xd2, 0xda, 0xe2, 
    0xea, 0xf2, 0xfd, 0x103, 0x109, 0x10f, 0x117, 0x11b, 0x11f, 0x128, 0x12c, 
    0x132, 0x136, 0x143, 0x147, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ISNSParser::Initializer ISNSParser::_init;
