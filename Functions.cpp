#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"
#include "Functions.h"

using namespace std;

string strToBeTested = "Hello";
stringUtil testString = strToBeTested;

void stringLengthTest()
{
	cout << "String Length: " << testString.Length() << endl;
}

void stringCharacterAtTest()
{
	cout << "Character At Index 0: " << testString.CharacterAt(0) << endl;
}

void stringEqualToTest()
{
	cout << "Are two strings equal? Hello and Hello: " << testString.EqualTo("Hello") << endl;
}

void stringAppendTest()
{
	cout << "String Appended: " << testString.Append(", World!") << endl;
}

void stringPrependTest()
{
	cout << "String Prepended: " << testString.Prepend("Hello ") << endl;
}

void stringToLowerTest()
{
	cout << "All lowercase: " << testString.ToLower() << endl;
}

void stringToUpperTest()
{
	cout << "All uppercase: " << testString.ToUpper() << endl;
}

void stringFindTest()
{
	cout << "Find WORLD: " << testString.Find("WORLD") << endl;
}

void stringAdvancedFindTest()
{
	cout << "Advanced Find WORLD at 13: " << testString.Find(13, "WORLD") << endl;
}

void stringReplaceTest()
{
	cout << "Replace all instances of HELLO with nothing. (Is void, will still run though.)" << endl;
	testString.Replace("HELLO", "");
}

void stringWriteToConsoleTest()
{
	cout << "Write to console: ";
	testString.WriteToConsole();
}

void stringReadFromConsoleTest()
{
	cout << "Read from console: ";
	testString.ReadFromConsole();
}

void logTestResults(int passed, int total)
{
	float successRate = (float)passed / total;

	ofstream logFile("test_results.txt", ios::app);

	if (logFile.is_open())
	{
		logFile << "Tests Passed: " << passed << "/" << total << endl;
		logFile << "Success Rate: " << successRate << "%" << endl;
		logFile.close();
	}
	else
	{
		cout << "ERROR" << endl;
	}
}