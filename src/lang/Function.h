#pragma once

#include "../ISNSParser.h"
#include <bitset>
#include "ISNSOperator.h"
#include "ISNSRuntimeException.h"

class Function
{
private:
    std::string name;
    Type type;
    ISNSParser::FunctiondeclarationContext *context;
    antlrcpp::Any returnValue;
	std::vector<antlrcpp::Any> paramValues;
	std::vector<std::string> paramIDs;
    bool hasReturnValue;

public:
    Function ( std::string name, std::string type, ISNSParser::FunctiondeclarationContext* ctx );
    Function ( std::string name, Type type, ISNSParser::FunctiondeclarationContext* ctx );
    Type getType();
    void setContext ( ISNSParser::FunctiondeclarationContext *ctx );
    std::string getName();
    antlrcpp::Any getReturnValue();
    void setReturnValue ( antlrcpp::Any returnValue );
    ISNSParser::FunctiondeclarationContext *getContext();
    Function* clone();
    std::string toString();
    bool getHasReturnValue();
    void setHasReturnValue ( bool hasReturnValue );
	std::vector<antlrcpp::Any> getParamValues();
	void addParamValue(antlrcpp::Any v);
	void addParamID(std::string s);
	std::vector<std::string> getParamIDs();
};
