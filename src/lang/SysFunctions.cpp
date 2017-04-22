#include "SysFunctions.h"

antlrcpp::Any SysFunctions::print ( std::string s ) {
    antlrcpp::Any r;
    try {
        std::cout << s;
        r = 1;
        return r.as<int>();
    } catch ( std::exception e ) {
        r = 0;
        return r.as<int>();
    }
}

antlrcpp::Any SysFunctions::println ( std::string s ) {
    antlrcpp::Any r;
    try {
        std::cout << s << std::endl;
        r = 1;
        return r.as<int>();
    } catch ( std::exception e ) {
        r = 0;
        return r.as<int>();
    }
}

antlrcpp::Any SysFunctions::read() {
    std::string s;
    std::cin >> s;

    antlrcpp::Any temp, r;
    temp = s;
    r = temp.as<std::string>();
    return r;
}
