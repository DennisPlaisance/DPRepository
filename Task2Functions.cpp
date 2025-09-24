#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"
#include "Task2Functions.h"

using namespace std;

string strToBeTested2 = "Hello";
stringUtil testString2 = strToBeTested2;

// Task 2 Functions - Each function is made for test running in the console.

void stringLengthTestFunc2()
{
	cout << "String Length: " << testString2.Length() << endl;
}

void stringCharacterAtTestFunc2()
{
	cout << "Character At Index 0: " << testString2.CharacterAt(0) << endl;
}

void stringEqualToTestFunc2()
{
	cout << "Are two strings equal? Hello and Hello: " << testString2.EqualTo("Hello") << endl;
}

void stringAppendTestFunc2()
{
	cout << "String Appended: " << testString2.Append(", World!") << endl;
}

void stringPrependTestFunc2()
{
	cout << "String Prepended: " << testString2.Prepend("Hello ") << endl;
}

void stringToLowerTestFunc2()
{
	cout << "All lowercase: " << testString2.ToLower() << endl;
}

void stringToUpperTestFunc2()
{
	cout << "All uppercase: " << testString2.ToUpper() << endl;
}

void stringFindTestFunc2()
{
	cout << "Find WORLD: " << testString2.Find("WORLD") << endl;
}

void stringAdvancedFindTestFunc2()
{
	cout << "Advanced Find WORLD at 13: " << testString2.Find(13, "WORLD") << endl;
}

void stringReplaceTestFunc2()
{
	cout << "Replace all instances of HELLO with nothing: " << testString2.Replace("HELLO", "") << endl;
}

void stringWriteToConsoleTestFunc2()
{
	cout << "Take input: " << endl;
	testString2.WriteToConsole();
}

void stringReadFromConsoleTestFunc2()
{
	cout << "Read the current string: " << endl;
	testString2.ReadFromConsole();
}