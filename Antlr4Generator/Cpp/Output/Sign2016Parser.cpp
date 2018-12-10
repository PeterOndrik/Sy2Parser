
// Generated from Sign2016.g4 by ANTLR 4.7.1


#include "Sign2016Listener.h"
#include "Sign2016Visitor.h"

#include "Sign2016Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Sign2016Parser::Sign2016Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Sign2016Parser::~Sign2016Parser() {
  delete _interpreter;
}

std::string Sign2016Parser::getGrammarFileName() const {
  return "Sign2016.g4";
}

const std::vector<std::string>& Sign2016Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Sign2016Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SignatureContext ------------------------------------------------------------------

Sign2016Parser::SignatureContext::SignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::SignatureContext::EOF() {
  return getToken(Sign2016Parser::EOF, 0);
}

Sign2016Parser::BoolTypeContext* Sign2016Parser::SignatureContext::boolType() {
  return getRuleContext<Sign2016Parser::BoolTypeContext>(0);
}

Sign2016Parser::IntTypeContext* Sign2016Parser::SignatureContext::intType() {
  return getRuleContext<Sign2016Parser::IntTypeContext>(0);
}

Sign2016Parser::UintTypeContext* Sign2016Parser::SignatureContext::uintType() {
  return getRuleContext<Sign2016Parser::UintTypeContext>(0);
}

Sign2016Parser::FloatTypeContext* Sign2016Parser::SignatureContext::floatType() {
  return getRuleContext<Sign2016Parser::FloatTypeContext>(0);
}

Sign2016Parser::StructTypeContext* Sign2016Parser::SignatureContext::structType() {
  return getRuleContext<Sign2016Parser::StructTypeContext>(0);
}

Sign2016Parser::PtrTypeContext* Sign2016Parser::SignatureContext::ptrType() {
  return getRuleContext<Sign2016Parser::PtrTypeContext>(0);
}

Sign2016Parser::FunctionContext* Sign2016Parser::SignatureContext::function() {
  return getRuleContext<Sign2016Parser::FunctionContext>(0);
}


size_t Sign2016Parser::SignatureContext::getRuleIndex() const {
  return Sign2016Parser::RuleSignature;
}

void Sign2016Parser::SignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignature(this);
}

void Sign2016Parser::SignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignature(this);
}


antlrcpp::Any Sign2016Parser::SignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitSignature(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::SignatureContext* Sign2016Parser::signature() {
  SignatureContext *_localctx = _tracker.createInstance<SignatureContext>(_ctx, getState());
  enterRule(_localctx, 0, Sign2016Parser::RuleSignature);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(30);
      boolType();
      break;
    }

    case 2: {
      setState(31);
      intType();
      break;
    }

    case 3: {
      setState(32);
      uintType();
      break;
    }

    case 4: {
      setState(33);
      floatType();
      break;
    }

    case 5: {
      setState(34);
      structType();
      break;
    }

    case 6: {
      setState(35);
      ptrType();
      break;
    }

    case 7: {
      setState(36);
      function();
      break;
    }

    }
    setState(39);
    match(Sign2016Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VoidTypeContext ------------------------------------------------------------------

Sign2016Parser::VoidTypeContext::VoidTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::VoidTypeContext::VOID_TYPE() {
  return getToken(Sign2016Parser::VOID_TYPE, 0);
}


size_t Sign2016Parser::VoidTypeContext::getRuleIndex() const {
  return Sign2016Parser::RuleVoidType;
}

void Sign2016Parser::VoidTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVoidType(this);
}

void Sign2016Parser::VoidTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVoidType(this);
}


