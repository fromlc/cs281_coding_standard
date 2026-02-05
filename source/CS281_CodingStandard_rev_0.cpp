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

// local #include's go before system #include's
#include "Validate.h"

// system #include's
#include <iostream>
#include <string>

// Use individual names instead of using namespace std.
// I like mine in alphabetical order - OCD but easy to spot problems.

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
// globals 
//------------------------------------------------------------------------------
// use globals when you just need one and no data corruption is possible!
// use a naming convention to indicate a global variable, I use g_
Validate g_v;

//------------------------------------------------------------------------------
// local function prototypes
//------------------------------------------------------------------------------
// use single-purpose functions to keep main() simple
void initApp();
void getName(string&);
int getAge();
bool isOldEnough(int);				// just use the parameter type
void displayResults(string&, int);	// pass strings by reference when possible

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
    // display banner, do any needed initialization
    initApp();

    // when it's obvious, you don't need a comment
    string username;
    getName(username);

    int age = getAge();

    displayResults(username, age);

    // Keep console window open until user types a key
    cin.get();

    // returning an error code from main() is a best practice
    return 0;
}

// Local functions go after main()

//------------------------------------------------------------------------------
// app initialization tasks
//------------------------------------------------------------------------------
void initApp()
{
    cout << "\nAre you old enough to " << ACTIVITY_STR << "?\n";
}

//------------------------------------------------------------------------------
// returns user's one-word name in reference parameter name
//------------------------------------------------------------------------------
void getName(string& name) 
{
    cout << "\nWhat's your name? ";
    cin >> name;
}

//------------------------------------------------------------------------------
// returns true if passed user_age is at least MINIMUM_AGE, false otherwise.
//------------------------------------------------------------------------------
bool isOldEnough(int user_age) { return (user_age >= MINIMUM_AGE); }

//------------------------------------------------------------------------------
// returns validated positive int
//------------------------------------------------------------------------------
int getAge() 
{
    cout << "How old are you? ";

    int age;
    while (!g_v.getValidatedInt(age)) 
    {
        cout << "Please enter your age as a number: ";
    }

    return age;
}

//------------------------------------------------------------------------------
// app output
//------------------------------------------------------------------------------
void displayResults(string& name, int age) 
{
    // Display user's reported name and age
    cout << "\nHi " << name << ", you're ";

    // Display whether user is allowed to participate..
    if (age < 0) 
    {
        cout << "unborn! Sorry, the unborn can't ";
    }
    else 
    {
        cout << age << " years old.\n";

        if (isOldEnough(age)) 
        {
            cout << "Congratulations! You're old enough to ";
        }
        else 
        {
            cout << "Sorry! You're not old enough to ";
        }
    }

    // ..in whatever activity, then flush input/output buffer with endl
    cout << ACTIVITY_STR << '.' << endl;
}

