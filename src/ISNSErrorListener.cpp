#include "ISNSErrorListener.h"

ISNSErrorListener::~ISNSErrorListener(){}
    
void ISNSErrorListener::syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol, size_t line, size_t charPositionInLine, const std::__cxx11::string& msg, std::__exception_ptr::exception_ptr e){
	throw antlr4::ParseCancellationException("Error with : '" + offendingSymbol->getText() + "' at " + std::to_string(line) + ":" + std::to_string(charPositionInLine) + " " + msg);
}
    
void ISNSErrorListener::reportAmbiguity(antlr4::Parser* recognizer, const antlr4::dfa::DFA& dfa, size_t startIndex, size_t stopIndex, bool exact, const antlrcpp::BitSet& ambigAlts, antlr4::atn::ATNConfigSet* configs){}
    
void ISNSErrorListener::reportAttemptingFullContext(antlr4::Parser* recognizer, const antlr4::dfa::DFA& dfa, size_t startIndex, size_t stopIndex, const antlrcpp::BitSet& conflictingAlts, antlr4::atn::ATNConfigSet* configs){}
    
void ISNSErrorListener::reportContextSensitivity(antlr4::Parser* recognizer, const antlr4::dfa::DFA& dfa, size_t startIndex, size_t stopIndex, size_t prediction, antlr4::atn::ATNConfigSet* configs){}