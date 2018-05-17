/*******************************************************************************
* Assignment: Project 2 - Syntactic Analyzer for Scheme to C++ Translator      *
* Author:                                                                      *
* Date: Spring 2018                                                            *
* File: SyntacticalAnalyzer.h                                                  *
*                                                                              *
* Description: This file contains the                                          *
*******************************************************************************/

#ifndef SYN_H
#define SYN_H

#include <iostream>
#include <fstream>
#include "LexicalAnalyzer.h"
#include <set>
#include <string>
#include "CodeGenerator.h"

using namespace std;

class SyntacticalAnalyzer 
{
    public:
	SyntacticalAnalyzer (char * filename);
	~SyntacticalAnalyzer ();
	bool isMain();
    private:
	LexicalAnalyzer * lex;
	CodeGen * codeGenerator;
	ofstream p2file;
	string function;
	token_type token;
	bool ismain;
	int Program();
	int define();
	int action();
	int any_other_token();
	int else_part();
	int literal();
	int more_defines();
	int more_tokens();
	int param_list();
	int quoted_lit();
	int stmt_list();
	int stmt_pair_body();
	int stmt_pair();
	int stmt();
};
	
#endif