antlrcpp::Any Sign2016Parser::VoidTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitVoidType(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::VoidTypeContext* Sign2016Parser::voidType() {
  VoidTypeContext *_localctx = _tracker.createInstance<VoidTypeContext>(_ctx, getState());
  enterRule(_localctx, 2, Sign2016Parser::RuleVoidType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(Sign2016Parser::VOID_TYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolTypeContext ------------------------------------------------------------------

Sign2016Parser::BoolTypeContext::BoolTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::BoolTypeContext::BOOL_TYPE() {
  return getToken(Sign2016Parser::BOOL_TYPE, 0);
}

Sign2016Parser::TypeQualifierContext* Sign2016Parser::BoolTypeContext::typeQualifier() {
  return getRuleContext<Sign2016Parser::TypeQualifierContext>(0);
}

std::vector<Sign2016Parser::ArraySizeContext *> Sign2016Parser::BoolTypeContext::arraySize() {
  return getRuleContexts<Sign2016Parser::ArraySizeContext>();
}

Sign2016Parser::ArraySizeContext* Sign2016Parser::BoolTypeContext::arraySize(size_t i) {
  return getRuleContext<Sign2016Parser::ArraySizeContext>(i);
}


size_t Sign2016Parser::BoolTypeContext::getRuleIndex() const {
  return Sign2016Parser::RuleBoolType;
}

void Sign2016Parser::BoolTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolType(this);
}

void Sign2016Parser::BoolTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolType(this);
}


antlrcpp::Any Sign2016Parser::BoolTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitBoolType(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::BoolTypeContext* Sign2016Parser::boolType() {
  BoolTypeContext *_localctx = _tracker.createInstance<BoolTypeContext>(_ctx, getState());
  enterRule(_localctx, 4, Sign2016Parser::RuleBoolType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(44);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Sign2016Parser::CONST_TYPE) {
      setState(43);
      typeQualifier();
    }
    setState(46);
    match(Sign2016Parser::BOOL_TYPE);
    setState(50);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(47);
        dynamic_cast<BoolTypeContext *>(_localctx)->arraySizeContext = arraySize();
        dynamic_cast<BoolTypeContext *>(_localctx)->arraySizes.push_back(dynamic_cast<BoolTypeContext *>(_localctx)->arraySizeContext); 
      }
      setState(52);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntTypeContext ------------------------------------------------------------------

Sign2016Parser::IntTypeContext::IntTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::IntTypeContext::INT_TYPE() {
  return getToken(Sign2016Parser::INT_TYPE, 0);
}

Sign2016Parser::SizeContext* Sign2016Parser::IntTypeContext::size() {
  return getRuleContext<Sign2016Parser::SizeContext>(0);
}

Sign2016Parser::TypeQualifierContext* Sign2016Parser::IntTypeContext::typeQualifier() {
  return getRuleContext<Sign2016Parser::TypeQualifierContext>(0);
}

std::vector<Sign2016Parser::ArraySizeContext *> Sign2016Parser::IntTypeContext::arraySize() {
  return getRuleContexts<Sign2016Parser::ArraySizeContext>();
}

Sign2016Parser::ArraySizeContext* Sign2016Parser::IntTypeContext::arraySize(size_t i) {
  return getRuleContext<Sign2016Parser::ArraySizeContext>(i);
}


size_t Sign2016Parser::IntTypeContext::getRuleIndex() const {
  return Sign2016Parser::RuleIntType;
}

void Sign2016Parser::IntTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntType(this);
}

void Sign2016Parser::IntTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntType(this);
}


antlrcpp::Any Sign2016Parser::IntTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitIntType(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::IntTypeContext* Sign2016Parser::intType() {
  IntTypeContext *_localctx = _tracker.createInstance<IntTypeContext>(_ctx, getState());
  enterRule(_localctx, 6, Sign2016Parser::RuleIntType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(54);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Sign2016Parser::CONST_TYPE) {
      setState(53);
      typeQualifier();
    }
    setState(56);
    match(Sign2016Parser::INT_TYPE);
    setState(57);
    size();
    setState(61);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(58);
        dynamic_cast<IntTypeContext *>(_localctx)->arraySizeContext = arraySize();
        dynamic_cast<IntTypeContext *>(_localctx)->arraySizes.push_back(dynamic_cast<IntTypeContext *>(_localctx)->arraySizeContext); 
      }
      setState(63);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UintTypeContext ------------------------------------------------------------------

Sign2016Parser::UintTypeContext::UintTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::UintTypeContext::UINT_TYPE() {
  return getToken(Sign2016Parser::UINT_TYPE, 0);
}

Sign2016Parser::SizeContext* Sign2016Parser::UintTypeContext::size() {
  return getRuleContext<Sign2016Parser::SizeContext>(0);
}

Sign2016Parser::TypeQualifierContext* Sign2016Parser::UintTypeContext::typeQualifier() {
  return getRuleContext<Sign2016Parser::TypeQualifierContext>(0);
}

std::vector<Sign2016Parser::ArraySizeContext *> Sign2016Parser::UintTypeContext::arraySize() {
  return getRuleContexts<Sign2016Parser::ArraySizeContext>();
}

Sign2016Parser::ArraySizeContext* Sign2016Parser::UintTypeContext::arraySize(size_t i) {
  return getRuleContext<Sign2016Parser::ArraySizeContext>(i);
}


size_t Sign2016Parser::UintTypeContext::getRuleIndex() const {
  return Sign2016Parser::RuleUintType;
}

void Sign2016Parser::UintTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUintType(this);
}

void Sign2016Parser::UintTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUintType(this);
}


