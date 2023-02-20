// CS 281 coding standard
//------------------------------------------------------------------------------
// Minimum Age App
// Author: A Student
//
// - Prompts the user for their name and age.
// - Greets the user by name and displays whether they may
//		participate in the activity specified by ACTIVITY_STR.
// - Participation requires the user be at least MINIMUM_AGE old.
//------------------------------------------------------------------------------

// If you use local #include's they go here, for example:
//#include "Rectangle.h"
//#include "util.h"

#include <iostream>
#include <string>

// Use individual names instead of using namespace std.
// I like mine in alphabetical order.

//------------------------------------------------------------------------------
// using symbols 
//------------------------------------------------------------------------------
using std::cin;
using std::cout;
using std::endl;	// use '\n' instead - endl flushes the output buffer (SLOW)
using std::string;

//------------------------------------------------------------------------------
// constants 
//------------------------------------------------------------------------------
#define DEBUG
constexpr int MINIMUM_AGE = 18;			// use UPPERCASE names for constants
const string ACTIVITY_STR = "vote";

//------------------------------------------------------------------------------
// local function prototypes
//------------------------------------------------------------------------------
bool IsOldEnough(int);					// just use the parameter type

// Use block comments like this to explain the code:
//------------------------------------------------------------------------------
// CS 281 Coding Standards are worth 20% of each assignment score:
// 
// 1) Each file should have a comment header like the one above at line 1.
// 
// 2) Each function should have a comment header, even main(). Briefly
//		describe what the function does and what it returns.
// 
// 3) Use the code structure in this file to put all code in its proper place.
// 
// 4) Your code should use 4 spaces of indentation at each logical level.
//		VS helps! In VS, click Edit, Advanced, Format Document.
// 
// 5) Use meaningful variable names that start with a lower-case letter.
// 
// 6) Use enough line comments to explain your logic. Put a line comment
//		before each chunk of logic.
// 
// 7) Put blank lines before each line comment, function, and chunk of code
//		that represents an idea.
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
	// Initialize variables to known, recognizable values
	string username = "Codezilla";
	int age = 999;

	// Get user's one-word name
	cout << "What's your name? ";
	cin >> username;

	// Get user's age as an integer or float
	cout << "How old are you? ";
	cin >> age;

	// Display user's reported name and age, don't flush the output buffer yet
	cout << "Hi " << username << ", you're " << age << " years old.\n";

	// Display whether user is allowed to participate..
	if (IsOldEnough(age))
		cout << "Congratulations! You're old enough to ";
	else
		cout << "Sorry! You're not old enough to ";

	// ..in whatever activity, then flush output buffer with endl
	cout << ACTIVITY_STR << '.' << endl;

	// Keep console window open until user types a key
	cin.get();

	// returning an error code from main() is a best practice
	return 0;
}

// Local functions go after main()

//------------------------------------------------------------------------------
// bool IsOldEnough()
//
// returns true if passed user_age is at least MINIMUM_AGE, false otherwise.
//------------------------------------------------------------------------------
bool IsOldEnough(int user_age)
{
	if (user_age >= MINIMUM_AGE)
		return true;

	return false;
}


