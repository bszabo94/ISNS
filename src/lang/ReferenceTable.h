#pragma once

#include "Function.h"
#include "Var.h"
#include <map>

class ReferenceTable{

private:
    std::map<std::string, Var*> varReferences;
    std::map<std::string, Function*> functionReferences;
    bool cycle;

public:
    ReferenceTable();

    bool isCycle();

    void setCycle ( bool isCycle );

    bool isVarDeclared ( std::string ref );

    bool isFunctionDeclared ( std::string ref );

    Var* getVar ( std::string ref );

    Function* getFunction ( std::string ref );

    void addVar ( std::string ref, Var* var );

    void addFunction ( std::string ref, Function* func );

    std::map<std::string, Var*> getVarReferences();

    std::map<std::string, Function*> getFunctionReferences();

};
