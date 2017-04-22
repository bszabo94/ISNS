#pragma once

#include <antlr4-runtime.h>
#include <string>
#include "Type.h"
#include <bitset>
#include "ISNSOperator.h"
#include "ISNSRuntimeException.h"

class Var {
	private:
		Type type;
		std::string name;
		antlrcpp::Any value;
		std::map<int, antlrcpp::Any> stack;
		bool stackType;
		
		
	public:
		Var(std::string name, std::string type, bool isStack);
		Type getType();
		void setValue(antlrcpp::Any value);
		void setValue(antlrcpp::Any value, int index);
		std::string getName();
		antlrcpp::Any getValue();
		antlrcpp::Any getValue(int index);
		std::string toString();
		bool isStack();
	
};