antlrcpp::Any Sign2016Parser::UintTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitUintType(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::UintTypeContext* Sign2016Parser::uintType() {
  UintTypeContext *_localctx = _tracker.createInstance<UintTypeContext>(_ctx, getState());
  enterRule(_localctx, 8, Sign2016Parser::RuleUintType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(65);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Sign2016Parser::CONST_TYPE) {
      setState(64);
      typeQualifier();
    }
    setState(67);
    match(Sign2016Parser::UINT_TYPE);
    setState(68);
    size();
    setState(72);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(69);
        dynamic_cast<UintTypeContext *>(_localctx)->arraySizeContext = arraySize();
        dynamic_cast<UintTypeContext *>(_localctx)->arraySizes.push_back(dynamic_cast<UintTypeContext *>(_localctx)->arraySizeContext); 
      }
      setState(74);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatTypeContext ------------------------------------------------------------------

Sign2016Parser::FloatTypeContext::FloatTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::FloatTypeContext::FLOAT_TYPE() {
  return getToken(Sign2016Parser::FLOAT_TYPE, 0);
}

Sign2016Parser::SizeContext* Sign2016Parser::FloatTypeContext::size() {
  return getRuleContext<Sign2016Parser::SizeContext>(0);
}

Sign2016Parser::TypeQualifierContext* Sign2016Parser::FloatTypeContext::typeQualifier() {
  return getRuleContext<Sign2016Parser::TypeQualifierContext>(0);
}

std::vector<Sign2016Parser::ArraySizeContext *> Sign2016Parser::FloatTypeContext::arraySize() {
  return getRuleContexts<Sign2016Parser::ArraySizeContext>();
}

Sign2016Parser::ArraySizeContext* Sign2016Parser::FloatTypeContext::arraySize(size_t i) {
  return getRuleContext<Sign2016Parser::ArraySizeContext>(i);
}


size_t Sign2016Parser::FloatTypeContext::getRuleIndex() const {
  return Sign2016Parser::RuleFloatType;
}

void Sign2016Parser::FloatTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatType(this);
}

void Sign2016Parser::FloatTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatType(this);
}


antlrcpp::Any Sign2016Parser::FloatTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitFloatType(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::FloatTypeContext* Sign2016Parser::floatType() {
  FloatTypeContext *_localctx = _tracker.createInstance<FloatTypeContext>(_ctx, getState());
  enterRule(_localctx, 10, Sign2016Parser::RuleFloatType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Sign2016Parser::CONST_TYPE) {
      setState(75);
      typeQualifier();
    }
    setState(78);
    match(Sign2016Parser::FLOAT_TYPE);
    setState(79);
    size();
    setState(83);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(80);
        dynamic_cast<FloatTypeContext *>(_localctx)->arraySizeContext = arraySize();
        dynamic_cast<FloatTypeContext *>(_localctx)->arraySizes.push_back(dynamic_cast<FloatTypeContext *>(_localctx)->arraySizeContext); 
      }
      setState(85);
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

//----------------- StructTypeContext ------------------------------------------------------------------

Sign2016Parser::StructTypeContext::StructTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::StructTypeContext::STRUCT_TYPE() {
  return getToken(Sign2016Parser::STRUCT_TYPE, 0);
}

Sign2016Parser::SizeContext* Sign2016Parser::StructTypeContext::size() {
  return getRuleContext<Sign2016Parser::SizeContext>(0);
}

tree::TerminalNode* Sign2016Parser::StructTypeContext::SEP() {
  return getToken(Sign2016Parser::SEP, 0);
}

Sign2016Parser::NameContext* Sign2016Parser::StructTypeContext::name() {
  return getRuleContext<Sign2016Parser::NameContext>(0);
}

Sign2016Parser::TypeQualifierContext* Sign2016Parser::StructTypeContext::typeQualifier() {
  return getRuleContext<Sign2016Parser::TypeQualifierContext>(0);
}

std::vector<Sign2016Parser::ArraySizeContext *> Sign2016Parser::StructTypeContext::arraySize() {
  return getRuleContexts<Sign2016Parser::ArraySizeContext>();
}

Sign2016Parser::ArraySizeContext* Sign2016Parser::StructTypeContext::arraySize(size_t i) {
  return getRuleContext<Sign2016Parser::ArraySizeContext>(i);
}


size_t Sign2016Parser::StructTypeContext::getRuleIndex() const {
  return Sign2016Parser::RuleStructType;
}

void Sign2016Parser::StructTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructType(this);
}

void Sign2016Parser::StructTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructType(this);
}


