//------------------------------------------------------------------------------
// Validate.h : class declaration
// 
// - user input validation
//------------------------------------------------------------------------------
#ifndef VALIDATE_H
#define VALIDATE_H

//------------------------------------------------------------------------------
// Validate
//------------------------------------------------------------------------------
class Validate {
private:
	// member variables go here
	bool conversionOK;

public:
	// constructor, destructor, member functions go here
	Validate();
	bool getValidatedInt(int&);
};
#endif	// VALIDATE_H

