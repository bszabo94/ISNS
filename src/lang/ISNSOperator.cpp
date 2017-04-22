#include "ISNSOperator.h"

bool ISNSOperator::isIntString ( std::string s ) {
    if ( s.find_first_not_of ( "-0123456789" ) != std::string::npos || ( s.find ( "-" ) != std::string::npos && s[0] != '-' ) ) {
        return false;
    }
    return true;

}

bool ISNSOperator::isDoubleString ( std::string s ) {
    if ( s.find_first_not_of ( ".-0123456789" ) != std::string::npos || ( s.find ( "-" ) != std::string::npos && s[0] != '-' ) || ( s.find ( "-." ) != std::string::npos ) ) {
        return false;
    }
    return true;
}

antlrcpp::Any ISNSOperator::convertToType ( antlrcpp::Any val, Type type ) {

    antlrcpp::Any temp, retVal;

    if ( type == FRAC ) {
        double d;
        //DOUBLE
        if ( val.is<double>() ) {
            d = val.as<double>();
        }
        //INT
        else if ( val.is<int>() ) {
            d = ( double ) val.as<int>();
        }
        //BITSET
        else if ( val.is<std::bitset<8>>() ) {
            std::bitset<8> bs = val.as<std::bitset<8>>();
            d = ( double ) bs.to_ulong();
        }
        //STR
        else if ( val.is<std::string>() ) {
            std::string s = val.as<std::string>();
            if ( !isDoubleString ( s ) ) {
                throw ISNSRuntimeException ( "Error: cannot convert '" + s + "' to FRAC." );
            }

            d = std::stod ( s );
        } else {
            throw ISNSRuntimeException ( "Conversion failure." );
        }

        temp = d;
        retVal = temp.as<double>();
    }

    else if ( type == STR ) {
        std::string s;
        //DOUBLE
        if ( val.is<double>() ) {
            s = std::to_string ( val.as<double>() );
        }
        //INT
        else if ( val.is<int>() ) {
            s = std::to_string ( val.as<int>() );
        }
        //BITSET
        else if ( val.is<std::bitset<8>>() ) {
            std::bitset<8> bs = val.as<std::bitset<8>>();
            s = bs.to_string();
        }
        //STR
        else if ( val.is<std::string>() ) {
            s = val.as<std::string>();
        } else {
            throw ISNSRuntimeException ( "Conversion failure." );
        }

        temp = s;
        retVal = temp.as<std::string>();
    }

    else if ( type == INT ) {

        int i;

        //DOUBLE
        if ( val.is<double>() ) {
            i = ( int ) val.as<double>();
        }
        //INT
        else if ( val.is<int>() ) {
            i = val.as<int>();
        }
        //BITSET
        else if ( val.is<std::bitset<8>>() ) {
            std::bitset<8> bs = val.as<std::bitset<8>>();
            i = ( int ) ( bs.to_ulong() );
        }
        //STR
        else if ( val.is<std::string>() ) {
            std::string s = val.as<std::string>();
            if ( !isIntString ( s ) ) {
                throw ISNSRuntimeException ( "Cannot convert string to int" );
            }
            i = std::stoi ( s );
        } else {
            throw ISNSRuntimeException ( "Conversion failure." );
        }

        temp = i;
        retVal = temp.as<int>();
    }

    else if ( type == BYTE ) {

        std::bitset<8> b;

        //DOUBLE
        if ( val.is<double>() ) {
            double d = val.as<double>();
            if ( d > 255 || d < 0 ) {
                throw ISNSRuntimeException ( "Conversion failure: out of BYTE range (0-255)" );
            }
            int i = ( int ) d;
            b = std::bitset<8> ( i );
        }
        //INT
        else if ( val.is<int>() ) {
            int i = val.as<int>();
            if ( i > 255 || i < 0 ) {
                throw ISNSRuntimeException ( "Conversion failure: out of BYTE range (0-255)" );
            }
            b = std::bitset<8> ( i );
        }
        //BITSET
        else if ( val.is<std::bitset<8>>() ) {
            b = val.as<std::bitset<8>>();
        }
        //STR
        else if ( val.is<std::string>() ) {
            std::string s = val.as<std::string>();
            if ( !isIntString ( s ) ) {
                throw ISNSRuntimeException ( "Cannot convert string to byte" );
            }
            if ( s.length() > 8 ) {
                throw ISNSRuntimeException ( "Conversion failure: out of BYTE range (0-255)" );
            }
            b = std::bitset<8> ( s );

        } else {
            throw ISNSRuntimeException ( "Conversion failure." );
        }

        temp = b;
        retVal = temp.as<std::bitset<8>>();

    }


    return retVal;

}