antlrcpp::Any Sign2016Parser::StructTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitStructType(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::StructTypeContext* Sign2016Parser::structType() {
  StructTypeContext *_localctx = _tracker.createInstance<StructTypeContext>(_ctx, getState());
  enterRule(_localctx, 12, Sign2016Parser::RuleStructType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(87);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Sign2016Parser::CONST_TYPE) {
      setState(86);
      typeQualifier();
    }
    setState(89);
    match(Sign2016Parser::STRUCT_TYPE);
    setState(90);
    size();
    setState(94);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(91);
        dynamic_cast<StructTypeContext *>(_localctx)->arraySizeContext = arraySize();
        dynamic_cast<StructTypeContext *>(_localctx)->arraySizes.push_back(dynamic_cast<StructTypeContext *>(_localctx)->arraySizeContext); 
      }
      setState(96);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(97);
    match(Sign2016Parser::SEP);
    setState(98);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrTypeContext ------------------------------------------------------------------

Sign2016Parser::PtrTypeContext::PtrTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::PtrTypeContext::PTR_TYPE() {
  return getToken(Sign2016Parser::PTR_TYPE, 0);
}

Sign2016Parser::SizeContext* Sign2016Parser::PtrTypeContext::size() {
  return getRuleContext<Sign2016Parser::SizeContext>(0);
}

tree::TerminalNode* Sign2016Parser::PtrTypeContext::SEP() {
  return getToken(Sign2016Parser::SEP, 0);
}

Sign2016Parser::VoidTypeContext* Sign2016Parser::PtrTypeContext::voidType() {
  return getRuleContext<Sign2016Parser::VoidTypeContext>(0);
}

Sign2016Parser::BoolTypeContext* Sign2016Parser::PtrTypeContext::boolType() {
  return getRuleContext<Sign2016Parser::BoolTypeContext>(0);
}

Sign2016Parser::IntTypeContext* Sign2016Parser::PtrTypeContext::intType() {
  return getRuleContext<Sign2016Parser::IntTypeContext>(0);
}

Sign2016Parser::UintTypeContext* Sign2016Parser::PtrTypeContext::uintType() {
  return getRuleContext<Sign2016Parser::UintTypeContext>(0);
}

Sign2016Parser::FloatTypeContext* Sign2016Parser::PtrTypeContext::floatType() {
  return getRuleContext<Sign2016Parser::FloatTypeContext>(0);
}

Sign2016Parser::StructTypeContext* Sign2016Parser::PtrTypeContext::structType() {
  return getRuleContext<Sign2016Parser::StructTypeContext>(0);
}

Sign2016Parser::PtrTypeContext* Sign2016Parser::PtrTypeContext::ptrType() {
  return getRuleContext<Sign2016Parser::PtrTypeContext>(0);
}

Sign2016Parser::FunctionContext* Sign2016Parser::PtrTypeContext::function() {
  return getRuleContext<Sign2016Parser::FunctionContext>(0);
}

std::vector<Sign2016Parser::TypeQualifierContext *> Sign2016Parser::PtrTypeContext::typeQualifier() {
  return getRuleContexts<Sign2016Parser::TypeQualifierContext>();
}

Sign2016Parser::TypeQualifierContext* Sign2016Parser::PtrTypeContext::typeQualifier(size_t i) {
  return getRuleContext<Sign2016Parser::TypeQualifierContext>(i);
}

std::vector<Sign2016Parser::ArraySizeContext *> Sign2016Parser::PtrTypeContext::arraySize() {
  return getRuleContexts<Sign2016Parser::ArraySizeContext>();
}

Sign2016Parser::ArraySizeContext* Sign2016Parser::PtrTypeContext::arraySize(size_t i) {
  return getRuleContext<Sign2016Parser::ArraySizeContext>(i);
}


size_t Sign2016Parser::PtrTypeContext::getRuleIndex() const {
  return Sign2016Parser::RulePtrType;
}

void Sign2016Parser::PtrTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrType(this);
}

void Sign2016Parser::PtrTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrType(this);
}


