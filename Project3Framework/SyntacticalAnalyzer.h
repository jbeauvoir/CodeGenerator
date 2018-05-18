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
#include "CodeGenerator.h"
#include <set>
#include <string>

using namespace std;

class SyntacticalAnalyzer 
{
    public:
	SyntacticalAnalyzer (char * filename);
	~SyntacticalAnalyzer ();
    private:


	string genString;
	LexicalAnalyzer * lex;
	CodeGen * cg;
	ofstream p2file;
	token_type token;
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
