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
Validate::Validate() { conversionOK = true; }

//------------------------------------------------------------------------------
// - stores numeric input value in reference param, or 0 on failed conversion
// - returns true on numeric input, false otherwise
//------------------------------------------------------------------------------
bool Validate::getValidatedInt(int& n)
{
	string s;
	cin >> s;

	// strtol() returns 0 on failed conversion to number
	n = (int) strtol(s.c_str(), nullptr, 0);

	// status ok on conversion ok or input is "0"
	conversionOK = (n || !s.compare("0"));
	return conversionOK;
}

//------------------------------------------------------------------------------
// - returns true if last conversion to number succeeded, false otherwise
//------------------------------------------------------------------------------
bool Validate::wasConversionOK() const { return conversionOK; }

