
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
    setState(28); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(28);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Sy2Parser::NL: {
          setState(26);
          match(Sy2Parser::NL);
          break;
        }

        case Sy2Parser::ENCODING:
        case Sy2Parser::SIGN_VERSION:
        case Sy2Parser::REG_VAR:
        case Sy2Parser::REG_CMD: {
          setState(27);
          dynamic_cast<FileContext *>(_localctx)->commandContext = command();
          dynamic_cast<FileContext *>(_localctx)->commands.push_back(dynamic_cast<FileContext *>(_localctx)->commandContext);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(30); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Sy2Parser::ENCODING)
      | (1ULL << Sy2Parser::SIGN_VERSION)
      | (1ULL << Sy2Parser::REG_VAR)
      | (1ULL << Sy2Parser::REG_CMD)
      | (1ULL << Sy2Parser::NL))) != 0));
    setState(32);
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

tree::TerminalNode* Sy2Parser::CommandContext::ENCODING() {
  return getToken(Sy2Parser::ENCODING, 0);
}

Sy2Parser::EncodingValueContext* Sy2Parser::CommandContext::encodingValue() {
  return getRuleContext<Sy2Parser::EncodingValueContext>(0);
}

tree::TerminalNode* Sy2Parser::CommandContext::NL() {
  return getToken(Sy2Parser::NL, 0);
}

tree::TerminalNode* Sy2Parser::CommandContext::SIGN_VERSION() {
  return getToken(Sy2Parser::SIGN_VERSION, 0);
}

Sy2Parser::SignValueContext* Sy2Parser::CommandContext::signValue() {
  return getRuleContext<Sy2Parser::SignValueContext>(0);
}

tree::TerminalNode* Sy2Parser::CommandContext::REG_VAR() {
  return getToken(Sy2Parser::REG_VAR, 0);
}

Sy2Parser::TypeDefinitionContext* Sy2Parser::CommandContext::typeDefinition() {
  return getRuleContext<Sy2Parser::TypeDefinitionContext>(0);
}

tree::TerminalNode* Sy2Parser::CommandContext::REG_CMD() {
  return getToken(Sy2Parser::REG_CMD, 0);
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
    setState(50);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Sy2Parser::ENCODING: {
        enterOuterAlt(_localctx, 1);
        setState(34);
        match(Sy2Parser::ENCODING);
        setState(35);
        encodingValue();
        setState(36);
        match(Sy2Parser::NL);
        break;
      }

      case Sy2Parser::SIGN_VERSION: {
        enterOuterAlt(_localctx, 2);
        setState(38);
        match(Sy2Parser::SIGN_VERSION);
        setState(39);
        signValue();
        setState(40);
        match(Sy2Parser::NL);
        break;
      }

      case Sy2Parser::REG_VAR: {
        enterOuterAlt(_localctx, 3);
        setState(42);
        match(Sy2Parser::REG_VAR);
        setState(43);
        typeDefinition();
        setState(44);
        match(Sy2Parser::NL);
        break;
      }

      case Sy2Parser::REG_CMD: {
        enterOuterAlt(_localctx, 4);
        setState(46);
        match(Sy2Parser::REG_CMD);
        setState(47);
        symbol();
        setState(48);
        match(Sy2Parser::NL);
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

//----------------- EncodingValueContext ------------------------------------------------------------------

Sy2Parser::EncodingValueContext::EncodingValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::EncodingValueContext::LITTLE_ENDIAN() {
  return getToken(Sy2Parser::LITTLE_ENDIAN, 0);
}

tree::TerminalNode* Sy2Parser::EncodingValueContext::BIG_ENDIAN() {
  return getToken(Sy2Parser::BIG_ENDIAN, 0);
}


size_t Sy2Parser::EncodingValueContext::getRuleIndex() const {
  return Sy2Parser::RuleEncodingValue;
}

void Sy2Parser::EncodingValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEncodingValue(this);
}

void Sy2Parser::EncodingValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEncodingValue(this);
}


