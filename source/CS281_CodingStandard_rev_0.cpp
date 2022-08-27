/*******************************************************************************
* Minimum Age App
* Author: A Student
*
* - Prompts the user for their name and age.
* - Greets the user by name and displays whether they may
*		participate in the activity specified by ACTIVITY_STR.
* - Participation requires the user be at least MINIMUM_AGE old.
*
********************************************************************************
*/

// system #include's go here
#include <iostream>
#include <string>

// if you use local #include's they go here
//#include "my.h"	// for example

// using statements go here
using namespace std;

// constants go here - use UPPERCASE names for these
constexpr int MINIMUM_AGE = 18;
const string ACTIVITY_STR = "vote";

// Local function prototypes go here
bool IsOldEnough(int user_age);

// use block comments to explain the code
/*******************************************************************************
* CS 281 Coding Standards are worth 20% of each assignment score:
* 
* 1) Each file should have a comment header like the one above at line 1.
* 
* 2) Put a comment header before each function, even main().
* 
* 3) Use the code structure in this file to put all code in its proper place
*		The line comments tell you what goes where.
* 
* 4) Your code should use 4 spaces of indentation at each level. In VS, click
*		Analyze, Code Cleanup, Run Code Cleanup (Profile 1) on Solution
* 
* 5) Use meaningful variable names that start with a lower-case letter.
* 
* 6) Use enough line comments to explain your logic.
* 
* 7) Put blank lines before each line comment, function, and chunk of code
*		that represents an idea.
********************************************************************************
*/

/*******************************************************************************
* entry point
********************************************************************************
*/
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
		cout << "Sorry! You're not yet old enough to ";

	// ..in whatever activity
	cout << ACTIVITY_STR << endl;

	// Prevent console window from closing
	cin.get();

	// returning an error code from main() is a best practice
	return 0;
}

// Local functions go after main()

/*******************************************************************************
* bool IsOldEnough()
*
* returns true if passed user_age is at least MINIMUM_AGE, false otherwise.
********************************************************************************
*/
bool IsOldEnough(int user_age)
{
	if (user_age >= MINIMUM_AGE)
		return true;

	return false;
}


