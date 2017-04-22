#pragma once

#include <antlr4-runtime.h>
#include <ostream>

class SysFunctions{
public:
    static antlrcpp::Any print ( std::string s );
    static antlrcpp::Any println ( std::string s ) ;
    static antlrcpp::Any read();
};