antlrcpp::Any ISNSOperator::operate ( antlrcpp::Any val1, antlrcpp::Any val2, std::string op ) {

    if ( getType ( val1 ) != getType ( val2 ) ) {
        throw ISNSRuntimeException ( "operation error: Only the same types can be used with binary operands" );
    }

    antlrcpp::Any temp, retVal;

    //INT OPERANDS
    if ( getType ( val1 ) == INT ) {

        int v1 = val1.as<int>(), v2 = val2.as<int>(), v3;

        if ( op == "+" ) {
            v3 = v1 + v2;
        } else if ( op == "-" ) {
            v3 = v1 - v2;
        } else if ( op == "*" ) {
            v3 = v1 * v2;
        } else if ( op == "/" ) {
            v3 = v1 / v2;
        } else if ( op == "**" ) {
            v3 = pow ( v1, v2 );
        } else if ( op == "%" ) {
            v3 = v1 % v2;
        } else if ( op == "&" ) {
            v3 = v1 & v2;
        } else if ( op == "|" ) {
            v3 = v1 | v2;
        } else if ( op == "^" ) {
            v3 = v1 ^ v2;
        } else {
            throw ISNSRuntimeException ( "ERROR: Invalid operator: '" + op + "'." );
        }

        temp = v3;
        retVal = temp.as<int>();
    } else if ( getType ( val1 ) == FRAC ) {

        double v1 = val1.as<double>(), v2 = val2.as<double>(), v3;

        if ( op == "+" ) {
            v3 = v1 + v2;
        } else if ( op == "-" ) {
            v3 = v1 - v2;
        } else if ( op == "*" ) {
            v3 = v1 * v2;
        } else if ( op == "/" ) {
            v3 = v1 / v2;
        } else if ( op == "**" ) {
            v3 = pow ( v1, v2 );
        } else {
            throw ISNSRuntimeException ( "ERROR: Invalid operator: '" + op + "'." );
        }

        temp = v3;
        retVal = temp.as<double>();
    } else if ( getType ( val1 ) == STR ) {

        std::string v1 = val1.as<std::string>(), v2 = val2.as<std::string>(), v3;

        if ( op == "+" ) {
            v3 = v1 + v2;
        } else {
            throw ISNSRuntimeException ( "ERROR: Operator '" + op + "' is not defined on type STR." );
        }

        temp = v3;
        retVal = temp.as<std::string>();
    } else if ( getType ( val1 ) == BYTE ) {
        std::bitset<8> b1, b2, b3;
        b1 = val1.as<std::bitset<8>>();
        b2 = val2.as<std::bitset<8>>();
        int v1, v2, v3;
        v1 = ( int ) ( b1.to_ulong() );
        v2 = ( int ) ( b2.to_ulong() );

        if ( op == "+" ) {
            v3 = v1 + v2;
        } else if ( op == "-" ) {
            v3 = v1 - v2;
        } else if ( op == "*" ) {
            v3 = v1 * v2;
        } else if ( op == "/" ) {
            v3 = v1 / v2;
        } else if ( op == "**" ) {
            v3 = pow ( v1, v2 );
        } else if ( op == "%" ) {
            v3 = v1 % v2;
        } else if ( op == "&" ) {
            v3 = v1 & v2;
        } else if ( op == "|" ) {
            v3 = v1 | v2;
        } else if ( op == "^" ) {
            v3 = v1 ^ v2;
        } else {
            throw ISNSRuntimeException ( "ERROR: Invalid operator: '" + op + "'." );
        }

        if ( v3 > 255 || v3 < 0 ) {
            throw ISNSRuntimeException ( "ERROR: Result of BYTE operation is out of range (0-255)" );
        }

        b3 = std::bitset<8> ( v3 );
        temp = b3;
        retVal = temp.as<std::bitset<8>>();
    }

    return retVal;
}

antlrcpp::Any ISNSOperator::uOperate ( antlrcpp::Any val, std::string op ) {

    if ( getType ( val ) != BYTE ) {
        throw ISNSRuntimeException ( "Unary bitwise operands are only usable with BYTE types." );
    }

    antlrcpp::Any retVal, temp;

    std::bitset<8> b = val.as<std::bitset<8>>();
    uint8_t i = ( uint8_t ) b.to_ulong();

    if ( op == "~" ) {
        i = ~i;
    } else if ( op == "<1<" ) {
        i <<= 1;
        i = i | 0b00000001;
    } else if ( op == "<0<" ) {
        i <<= 1;
    } else if ( op == ">1>" ) {
        i >>= 1;
        i = i | 0b10000000;
    } else if ( op == ">0>" ) {
        i >>= 1;
    } else if ( op == "<<<" ) {
        int mostleft = i & 0b10000000;
        i <<= 1;
        if ( mostleft > 0 ) {
            i = i | 0b00000001;
        }
    } else if ( op == ">>>" ) {
        int mostright = i & 0b00000001;
        i >>= 1;
        if ( mostright > 0 ) {
            i = i | 0b10000000;
        }

    } else {
        throw ISNSRuntimeException ( "Unknown bitwise operand: '" + op + "'." );
    }

    int ti = ( int ) i;
    b = std::bitset<8> ( ti );
    temp = b;
    retVal = temp.as<std::bitset<8>>();

    return retVal;

}


