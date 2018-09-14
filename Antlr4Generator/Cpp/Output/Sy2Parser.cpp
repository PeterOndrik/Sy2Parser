
// Generated from Sy2.g4 by ANTLR 4.7.1


#include "Sy2Listener.h"
#include "Sy2Visitor.h"

#include "Sy2Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Sy2Parser::Sy2Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Sy2Parser::~Sy2Parser() {
  delete _interpreter;
}

std::string Sy2Parser::getGrammarFileName() const {
  return "Sy2.g4";
}

const std::vector<std::string>& Sy2Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Sy2Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FileContext ------------------------------------------------------------------

Sy2Parser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::FileContext::EOF() {
  return getToken(Sy2Parser::EOF, 0);
}

std::vector<tree::TerminalNode *> Sy2Parser::FileContext::NL() {
  return getTokens(Sy2Parser::NL);
}

tree::TerminalNode* Sy2Parser::FileContext::NL(size_t i) {
  return getToken(Sy2Parser::NL, i);
}

std::vector<Sy2Parser::CommandContext *> Sy2Parser::FileContext::command() {
  return getRuleContexts<Sy2Parser::CommandContext>();
}

Sy2Parser::CommandContext* Sy2Parser::FileContext::command(size_t i) {
  return getRuleContext<Sy2Parser::CommandContext>(i);
}


size_t Sy2Parser::FileContext::getRuleIndex() const {
  return Sy2Parser::RuleFile;
}

void Sy2Parser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void Sy2Parser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}


antlrcpp::Any Sy2Parser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::FileContext* Sy2Parser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, Sy2Parser::RuleFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(26);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Sy2Parser::NL: {
          setState(24);
          match(Sy2Parser::NL);
          break;
        }

        case Sy2Parser::KEYWORD: {
          setState(25);
          dynamic_cast<FileContext *>(_localctx)->commandContext = command();
          dynamic_cast<FileContext *>(_localctx)->commands.push_back(dynamic_cast<FileContext *>(_localctx)->commandContext);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(28); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == Sy2Parser::KEYWORD

    || _la == Sy2Parser::NL);
    setState(30);
    match(Sy2Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

Sy2Parser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::CommandContext::NL() {
  return getToken(Sy2Parser::NL, 0);
}

Sy2Parser::KeywordContext* Sy2Parser::CommandContext::keyword() {
  return getRuleContext<Sy2Parser::KeywordContext>(0);
}

Sy2Parser::CmdValueContext* Sy2Parser::CommandContext::cmdValue() {
  return getRuleContext<Sy2Parser::CmdValueContext>(0);
}

Sy2Parser::SymbolContext* Sy2Parser::CommandContext::symbol() {
  return getRuleContext<Sy2Parser::SymbolContext>(0);
}


size_t Sy2Parser::CommandContext::getRuleIndex() const {
  return Sy2Parser::RuleCommand;
}

void Sy2Parser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void Sy2Parser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
}


antlrcpp::Any Sy2Parser::CommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitCommand(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::CommandContext* Sy2Parser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 2, Sy2Parser::RuleCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(32);
      keyword();
      setState(33);
      cmdValue();
      break;
    }

    case 2: {
      setState(35);
      keyword();
      setState(36);
      symbol();
      break;
    }

    }
    setState(40);
    match(Sy2Parser::NL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

Sy2Parser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::KeywordContext::KEYWORD() {
  return getToken(Sy2Parser::KEYWORD, 0);
}


size_t Sy2Parser::KeywordContext::getRuleIndex() const {
  return Sy2Parser::RuleKeyword;
}

void Sy2Parser::KeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyword(this);
}

void Sy2Parser::KeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyword(this);
}


antlrcpp::Any Sy2Parser::KeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitKeyword(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::KeywordContext* Sy2Parser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 4, Sy2Parser::RuleKeyword);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(Sy2Parser::KEYWORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmdValueContext ------------------------------------------------------------------

Sy2Parser::CmdValueContext::CmdValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::CmdValueContext::CMD_VALUE() {
  return getToken(Sy2Parser::CMD_VALUE, 0);
}


size_t Sy2Parser::CmdValueContext::getRuleIndex() const {
  return Sy2Parser::RuleCmdValue;
}

void Sy2Parser::CmdValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCmdValue(this);
}

void Sy2Parser::CmdValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCmdValue(this);
}


