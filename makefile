CXX = g++
SOURCES = src/ISNSLexer.cpp src/ISNSBaseListener.cpp src/ISNSBaseVisitor.cpp src/ISNSParser.cpp src/ISNSListener.cpp src/ISNSVisitor.cpp src/ISNSErrorListener.cpp src/ISNSInterpreter.cpp src/lang/*.cpp src/ISNS.cpp
CXXFLAGS =-g -std=c++14
LDLIBS = -lantlr4-runtime
OUTPUT = -o isns

isns: src/ISNS.o
	$(CXX) $(CXXFLAGS) $(SOURCES) $(OUTPUT) $(LDLIBS)
