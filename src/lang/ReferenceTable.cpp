#include "ReferenceTable.h"

ReferenceTable::ReferenceTable() {
    cycle = false;
}

bool ReferenceTable::isCycle() {
    return cycle;
}

void ReferenceTable::setCycle ( bool isCycle ) {
    this->cycle = isCycle;
}

bool ReferenceTable::isVarDeclared ( std::string ref ) {
    if ( varReferences.find ( ref ) == varReferences.end() ) {
        return false;
    }
    return true;
}

bool ReferenceTable::isFunctionDeclared ( std::string ref ) {
    if ( functionReferences.find ( ref ) == functionReferences.end() ) {
        return false;
    }
    return true;
}

Var* ReferenceTable::getVar ( std::string ref ) {
    return varReferences.at ( ref );
}

Function* ReferenceTable::getFunction ( std::string ref ) {
    return functionReferences.at ( ref );
}

void ReferenceTable::addVar ( std::string ref, Var* var ) {
    varReferences.insert ( std::pair<std::string, Var*> ( ref, var ) );
}

void ReferenceTable::addFunction ( std::string ref, Function* func ) {
    functionReferences[ref] = func;
}

std::map<std::string, Var*> ReferenceTable::getVarReferences() {
    return this->varReferences;
}

std::map<std::string, Function*> ReferenceTable::getFunctionReferences() {
    return this->functionReferences;
}
