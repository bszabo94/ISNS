#pragma once

#include <antlr4-runtime.h>
#include <ostream>

namespace SysFunctions{
    antlrcpp::Any print ( std::string s );
    antlrcpp::Any println ( std::string s ) ;
    antlrcpp::Any read();
};