antlrcpp::Any Sign2016Parser::PtrTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitPtrType(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::PtrTypeContext* Sign2016Parser::ptrType() {
  PtrTypeContext *_localctx = _tracker.createInstance<PtrTypeContext>(_ctx, getState());
  enterRule(_localctx, 14, Sign2016Parser::RulePtrType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Sign2016Parser::CONST_TYPE) {
      setState(100);
      typeQualifier();
    }
    setState(103);
    match(Sign2016Parser::PTR_TYPE);
    setState(104);
    size();
    setState(108);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(105);
        dynamic_cast<PtrTypeContext *>(_localctx)->arraySizeContext = arraySize();
        dynamic_cast<PtrTypeContext *>(_localctx)->arraySizes.push_back(dynamic_cast<PtrTypeContext *>(_localctx)->arraySizeContext); 
      }
      setState(110);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(111);
    match(Sign2016Parser::SEP);
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(113);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Sign2016Parser::CONST_TYPE) {
        setState(112);
        typeQualifier();
      }
      setState(115);
      voidType();
      break;
    }

    case 2: {
      setState(116);
      boolType();
      break;
    }

    case 3: {
      setState(117);
      intType();
      break;
    }

    case 4: {
      setState(118);
      uintType();
      break;
    }

    case 5: {
      setState(119);
      floatType();
      break;
    }

    case 6: {
      setState(120);
      structType();
      break;
    }

    case 7: {
      setState(121);
      ptrType();
      break;
    }

    case 8: {
      setState(122);
      function();
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

//----------------- FunctionContext ------------------------------------------------------------------

Sign2016Parser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::FunctionContext::FB() {
  return getToken(Sign2016Parser::FB, 0);
}

std::vector<tree::TerminalNode *> Sign2016Parser::FunctionContext::SEP() {
  return getTokens(Sign2016Parser::SEP);
}

tree::TerminalNode* Sign2016Parser::FunctionContext::SEP(size_t i) {
  return getToken(Sign2016Parser::SEP, i);
}

Sign2016Parser::ReturnTypeContext* Sign2016Parser::FunctionContext::returnType() {
  return getRuleContext<Sign2016Parser::ReturnTypeContext>(0);
}

tree::TerminalNode* Sign2016Parser::FunctionContext::FE() {
  return getToken(Sign2016Parser::FE, 0);
}

std::vector<Sign2016Parser::ParamTypeContext *> Sign2016Parser::FunctionContext::paramType() {
  return getRuleContexts<Sign2016Parser::ParamTypeContext>();
}

Sign2016Parser::ParamTypeContext* Sign2016Parser::FunctionContext::paramType(size_t i) {
  return getRuleContext<Sign2016Parser::ParamTypeContext>(i);
}


size_t Sign2016Parser::FunctionContext::getRuleIndex() const {
  return Sign2016Parser::RuleFunction;
}

void Sign2016Parser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void Sign2016Parser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


antlrcpp::Any Sign2016Parser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::FunctionContext* Sign2016Parser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 16, Sign2016Parser::RuleFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(Sign2016Parser::FB);
    setState(126);
    match(Sign2016Parser::SEP);
    setState(127);
    returnType();
    setState(130); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(128);
              match(Sign2016Parser::SEP);
              setState(129);
              paramType();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(132); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(134);
    match(Sign2016Parser::SEP);
    setState(135);
    match(Sign2016Parser::FE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnTypeContext ------------------------------------------------------------------

Sign2016Parser::ReturnTypeContext::ReturnTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Sign2016Parser::VoidTypeContext* Sign2016Parser::ReturnTypeContext::voidType() {
  return getRuleContext<Sign2016Parser::VoidTypeContext>(0);
}

Sign2016Parser::BoolTypeContext* Sign2016Parser::ReturnTypeContext::boolType() {
  return getRuleContext<Sign2016Parser::BoolTypeContext>(0);
}

Sign2016Parser::IntTypeContext* Sign2016Parser::ReturnTypeContext::intType() {
  return getRuleContext<Sign2016Parser::IntTypeContext>(0);
}

Sign2016Parser::UintTypeContext* Sign2016Parser::ReturnTypeContext::uintType() {
  return getRuleContext<Sign2016Parser::UintTypeContext>(0);
}

Sign2016Parser::FloatTypeContext* Sign2016Parser::ReturnTypeContext::floatType() {
  return getRuleContext<Sign2016Parser::FloatTypeContext>(0);
}

Sign2016Parser::StructTypeContext* Sign2016Parser::ReturnTypeContext::structType() {
  return getRuleContext<Sign2016Parser::StructTypeContext>(0);
}

Sign2016Parser::PtrTypeContext* Sign2016Parser::ReturnTypeContext::ptrType() {
  return getRuleContext<Sign2016Parser::PtrTypeContext>(0);
}


size_t Sign2016Parser::ReturnTypeContext::getRuleIndex() const {
  return Sign2016Parser::RuleReturnType;
}

void Sign2016Parser::ReturnTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnType(this);
}

void Sign2016Parser::ReturnTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnType(this);
}


