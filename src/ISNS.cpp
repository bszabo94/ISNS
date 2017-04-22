#include "ISNS.h"

int ISNS::execute ( const char* file ) {
    try {
        std::ifstream stream;
        stream.open ( file );
        antlr4::ANTLRInputStream input ( stream );
        ISNSLexer lexer ( &input );
        antlr4::CommonTokenStream tokens ( &lexer );

        ISNSParser parser ( &tokens );

        parser.removeErrorListeners();

        ISNSErrorListener listener;
        parser.addErrorListener ( &listener );
        lexer.addErrorListener ( &listener );
        antlr4::tree::ParseTree* tree = parser.program();

        ISNSInterpreter visitor;
        visitor.visit ( tree );

        return visitor.getReturnValue();

    } catch ( antlr4::ParseCancellationException& e ) {
        std::cout << "Error while compiling: " << file << std::endl;
        std::cout << e.what() << std::endl;
    } catch ( ISNSRuntimeException& e ) {
        std::cout << e.getMsg() << std::endl;
    }

    return -1;
}

int main(int argc, const char ** argv) {
	
	ISNS isns;
	int r = isns.execute(argv[1]);
	
	std::cout << "Program succesfully executed with the return value: " << r << "." << std::endl;
	
	return 0;
	
}