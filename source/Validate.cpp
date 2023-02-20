//------------------------------------------------------------------------------
// Validate.cpp : class definition
// 
// - user input validation functions
//------------------------------------------------------------------------------
#include "Validate.h"

#include <cstdlib>
#include <iostream>
//#include <string>

//------------------------------------------------------------------------------
// using symbols
//------------------------------------------------------------------------------
using std::cin;
using std::string;

//------------------------------------------------------------------------------
// constructor
//------------------------------------------------------------------------------
Validate::Validate() { statusOK = true; }

//------------------------------------------------------------------------------
// returns integer, or 0
//------------------------------------------------------------------------------
int Validate::getValidatedInt() {

	string s;
	cin >> s;

	// returns 0 on invalid input
	long n = strtol(s.c_str(), nullptr, 0);
	
	statusOK = n ? true : false;
	return (int) n;
}