bool ISNSOperator::cOperate ( antlrcpp::Any val1, antlrcpp::Any val2, std::string op ) {

    if ( getType ( val1 ) != getType ( val2 ) ) {

        if ( getType ( val1 ) == STR || getType ( val2 ) == STR ) {
            val1 = convertToType ( val1, STR );
            val2 = convertToType ( val2, STR );
        } else if ( getType ( val1 ) == FRAC || getType ( val2 ) == FRAC ) {
            val1 = convertToType ( val1, FRAC );
            val2 = convertToType ( val2, FRAC );
        } else if ( getType ( val1 ) == INT || getType ( val2 ) == INT ) {
            val1 = convertToType ( val1, INT );
            val2 = convertToType ( val2, INT );
        } else if ( getType ( val1 ) == BYTE || getType ( val2 ) == BYTE ) {
            val1 = convertToType ( val1, BYTE );
            val2 = convertToType ( val2, BYTE );
        }
    }

    if ( getType ( val1 ) == INT ) {
        int v1 = val1.as<int>(), v2 = val2.as<int>();

        if ( op == "<" ) {
            return v1 < v2;
        }
        if ( op == ">" ) {
            return v1 > v2;
        }
        if ( op == ">=" ) {
            return v1 >= v2;
        }
        if ( op == "<=" ) {
            return v1 <= v2;
        }
        if ( op == "==" ) {
            return v1 == v2;
        }
        if ( op == "!=" ) {
            return v1 != v2;
        }

        throw ISNSRuntimeException ( "Runtime Exception: unrecognized compare operation: '" + op + "'." );
    }

    if ( getType ( val1 ) == FRAC ) {
        double v1 = val1.as<double>(), v2 = val2.as<double>();

        if ( op == "<" ) {
            return v1 < v2;
        }
        if ( op == ">" ) {
            return v1 > v2;
        }
        if ( op == ">=" ) {
            return v1 >= v2;
        }
        if ( op == "<=" ) {
            return v1 <= v2;
        }
        if ( op == "==" ) {
            return v1 == v2;
        }
        if ( op == "!=" ) {
            return v1 != v2;
        }

        throw ISNSRuntimeException ( "Runtime Exception: unrecognized compare operation: '" + op + "'." );
    }

    if ( getType ( val1 ) == BYTE ) {
        std::bitset<8> b1 = val1.as<std::bitset<8>>(), b2 = val2.as<std::bitset<8>>();
        int v1 = ( int ) b1.to_ulong(), v2 = ( int ) b2.to_ulong();

        if ( op == "<" ) {
            return v1 < v2;
        }
        if ( op == ">" ) {
            return v1 > v2;
        }
        if ( op == ">=" ) {
            return v1 >= v2;
        }
        if ( op == "<=" ) {
            return v1 <= v2;
        }
        if ( op == "==" ) {
            return v1 == v2;
        }
        if ( op == "!=" ) {
            return v1 != v2;
        }

        throw ISNSRuntimeException ( "Runtime Exception: unrecognized compare operation: '" + op + "'." );
    }

    if ( getType ( val1 ) == STR ) {
        std::string s1 = val1.as<std::string>(), s2 = val2.as<std::string>();

        if ( op == "<" ) {
            return s1 < s2;
        }
        if ( op == ">" ) {
            return s1 > s2;
        }
        if ( op == ">=" ) {
            return s1 >= s2;
        }
        if ( op == "<=" ) {
            return s1 <= s2;
        }
        if ( op == "==" ) {
            return s1 == s2;
        }
        if ( op == "!=" ) {
            return s1 != s2;
        }

        throw ISNSRuntimeException ( "Runtime Exception: unrecognized compare operation: '" + op + "'." );
    }
    throw ISNSRuntimeException ( "Runtime Exception: unrecognized value type at comparison." );
}

Type ISNSOperator::getType ( antlrcpp::Any v ) {

    if ( v.is<int>() ) {
        return INT;
    }
    if ( v.is<std::string>() ) {
        return STR;
    }
    if ( v.is<double>() ) {
        return FRAC;
    }
    if ( v.is<std::bitset<8>>() ) {
        return BYTE;
    }

    throw ISNSRuntimeException ( "ERROR: cannot determine the TYPE of value" );
}

bool ISNSOperator::getBool ( antlrcpp::Any v ) {

    Type t = getType ( v );

    if ( t == INT ) {
        int i = v.as<int>();

        if ( i == 0 ) {
            return false;
        } else {
            return true;
        }
    }

    if ( t == STR ) {
        std::string s = v.as<std::string>();

        if ( s == "" ) {
            return false;
        } else {
            return true;
        }
    }

    if ( t == FRAC ) {
        double d = v.as<double>();

        if ( d == 0.0 ) {
            return false;
        } else {
            return true;
        }
    }

    if ( t == BYTE ) {
        std::bitset<8> b = v.as<std::bitset<8>>();
        int i = ( int ) b.to_ulong();

        if ( i == 0 ) {
            return false;
        } else {
            return true;
        }
    }

    throw ISNSRuntimeException ( "Unexpected error while converting value to bool." );
    return false;
}

void ISNSOperator::trimStr ( std::string &s ) {
    if ( ( s[0] = '\'' && s[s.length()-1] == '\'' ) || ( s[0] = '\"' && s[s.length()-1] == '\"' ) && s.length() > 1 ) {
        s = s.substr ( 1, s.length()-2 );
    }

}