antlrcpp::Any Sy2Parser::CmdValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitCmdValue(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::CmdValueContext* Sy2Parser::cmdValue() {
  CmdValueContext *_localctx = _tracker.createInstance<CmdValueContext>(_ctx, getState());
  enterRule(_localctx, 6, Sy2Parser::RuleCmdValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(Sy2Parser::CMD_VALUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SymbolContext ------------------------------------------------------------------

Sy2Parser::SymbolContext::SymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Sy2Parser::TypeContext* Sy2Parser::SymbolContext::type() {
  return getRuleContext<Sy2Parser::TypeContext>(0);
}

Sy2Parser::NameContext* Sy2Parser::SymbolContext::name() {
  return getRuleContext<Sy2Parser::NameContext>(0);
}

Sy2Parser::SignatureContext* Sy2Parser::SymbolContext::signature() {
  return getRuleContext<Sy2Parser::SignatureContext>(0);
}

Sy2Parser::BitmaskContext* Sy2Parser::SymbolContext::bitmask() {
  return getRuleContext<Sy2Parser::BitmaskContext>(0);
}

Sy2Parser::OffsetContext* Sy2Parser::SymbolContext::offset() {
  return getRuleContext<Sy2Parser::OffsetContext>(0);
}

Sy2Parser::AddressContext* Sy2Parser::SymbolContext::address() {
  return getRuleContext<Sy2Parser::AddressContext>(0);
}

Sy2Parser::EnumValueContext* Sy2Parser::SymbolContext::enumValue() {
  return getRuleContext<Sy2Parser::EnumValueContext>(0);
}


size_t Sy2Parser::SymbolContext::getRuleIndex() const {
  return Sy2Parser::RuleSymbol;
}

void Sy2Parser::SymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSymbol(this);
}

void Sy2Parser::SymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSymbol(this);
}


antlrcpp::Any Sy2Parser::SymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitSymbol(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::SymbolContext* Sy2Parser::symbol() {
  SymbolContext *_localctx = _tracker.createInstance<SymbolContext>(_ctx, getState());
  enterRule(_localctx, 8, Sy2Parser::RuleSymbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    type();
    setState(47);
    name();
    setState(52);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Sy2Parser::BITMASK: {
        setState(48);
        bitmask();
        break;
      }

      case Sy2Parser::OFFSET: {
        setState(49);
        offset();
        break;
      }

      case Sy2Parser::ADDRESS: {
        setState(50);
        address();
        break;
      }

      case Sy2Parser::ENUM_VALUE: {
        setState(51);
        enumValue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(54);
    signature();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

Sy2Parser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::TypeContext::TYPE() {
  return getToken(Sy2Parser::TYPE, 0);
}


size_t Sy2Parser::TypeContext::getRuleIndex() const {
  return Sy2Parser::RuleType;
}

void Sy2Parser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void Sy2Parser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any Sy2Parser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::TypeContext* Sy2Parser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, Sy2Parser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(Sy2Parser::TYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

Sy2Parser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::NameContext::ID() {
  return getToken(Sy2Parser::ID, 0);
}


size_t Sy2Parser::NameContext::getRuleIndex() const {
  return Sy2Parser::RuleName;
}

void Sy2Parser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void Sy2Parser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}


antlrcpp::Any Sy2Parser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::NameContext* Sy2Parser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 12, Sy2Parser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(Sy2Parser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitmaskContext ------------------------------------------------------------------

Sy2Parser::BitmaskContext::BitmaskContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::BitmaskContext::BITMASK() {
  return getToken(Sy2Parser::BITMASK, 0);
}


size_t Sy2Parser::BitmaskContext::getRuleIndex() const {
  return Sy2Parser::RuleBitmask;
}

void Sy2Parser::BitmaskContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitmask(this);
}

void Sy2Parser::BitmaskContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitmask(this);
}


antlrcpp::Any Sy2Parser::BitmaskContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitBitmask(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::BitmaskContext* Sy2Parser::bitmask() {
  BitmaskContext *_localctx = _tracker.createInstance<BitmaskContext>(_ctx, getState());
  enterRule(_localctx, 14, Sy2Parser::RuleBitmask);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(Sy2Parser::BITMASK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OffsetContext ------------------------------------------------------------------

Sy2Parser::OffsetContext::OffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::OffsetContext::OFFSET() {
  return getToken(Sy2Parser::OFFSET, 0);
}


size_t Sy2Parser::OffsetContext::getRuleIndex() const {
  return Sy2Parser::RuleOffset;
}

void Sy2Parser::OffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOffset(this);
}

void Sy2Parser::OffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOffset(this);
}


antlrcpp::Any Sy2Parser::OffsetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitOffset(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::OffsetContext* Sy2Parser::offset() {
  OffsetContext *_localctx = _tracker.createInstance<OffsetContext>(_ctx, getState());
  enterRule(_localctx, 16, Sy2Parser::RuleOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(Sy2Parser::OFFSET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddressContext ------------------------------------------------------------------

Sy2Parser::AddressContext::AddressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::AddressContext::ADDRESS() {
  return getToken(Sy2Parser::ADDRESS, 0);
}


size_t Sy2Parser::AddressContext::getRuleIndex() const {
  return Sy2Parser::RuleAddress;
}

void Sy2Parser::AddressContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddress(this);
}

void Sy2Parser::AddressContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddress(this);
}


antlrcpp::Any Sy2Parser::AddressContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitAddress(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::AddressContext* Sy2Parser::address() {
  AddressContext *_localctx = _tracker.createInstance<AddressContext>(_ctx, getState());
  enterRule(_localctx, 18, Sy2Parser::RuleAddress);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(Sy2Parser::ADDRESS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumValueContext ------------------------------------------------------------------

Sy2Parser::EnumValueContext::EnumValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::EnumValueContext::ENUM_VALUE() {
  return getToken(Sy2Parser::ENUM_VALUE, 0);
}


size_t Sy2Parser::EnumValueContext::getRuleIndex() const {
  return Sy2Parser::RuleEnumValue;
}

void Sy2Parser::EnumValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumValue(this);
}

void Sy2Parser::EnumValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumValue(this);
}


antlrcpp::Any Sy2Parser::EnumValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitEnumValue(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::EnumValueContext* Sy2Parser::enumValue() {
  EnumValueContext *_localctx = _tracker.createInstance<EnumValueContext>(_ctx, getState());
  enterRule(_localctx, 20, Sy2Parser::RuleEnumValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(Sy2Parser::ENUM_VALUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignatureContext ------------------------------------------------------------------

Sy2Parser::SignatureContext::SignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::SignatureContext::SIGNATURE() {
  return getToken(Sy2Parser::SIGNATURE, 0);
}


size_t Sy2Parser::SignatureContext::getRuleIndex() const {
  return Sy2Parser::RuleSignature;
}

void Sy2Parser::SignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignature(this);
}

void Sy2Parser::SignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignature(this);
}


antlrcpp::Any Sy2Parser::SignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitSignature(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::SignatureContext* Sy2Parser::signature() {
  SignatureContext *_localctx = _tracker.createInstance<SignatureContext>(_ctx, getState());
  enterRule(_localctx, 22, Sy2Parser::RuleSignature);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(Sy2Parser::SIGNATURE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> Sy2Parser::_decisionToDFA;
atn::PredictionContextCache Sy2Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Sy2Parser::_atn;
std::vector<uint16_t> Sy2Parser::_serializedATN;

std::vector<std::string> Sy2Parser::_ruleNames = {
  "file", "command", "keyword", "cmdValue", "symbol", "type", "name", "bitmask", 
  "offset", "address", "enumValue", "signature"
};

std::vector<std::string> Sy2Parser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "'BIT'", "'STRUCT'", "'UNION'", 
  "'ENUM'", "'PROC'", "'DATA'"
};

std::vector<std::string> Sy2Parser::_symbolicNames = {
  "", "KEYWORD", "CMD_VALUE", "TYPE", "ID", "BITMASK", "OFFSET", "ADDRESS", 
  "ENUM_VALUE", "SIGNATURE", "BIT", "STRUCT", "UNION", "ENUM", "PROC", "DATA", 
  "LINE_COMMENT", "WS", "NL"
};

dfa::Vocabulary Sy2Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Sy2Parser::_tokenNames;

Sy2Parser::Initializer::Initializer() {
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
    0x3, 0x14, 0x49, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 0x2, 0x3, 0x2, 0x6, 
    0x2, 0x1d, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x1e, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x29, 
    0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x37, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x2, 0x2, 0xe, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x2, 0x2, 0x2, 
    0x42, 0x2, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x28, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x3a, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x12, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x42, 0x3, 0x2, 0x2, 0x2, 0x16, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x46, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1d, 0x7, 0x14, 0x2, 0x2, 0x1b, 
    0x1d, 0x5, 0x4, 0x3, 0x2, 0x1c, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x21, 0x7, 0x2, 0x2, 0x3, 0x21, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x23, 0x5, 0x6, 0x4, 0x2, 0x23, 0x24, 0x5, 0x8, 0x5, 0x2, 
    0x24, 0x29, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x5, 0x6, 0x4, 0x2, 0x26, 
    0x27, 0x5, 0xa, 0x6, 0x2, 0x27, 0x29, 0x3, 0x2, 0x2, 0x2, 0x28, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x25, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x14, 0x2, 0x2, 0x2b, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x2d, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x2f, 0x7, 0x4, 0x2, 0x2, 0x2f, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x31, 0x5, 0xc, 0x7, 0x2, 0x31, 0x36, 0x5, 0xe, 0x8, 0x2, 0x32, 
    0x37, 0x5, 0x10, 0x9, 0x2, 0x33, 0x37, 0x5, 0x12, 0xa, 0x2, 0x34, 0x37, 
    0x5, 0x14, 0xb, 0x2, 0x35, 0x37, 0x5, 0x16, 0xc, 0x2, 0x36, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x39, 0x5, 0x18, 0xd, 0x2, 0x39, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x3b, 0x7, 0x5, 0x2, 0x2, 0x3b, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3d, 0x7, 0x6, 0x2, 0x2, 0x3d, 0xf, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 
    0x7, 0x7, 0x2, 0x2, 0x3f, 0x11, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 
    0x8, 0x2, 0x2, 0x41, 0x13, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x9, 
    0x2, 0x2, 0x43, 0x15, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0xa, 0x2, 
    0x2, 0x45, 0x17, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0xb, 0x2, 0x2, 
    0x47, 0x19, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1c, 0x1e, 0x28, 0x36, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Sy2Parser::Initializer Sy2Parser::_init;
