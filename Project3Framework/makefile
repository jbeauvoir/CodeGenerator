P3.out : Project3.o SetLimits.o LexicalAnalyzer.o SyntacticalAnalyzer.o
	g++ -g -o P3.out Project3.o SetLimits.o LexicalAnalyzer.o SyntacticalAnalyzer.o

Project3.o : Project3.cpp SetLimits.h SyntacticalAnalyzer.h
	g++ -g -c -std=c++11 Project3.cpp

CodeGenerator.o : CodeGenerator.cpp CodeGenerator.h
	g++ -g -c -std=c++11 CodeGenerator.cpp

Object.o : Object.cpp Object.h
	g++ -g -c -std=c++11 Object.cpp

SetLimits.o : SetLimits.cpp SetLimits.h
	g++ -g -c -std=c++11 SetLimits.cpp

LexicalAnalyzer.o : LexicalAnalyzer.cpp LexicalAnalyzer.h
	g++ -g -c -std=c++11 LexicalAnalyzer.cpp

SyntacticalAnalyzer.o : SyntacticalAnalyzer.cpp SyntacticalAnalyzer.h LexicalAnalyzer.h
	g++ -g -c -std=c++11 SyntacticalAnalyzer.cpp

clean : 
	rm -rf *.p P3.out *.gch