antlrcpp::Any Sy2Parser::EncodingValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitEncodingValue(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::EncodingValueContext* Sy2Parser::encodingValue() {
  EncodingValueContext *_localctx = _tracker.createInstance<EncodingValueContext>(_ctx, getState());
  enterRule(_localctx, 4, Sy2Parser::RuleEncodingValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    _la = _input->LA(1);
    if (!(_la == Sy2Parser::LITTLE_ENDIAN

    || _la == Sy2Parser::BIG_ENDIAN)) {
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

//----------------- SignValueContext ------------------------------------------------------------------

Sy2Parser::SignValueContext::SignValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sy2Parser::SignValueContext::V2016() {
  return getToken(Sy2Parser::V2016, 0);
}


size_t Sy2Parser::SignValueContext::getRuleIndex() const {
  return Sy2Parser::RuleSignValue;
}

void Sy2Parser::SignValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignValue(this);
}

void Sy2Parser::SignValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignValue(this);
}


antlrcpp::Any Sy2Parser::SignValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitSignValue(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::SignValueContext* Sy2Parser::signValue() {
  SignValueContext *_localctx = _tracker.createInstance<SignValueContext>(_ctx, getState());
  enterRule(_localctx, 6, Sy2Parser::RuleSignValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(Sy2Parser::V2016);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionContext ------------------------------------------------------------------

Sy2Parser::TypeDefinitionContext::TypeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Sy2Parser::TypeContext* Sy2Parser::TypeDefinitionContext::type() {
  return getRuleContext<Sy2Parser::TypeContext>(0);
}

Sy2Parser::NameContext* Sy2Parser::TypeDefinitionContext::name() {
  return getRuleContext<Sy2Parser::NameContext>(0);
}

Sy2Parser::SignatureContext* Sy2Parser::TypeDefinitionContext::signature() {
  return getRuleContext<Sy2Parser::SignatureContext>(0);
}

Sy2Parser::BitmaskContext* Sy2Parser::TypeDefinitionContext::bitmask() {
  return getRuleContext<Sy2Parser::BitmaskContext>(0);
}

Sy2Parser::OffsetContext* Sy2Parser::TypeDefinitionContext::offset() {
  return getRuleContext<Sy2Parser::OffsetContext>(0);
}

Sy2Parser::EnumValueContext* Sy2Parser::TypeDefinitionContext::enumValue() {
  return getRuleContext<Sy2Parser::EnumValueContext>(0);
}


size_t Sy2Parser::TypeDefinitionContext::getRuleIndex() const {
  return Sy2Parser::RuleTypeDefinition;
}

void Sy2Parser::TypeDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDefinition(this);
}

void Sy2Parser::TypeDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sy2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDefinition(this);
}


antlrcpp::Any Sy2Parser::TypeDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sy2Visitor*>(visitor))
    return parserVisitor->visitTypeDefinition(this);
  else
    return visitor->visitChildren(this);
}

Sy2Parser::TypeDefinitionContext* Sy2Parser::typeDefinition() {
  TypeDefinitionContext *_localctx = _tracker.createInstance<TypeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 8, Sy2Parser::RuleTypeDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    type();
    setState(57);
    name();
    setState(61);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Sy2Parser::BITMASK: {
        setState(58);
        bitmask();
        break;
      }

      case Sy2Parser::OFFSET: {
        setState(59);
        offset();
        break;
      }

      case Sy2Parser::ENUM_VALUE: {
        setState(60);
        enumValue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(63);
    signature();
   
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

Sy2Parser::AddressContext* Sy2Parser::SymbolContext::address() {
  return getRuleContext<Sy2Parser::AddressContext>(0);
}

Sy2Parser::SignatureContext* Sy2Parser::SymbolContext::signature() {
  return getRuleContext<Sy2Parser::SignatureContext>(0);
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
  enterRule(_localctx, 10, Sy2Parser::RuleSymbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    type();
    setState(66);
    name();
    setState(67);
    address();
    setState(68);
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
  enterRule(_localctx, 12, Sy2Parser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
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
  enterRule(_localctx, 14, Sy2Parser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
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
  enterRule(_localctx, 16, Sy2Parser::RuleBitmask);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
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
  enterRule(_localctx, 18, Sy2Parser::RuleOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
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
  enterRule(_localctx, 20, Sy2Parser::RuleAddress);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
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
  enterRule(_localctx, 22, Sy2Parser::RuleEnumValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
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
  enterRule(_localctx, 24, Sy2Parser::RuleSignature);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
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
  "file", "command", "encodingValue", "signValue", "typeDefinition", "symbol", 
  "type", "name", "bitmask", "offset", "address", "enumValue", "signature"
};

std::vector<std::string> Sy2Parser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'BIT'", "'STRUCT'", 
  "'UNION'", "'ENUM'", "'PROC'", "'DATA'"
};

std::vector<std::string> Sy2Parser::_symbolicNames = {
  "", "ENCODING", "LITTLE_ENDIAN", "BIG_ENDIAN", "SIGN_VERSION", "V2016", 
  "REG_VAR", "REG_CMD", "TYPE", "ID", "BITMASK", "OFFSET", "ADDRESS", "ENUM_VALUE", 
  "SIGNATURE", "BIT", "STRUCT", "UNION", "ENUM", "PROC", "DATA", "LINE_COMMENT", 
  "WS", "NL"
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
    0x3, 0x19, 0x57, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x3, 0x2, 0x6, 0x2, 0x1f, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x20, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x35, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x40, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x2, 0x2, 0xf, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x2, 0x3, 
    0x3, 0x2, 0x4, 0x5, 0x2, 0x50, 0x2, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x34, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x36, 0x3, 0x2, 0x2, 0x2, 0x8, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x3a, 0x3, 0x2, 0x2, 0x2, 0xc, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x48, 0x3, 0x2, 0x2, 0x2, 0x10, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x14, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x16, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x52, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x54, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x1f, 0x7, 0x19, 0x2, 0x2, 0x1d, 0x1f, 0x5, 0x4, 
    0x3, 0x2, 0x1e, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1e, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x21, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x23, 0x7, 0x2, 0x2, 0x3, 0x23, 0x3, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 
    0x7, 0x3, 0x2, 0x2, 0x25, 0x26, 0x5, 0x6, 0x4, 0x2, 0x26, 0x27, 0x7, 
    0x19, 0x2, 0x2, 0x27, 0x35, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x6, 
    0x2, 0x2, 0x29, 0x2a, 0x5, 0x8, 0x5, 0x2, 0x2a, 0x2b, 0x7, 0x19, 0x2, 
    0x2, 0x2b, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x8, 0x2, 0x2, 
    0x2d, 0x2e, 0x5, 0xa, 0x6, 0x2, 0x2e, 0x2f, 0x7, 0x19, 0x2, 0x2, 0x2f, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0x9, 0x2, 0x2, 0x31, 0x32, 
    0x5, 0xc, 0x7, 0x2, 0x32, 0x33, 0x7, 0x19, 0x2, 0x2, 0x33, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x24, 0x3, 0x2, 0x2, 0x2, 0x34, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x34, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x5, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x9, 0x2, 0x2, 0x2, 
    0x37, 0x7, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0x7, 0x2, 0x2, 0x39, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0xe, 0x8, 0x2, 0x3b, 0x3f, 
    0x5, 0x10, 0x9, 0x2, 0x3c, 0x40, 0x5, 0x12, 0xa, 0x2, 0x3d, 0x40, 0x5, 
    0x14, 0xb, 0x2, 0x3e, 0x40, 0x5, 0x18, 0xd, 0x2, 0x3f, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x5, 0x1a, 0xe, 0x2, 
    0x42, 0xb, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x5, 0xe, 0x8, 0x2, 0x44, 
    0x45, 0x5, 0x10, 0x9, 0x2, 0x45, 0x46, 0x5, 0x16, 0xc, 0x2, 0x46, 0x47, 
    0x5, 0x1a, 0xe, 0x2, 0x47, 0xd, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x7, 
    0xa, 0x2, 0x2, 0x49, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0xb, 
    0x2, 0x2, 0x4b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0xc, 0x2, 
    0x2, 0x4d, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0xd, 0x2, 0x2, 
    0x4f, 0x15, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x7, 0xe, 0x2, 0x2, 0x51, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x7, 0xf, 0x2, 0x2, 0x53, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0x10, 0x2, 0x2, 0x55, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x1e, 0x20, 0x34, 0x3f, 
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
