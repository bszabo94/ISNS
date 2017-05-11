#pragma once

#include <antlr4-runtime.h>
#include "Type.h"
#include "ISNSRuntimeException.h"
#include <math.h>

namespace ISNSOperator{

    bool isIntString ( std::string s );
    bool isDoubleString ( std::string s );

    antlrcpp::Any convertToType ( antlrcpp::Any val, Type type );
    antlrcpp::Any operate ( antlrcpp::Any val1, antlrcpp::Any val2, std::string 
op );
    antlrcpp::Any uOperate ( antlrcpp::Any val, std::string op );

    bool cOperate ( antlrcpp::Any val1, antlrcpp::Any val2, std::string op );
    Type getType ( antlrcpp::Any v );
    bool getBool ( antlrcpp::Any v );
    void trimStr ( std::string &s );
	
};
