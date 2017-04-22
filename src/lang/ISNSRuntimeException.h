#pragma once

#include <exception>

class ISNSRuntimeException: public std::exception{

private:
    std::string msg;

public:
    ISNSRuntimeException ( std::string msg ) {
        this->msg = msg;
    }

    std::string getMsg() {
        return this->msg;
    }

};
