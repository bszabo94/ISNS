
#include "Var.h"

Var::Var ( std::string name, std::string type, bool isStack ) {
    this->name = name;
    this->stackType = isStack;

    if ( type == "int " ) {
        this->type = INT;
        this->setValue ( 0 );
    } else if ( type == "str " ) {
        this->type = STR;
        this->setValue ( std::string() );
    } else if ( type == "byte " ) {
        this->type = BYTE;
        this->setValue ( std::bitset<8> ( 0 ) );
    } else if ( type == "frac " ) {
        this->type = FRAC;
        this->setValue ( 0.0 );
    }
}

Type Var::getType() {
    return this->type;
}

std::string Var::getName() {
    return this->name;
}

antlrcpp::Any Var::getValue() {
    return this->value;
}

void Var::setValue ( antlrcpp::Any value, int index ) {
    if ( this->type != ISNSOperator::getType ( value ) ) {
        throw ISNSRuntimeException ( "Invalid value conversion for '" + this->name + "'." );
    }

    if ( !this->stackType ) {
        throw ISNSRuntimeException ( "Invalid reference to a non-stack variable as stack: '" + this->name + "'." );
    }

    if ( this->type == INT ) {
        this->stack[index] = value.as<int>();
    }
    if ( this->type == BYTE ) {
        this->stack[index] = value.as<std::bitset<8>>();
    }
    if ( this->type == STR ) {
        this->stack[index] = value.as<std::string>();
    }
    if ( this->type == FRAC ) {
        this->stack[index] = value.as<double>();
    }
}

void Var::setValue ( antlrcpp::Any value ) {
    if ( this->type != ISNSOperator::getType ( value ) ) {
        throw ISNSRuntimeException ( "Invalid value conversion for '" + this->name + "'." );
    }

    if ( this->type == INT ) {
        this->value= value.as<int>();
    }
    if ( this->type == BYTE ) {
        this->value= value.as<std::bitset<8>>();
    }
    if ( this->type == STR ) {
        this->value= value.as<std::string>();
    }
    if ( this->type == FRAC ) {
        this->value= value.as<double>();
    }
}

bool Var::isStack() {
    return this->stackType;
}

antlrcpp::Any Var::getValue ( int index ) {

    try {
        if ( this->type == STR && !this->stackType ) {
            std::string s = this->value.as<std::string>();
            s = s[index];
            antlrcpp::Any ret = s;
            return ret.as<std::string>();
        }

        return this->stack.at ( index );
    } catch ( std::exception e ) {
        return this->value;
    }
}

std::string Var::toString() {
    std::string stringOfVal, stringOfType;
    if ( this->type == INT ) {
        stringOfType = "int";
        stringOfVal = std::to_string ( this->value.as<int>() );
    } else if ( this->type == STR ) {
        stringOfType = "str";
        stringOfVal = this->value.as<std::string>();
    } else if ( this->type == FRAC ) {
        stringOfType = "frac";
        stringOfVal = std::to_string ( this->value.as<double>() );
    } else if ( this->type == BYTE ) {
        stringOfType = "byte";
        std::bitset<8> b = this->value.as<std::bitset<8>>();
        stringOfVal = "x2_" + b.to_string();
    }

    return "Var[ name=" + this->name + ", type=" + stringOfType + ", value=" + stringOfVal + "]";
}