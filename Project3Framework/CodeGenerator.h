#ifndef CG_H
#define CG_H

#include <iostream>
#include <fstream>
#include "LexicalAnalyzer.h"

using namespace std;

class CodeGen 
{
    public:
	CodeGen (string filename, LexicalAnalyzer * L);
	~CodeGen ();
	void WriteCode (int tabs, string code);
	string GetEvaluator();
	void SetEvaluator(string evaluator);
    private:
	LexicalAnalyzer * lex;
	ofstream cpp;
	string eval;
};
	
#endif
