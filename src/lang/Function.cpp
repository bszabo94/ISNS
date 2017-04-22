#include "Function.h"

Function::Function ( std::string name, std::string type, ISNSParser::FunctiondeclarationContext* ctx ) {

    this->name = name;

    if ( type == "int " ) {
        this->type = INT;
    } else if ( type == "str " ) {
        this->type = STR;
    } else if ( type == "byte " ) {
        this->type = BYTE;
    } else if ( type == "frac " ) {
        this->type = FRAC;
    } else if ( type == "void " ) {
        this->type = VOID;
    }

    this->context = ctx;
    this->hasReturnValue = false;

}

Function::Function ( std::string name, Type type, ISNSParser::FunctiondeclarationContext* ctx ) {

    this->name = name;

    this->type = type;

    this->context = ctx;

    this->hasReturnValue = false;

}

bool Function::getHasReturnValue() {
    return this->hasReturnValue;
}

void Function::setHasReturnValue ( bool hasReturnValue ) {
    this->hasReturnValue = hasReturnValue;
}


void Function::setContext ( ISNSParser::FunctiondeclarationContext* ctx ) {
    this->context = context;
}


Type Function::getType() {
    return this->type;
}

antlrcpp::Any Function::getReturnValue() {
    return this->returnValue;
}

std::string Function::getName() {
    return this->name;
}

std::vector<antlrcpp::Any> Function::getParamValues(){
	return this->paramValues;
}

void Function::addParamValue ( antlrcpp::Any v ) {
	this->paramValues.push_back(v);
}

void Function::addParamID ( std::__cxx11::string s) {
	this->paramIDs.push_back(s);
}

std::vector< std::__cxx11::string > Function::getParamIDs() {
	return this->paramIDs;
}


void Function::setReturnValue ( antlrcpp::Any returnValue ) {
    if ( this->type != ISNSOperator::getType ( returnValue ) ) {
        throw ISNSRuntimeException ( "Invalid value conversion for '" + this->name + "'." );
    }

    if ( this->type == INT ) {
        this->returnValue= returnValue.as<int>();
    }
    if ( this->type == BYTE ) {
        this->returnValue= returnValue.as<std::bitset<8>>();
    }
    if ( this->type == STR ) {
        this->returnValue= returnValue.as<std::string>();
    }
    if ( this->type == FRAC ) {
        this->returnValue= returnValue.as<double>();
    }
    
    this->setHasReturnValue(true);
}


ISNSParser::FunctiondeclarationContext* Function::getContext() {
    return this->context;
}


std::__cxx11::string Function::toString() {
    return "Function[ name=" + this->getName() + "]";
}

Function* Function::clone() {

    return new Function ( this->name, this->type, this->context );
}