antlrcpp::Any Sign2016Parser::ReturnTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitReturnType(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::ReturnTypeContext* Sign2016Parser::returnType() {
  ReturnTypeContext *_localctx = _tracker.createInstance<ReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 18, Sign2016Parser::RuleReturnType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(137);
      voidType();
      break;
    }

    case 2: {
      setState(138);
      boolType();
      break;
    }

    case 3: {
      setState(139);
      intType();
      break;
    }

    case 4: {
      setState(140);
      uintType();
      break;
    }

    case 5: {
      setState(141);
      floatType();
      break;
    }

    case 6: {
      setState(142);
      structType();
      break;
    }

    case 7: {
      setState(143);
      ptrType();
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

//----------------- ParamTypeContext ------------------------------------------------------------------

Sign2016Parser::ParamTypeContext::ParamTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Sign2016Parser::VoidTypeContext* Sign2016Parser::ParamTypeContext::voidType() {
  return getRuleContext<Sign2016Parser::VoidTypeContext>(0);
}

Sign2016Parser::BoolTypeContext* Sign2016Parser::ParamTypeContext::boolType() {
  return getRuleContext<Sign2016Parser::BoolTypeContext>(0);
}

Sign2016Parser::IntTypeContext* Sign2016Parser::ParamTypeContext::intType() {
  return getRuleContext<Sign2016Parser::IntTypeContext>(0);
}

Sign2016Parser::UintTypeContext* Sign2016Parser::ParamTypeContext::uintType() {
  return getRuleContext<Sign2016Parser::UintTypeContext>(0);
}

Sign2016Parser::FloatTypeContext* Sign2016Parser::ParamTypeContext::floatType() {
  return getRuleContext<Sign2016Parser::FloatTypeContext>(0);
}

Sign2016Parser::StructTypeContext* Sign2016Parser::ParamTypeContext::structType() {
  return getRuleContext<Sign2016Parser::StructTypeContext>(0);
}

Sign2016Parser::PtrTypeContext* Sign2016Parser::ParamTypeContext::ptrType() {
  return getRuleContext<Sign2016Parser::PtrTypeContext>(0);
}


size_t Sign2016Parser::ParamTypeContext::getRuleIndex() const {
  return Sign2016Parser::RuleParamType;
}

void Sign2016Parser::ParamTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamType(this);
}

void Sign2016Parser::ParamTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamType(this);
}


antlrcpp::Any Sign2016Parser::ParamTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitParamType(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::ParamTypeContext* Sign2016Parser::paramType() {
  ParamTypeContext *_localctx = _tracker.createInstance<ParamTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, Sign2016Parser::RuleParamType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(146);
      voidType();
      break;
    }

    case 2: {
      setState(147);
      boolType();
      break;
    }

    case 3: {
      setState(148);
      intType();
      break;
    }

    case 4: {
      setState(149);
      uintType();
      break;
    }

    case 5: {
      setState(150);
      floatType();
      break;
    }

    case 6: {
      setState(151);
      structType();
      break;
    }

    case 7: {
      setState(152);
      ptrType();
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

//----------------- TypeQualifierContext ------------------------------------------------------------------

Sign2016Parser::TypeQualifierContext::TypeQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::TypeQualifierContext::CONST_TYPE() {
  return getToken(Sign2016Parser::CONST_TYPE, 0);
}

tree::TerminalNode* Sign2016Parser::TypeQualifierContext::SEP() {
  return getToken(Sign2016Parser::SEP, 0);
}


size_t Sign2016Parser::TypeQualifierContext::getRuleIndex() const {
  return Sign2016Parser::RuleTypeQualifier;
}

void Sign2016Parser::TypeQualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeQualifier(this);
}

void Sign2016Parser::TypeQualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeQualifier(this);
}


