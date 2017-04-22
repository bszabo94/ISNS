#pragma once

#include <antlr4-runtime.h>
#include "Type.h"
#include "ISNSRuntimeException.h"
#include <math.h>

class ISNSOperator{

public:
    static bool isIntString ( std::string s );
    static bool isDoubleString ( std::string s );

    static antlrcpp::Any convertToType ( antlrcpp::Any val, Type type );
    static antlrcpp::Any operate ( antlrcpp::Any val1, antlrcpp::Any val2, std::string op );
    static antlrcpp::Any uOperate ( antlrcpp::Any val, std::string op );

    static bool cOperate ( antlrcpp::Any val1, antlrcpp::Any val2, std::string op );
    static Type getType ( antlrcpp::Any v );
    static bool getBool ( antlrcpp::Any v );
    static void trimStr ( std::string &s );
	
};
