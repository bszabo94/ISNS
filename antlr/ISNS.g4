grammar ISNS;

program: importlib* declaration* EOF;

importedlibrary: importlib* declaration* EOF;

LINECOMMENT: '//' ~('\r' | '\n')* -> skip ;
BLOCKCOMMENT: '/*' .*? '*/' -> skip ;

importlib: 'import ' path (',' path)* ';' ;
path: string;

declaration: vardeclaration ';'
	| functiondeclaration ;

vardeclaration : vartype (identifier | assignment) (',' (identifier | assignment))*;
vartype: INTTYPE 
	| STRTYPE
	| BYTETYPE
	| FRACTYPE ;

functiondeclaration: functiontype identifier '(' args? ')' block ;
functiontype: INTTYPE
	| STRTYPE
	| BYTETYPE
	| FRACTYPE
	| VOIDTYPE ;

args: vardeclaration (',' vardeclaration)* ;

block: '{' statement* '}' ;

statement: declaration
	| assignment ';'
	| value ';'
	| returnstatement ';'
	| ifblock 
	| whileblock
	| forblock 
	;

assignment: identifier '=' value
	| identifier '=' compareop
	;

value: identifier
	| literal
	| exp ;

literal: string
	| number ;

functioncall: identifier '(' callargs? ')' 
	;
callargs: value (',' value)* 
	;


exp: mexp (PLUSMINUS mexp)*
	;

mexp: pexp (TIMESDIVMOD pexp)*
	;

pexp: bexp (POW bexp)*
	;

bexp: atom (BBITWISE atom)*
	;

atom : literal
	| functioncall
	| identifier
	| uop
	| '(' exp ')'
	;

ifblock: 'if' '(' (value | compareop ) ')' block ('else' block)?
	;

whileblock: 'while' '(' ( value | compareop ) ')' block
	;

forblock: 'for' '(' forinit? ';' forcond? ';' forstep? ')' block
	;

forinit: vardeclaration
	| assignment
	| value
	| compareop
	;

forcond: value
	|compareop
	;

forstep: vardeclaration
	| assignment
	| value
	| compareop
	;

returnstatement: 'return ' value? 
	;

compareop: value COP value
	;

uop: UBITWISE atom ;

number: INTNUMBER
	| FRACNUMBER
	| BINNUMBER 
	;

identifier: IDEN stackmark?;

stackmark: '[' value? ']' ;

UBITWISE: '~' | '<1<' | '>1>' | '<0<' | '>0>' | '<<<' | '>>>' ;
BBITWISE: '&' | '|' | '^' ;

PLUSMINUS: '+' | '-' ;
TIMESDIVMOD: '*' | '/' | '%' ;

POW: '**' ;

INTTYPE: 'int ' ;
STRTYPE: 'str ' ;
BYTETYPE: 'byte ' ;
VOIDTYPE: 'void ' ;
FRACTYPE: 'frac ' ;
COP: '<' | '>' | '<=' | '>=' | '==' | '!=' ;
IDEN: [a-zA-Z_]+ [a-zA-Z0-9_]* ;
INTNUMBER: '-'? [1-9][0-9]* | '0' ;
FRACNUMBER: '-'? [0-9]+ '.' [0-9]+ ;
BINNUMBER: 'X2_' ('0'|'1')* ;
string: SSTRING | DSTRING ;
SSTRING: '\'' (~'\'')* '\'' ;
DSTRING: '"' (~'"')* '"' ;

WS: [ \t\r\n] -> skip;
