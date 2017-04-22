#pragma once

#include "ISNSInterpreter.h"

class ISNS{

private:
    ISNSInterpreter interpreter;

public:
    int execute ( const char* file );

};