antlrcpp::Any Sign2016Parser::TypeQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitTypeQualifier(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::TypeQualifierContext* Sign2016Parser::typeQualifier() {
  TypeQualifierContext *_localctx = _tracker.createInstance<TypeQualifierContext>(_ctx, getState());
  enterRule(_localctx, 22, Sign2016Parser::RuleTypeQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(Sign2016Parser::CONST_TYPE);
    setState(156);
    match(Sign2016Parser::SEP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SizeContext ------------------------------------------------------------------

Sign2016Parser::SizeContext::SizeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::SizeContext::SIZE() {
  return getToken(Sign2016Parser::SIZE, 0);
}


size_t Sign2016Parser::SizeContext::getRuleIndex() const {
  return Sign2016Parser::RuleSize;
}

void Sign2016Parser::SizeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSize(this);
}

void Sign2016Parser::SizeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSize(this);
}


antlrcpp::Any Sign2016Parser::SizeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitSize(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::SizeContext* Sign2016Parser::size() {
  SizeContext *_localctx = _tracker.createInstance<SizeContext>(_ctx, getState());
  enterRule(_localctx, 24, Sign2016Parser::RuleSize);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(Sign2016Parser::SIZE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArraySizeContext ------------------------------------------------------------------

Sign2016Parser::ArraySizeContext::ArraySizeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::ArraySizeContext::SEP() {
  return getToken(Sign2016Parser::SEP, 0);
}

tree::TerminalNode* Sign2016Parser::ArraySizeContext::ARRAY_SIZE() {
  return getToken(Sign2016Parser::ARRAY_SIZE, 0);
}


size_t Sign2016Parser::ArraySizeContext::getRuleIndex() const {
  return Sign2016Parser::RuleArraySize;
}

void Sign2016Parser::ArraySizeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArraySize(this);
}

void Sign2016Parser::ArraySizeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArraySize(this);
}


antlrcpp::Any Sign2016Parser::ArraySizeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitArraySize(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::ArraySizeContext* Sign2016Parser::arraySize() {
  ArraySizeContext *_localctx = _tracker.createInstance<ArraySizeContext>(_ctx, getState());
  enterRule(_localctx, 26, Sign2016Parser::RuleArraySize);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(Sign2016Parser::SEP);
    setState(161);
    match(Sign2016Parser::ARRAY_SIZE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

Sign2016Parser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sign2016Parser::NameContext::ID() {
  return getToken(Sign2016Parser::ID, 0);
}


size_t Sign2016Parser::NameContext::getRuleIndex() const {
  return Sign2016Parser::RuleName;
}

void Sign2016Parser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void Sign2016Parser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Sign2016Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}


antlrcpp::Any Sign2016Parser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sign2016Visitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

Sign2016Parser::NameContext* Sign2016Parser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 28, Sign2016Parser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(Sign2016Parser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> Sign2016Parser::_decisionToDFA;
atn::PredictionContextCache Sign2016Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Sign2016Parser::_atn;
std::vector<uint16_t> Sign2016Parser::_serializedATN;

std::vector<std::string> Sign2016Parser::_ruleNames = {
  "signature", "voidType", "boolType", "intType", "uintType", "floatType", 
  "structType", "ptrType", "function", "returnType", "paramType", "typeQualifier", 
  "size", "arraySize", "name"
};

std::vector<std::string> Sign2016Parser::_literalNames = {
  "", "'C'", "'V'", "'B'", "'I'", "'UI'", "'F'", "'S'", "'PTR'", "'FB'", 
  "'FE'", "", "", "'-'"
};

std::vector<std::string> Sign2016Parser::_symbolicNames = {
  "", "CONST_TYPE", "VOID_TYPE", "BOOL_TYPE", "INT_TYPE", "UINT_TYPE", "FLOAT_TYPE", 
  "STRUCT_TYPE", "PTR_TYPE", "FB", "FE", "ARRAY_SIZE", "SIZE", "SEP", "ID"
};

dfa::Vocabulary Sign2016Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Sign2016Parser::_tokenNames;

Sign2016Parser::Initializer::Initializer() {
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
    0x3, 0x10, 0xa8, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x28, 0xa, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x5, 0x4, 0x2f, 0xa, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x33, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x36, 0xb, 
    0x4, 0x3, 0x5, 0x5, 0x5, 0x39, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x7, 0x5, 0x3e, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x41, 0xb, 0x5, 0x3, 0x6, 
    0x5, 0x6, 0x44, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x49, 
    0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x4c, 0xb, 0x6, 0x3, 0x7, 0x5, 0x7, 0x4f, 
    0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x54, 0xa, 0x7, 0xc, 
    0x7, 0xe, 0x7, 0x57, 0xb, 0x7, 0x3, 0x8, 0x5, 0x8, 0x5a, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x5f, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 
    0x62, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x5, 0x9, 0x68, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x6d, 0xa, 0x9, 0xc, 
    0x9, 0xe, 0x9, 0x70, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x74, 0xa, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x7e, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 0x85, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x86, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x93, 0xa, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x9c, 
    0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x2, 0x2, 0x11, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x2, 0x2, 0x2, 0xbf, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x38, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x43, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x59, 0x3, 0x2, 0x2, 0x2, 0x10, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x14, 0x92, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x18, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xa0, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa5, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x28, 0x5, 0x6, 0x4, 0x2, 0x21, 0x28, 0x5, 
    0x8, 0x5, 0x2, 0x22, 0x28, 0x5, 0xa, 0x6, 0x2, 0x23, 0x28, 0x5, 0xc, 
    0x7, 0x2, 0x24, 0x28, 0x5, 0xe, 0x8, 0x2, 0x25, 0x28, 0x5, 0x10, 0x9, 
    0x2, 0x26, 0x28, 0x5, 0x12, 0xa, 0x2, 0x27, 0x20, 0x3, 0x2, 0x2, 0x2, 
    0x27, 0x21, 0x3, 0x2, 0x2, 0x2, 0x27, 0x22, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x27, 0x24, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x2, 0x2, 0x3, 0x2a, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x2b, 0x2c, 0x7, 0x4, 0x2, 0x2, 0x2c, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x2f, 0x5, 0x18, 0xd, 0x2, 0x2e, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 0x30, 
    0x34, 0x7, 0x5, 0x2, 0x2, 0x31, 0x33, 0x5, 0x1c, 0xf, 0x2, 0x32, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x33, 0x36, 0x3, 0x2, 0x2, 0x2, 0x34, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 0x2, 0x2, 0x35, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 0x37, 0x39, 0x5, 0x18, 0xd, 
    0x2, 0x38, 0x37, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x6, 0x2, 0x2, 0x3b, 
    0x3f, 0x5, 0x1a, 0xe, 0x2, 0x3c, 0x3e, 0x5, 0x1c, 0xf, 0x2, 0x3d, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x5, 0x18, 0xd, 
    0x2, 0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x7, 0x2, 0x2, 0x46, 
    0x4a, 0x5, 0x1a, 0xe, 0x2, 0x47, 0x49, 0x5, 0x1c, 0xf, 0x2, 0x48, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 0x5, 0x18, 0xd, 
    0x2, 0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x7, 0x8, 0x2, 0x2, 0x51, 
    0x55, 0x5, 0x1a, 0xe, 0x2, 0x52, 0x54, 0x5, 0x1c, 0xf, 0x2, 0x53, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x57, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5a, 0x5, 0x18, 0xd, 
    0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x9, 0x2, 0x2, 0x5c, 
    0x60, 0x5, 0x1a, 0xe, 0x2, 0x5d, 0x5f, 0x5, 0x1c, 0xf, 0x2, 0x5e, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x62, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 0xf, 0x2, 
    0x2, 0x64, 0x65, 0x5, 0x1e, 0x10, 0x2, 0x65, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x68, 0x5, 0x18, 0xd, 0x2, 0x67, 0x66, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 
    0x7, 0xa, 0x2, 0x2, 0x6a, 0x6e, 0x5, 0x1a, 0xe, 0x2, 0x6b, 0x6d, 0x5, 
    0x1c, 0xf, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x70, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0x71, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0x71, 0x7d, 0x7, 0xf, 0x2, 0x2, 0x72, 0x74, 0x5, 0x18, 0xd, 0x2, 0x73, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x75, 0x7e, 0x5, 0x4, 0x3, 0x2, 0x76, 0x7e, 0x5, 
    0x6, 0x4, 0x2, 0x77, 0x7e, 0x5, 0x8, 0x5, 0x2, 0x78, 0x7e, 0x5, 0xa, 
    0x6, 0x2, 0x79, 0x7e, 0x5, 0xc, 0x7, 0x2, 0x7a, 0x7e, 0x5, 0xe, 0x8, 
    0x2, 0x7b, 0x7e, 0x5, 0x10, 0x9, 0x2, 0x7c, 0x7e, 0x5, 0x12, 0xa, 0x2, 
    0x7d, 0x73, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x7d, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x80, 0x7, 0xb, 0x2, 0x2, 0x80, 0x81, 0x7, 0xf, 0x2, 
    0x2, 0x81, 0x84, 0x5, 0x14, 0xb, 0x2, 0x82, 0x83, 0x7, 0xf, 0x2, 0x2, 
    0x83, 0x85, 0x5, 0x16, 0xc, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x85, 
    0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 
    0xf, 0x2, 0x2, 0x89, 0x8a, 0x7, 0xc, 0x2, 0x2, 0x8a, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x8b, 0x93, 0x5, 0x4, 0x3, 0x2, 0x8c, 0x93, 0x5, 0x6, 0x4, 
    0x2, 0x8d, 0x93, 0x5, 0x8, 0x5, 0x2, 0x8e, 0x93, 0x5, 0xa, 0x6, 0x2, 
    0x8f, 0x93, 0x5, 0xc, 0x7, 0x2, 0x90, 0x93, 0x5, 0xe, 0x8, 0x2, 0x91, 
    0x93, 0x5, 0x10, 0x9, 0x2, 0x92, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x92, 0x8c, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x92, 0x8e, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x92, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x9c, 0x5, 0x4, 0x3, 0x2, 0x95, 0x9c, 0x5, 0x6, 0x4, 0x2, 
    0x96, 0x9c, 0x5, 0x8, 0x5, 0x2, 0x97, 0x9c, 0x5, 0xa, 0x6, 0x2, 0x98, 
    0x9c, 0x5, 0xc, 0x7, 0x2, 0x99, 0x9c, 0x5, 0xe, 0x8, 0x2, 0x9a, 0x9c, 
    0x5, 0x10, 0x9, 0x2, 0x9b, 0x94, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x96, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x97, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x9b, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x9e, 0x7, 0x3, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0xf, 0x2, 0x2, 0x9f, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0xe, 0x2, 0x2, 0xa1, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0xf, 0x2, 0x2, 0xa3, 0xa4, 0x7, 
    0xd, 0x2, 0x2, 0xa4, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x10, 
    0x2, 0x2, 0xa6, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x14, 0x27, 0x2e, 0x34, 0x38, 
    0x3f, 0x43, 0x4a, 0x4e, 0x55, 0x59, 0x60, 0x67, 0x6e, 0x73, 0x7d, 0x86, 
    0x92, 0x9b, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Sign2016Parser::Initializer Sign2016Parser::_init;
