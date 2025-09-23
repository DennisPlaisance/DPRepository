#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"
#include "Functions.h"

using namespace std;

string strToBeTested = "Hello";
stringUtil testString = strToBeTested;
ofstream logFile("test_results.txt");

void stringLengthTest()
{
	//cout << "String Length: " << testString.Length() << endl;

	if (logFile.is_open())
	{
		if (testString.Length() == 5)
		{
			logFile << "Test 0 Length Successful" << endl;
		}
		else
		{
			logFile << "Test 0 Length Failed" << endl;
		}
		logFile.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void stringCharacterAtTest()
{
	//cout << "Character At Index 0: " << testString.CharacterAt(0) << endl;

	if (logFile.is_open())
	{
		if (testString.CharacterAt(0) == 'H')
		{
			logFile << "Test 1 CharacterAt Successful" << endl;
		}
		else
		{
			logFile << "Test 1 CharacterAt Failed" << endl;
		}
		logFile.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void stringEqualToTest()
{
	//cout << "Are two strings equal? Hello and Hello: " << testString.EqualTo("Hello") << endl;

	if (logFile.is_open())
	{
		if (testString.EqualTo("Hello") == true)
		{
			logFile << "Test 2 EqualTo Successful" << endl;
		}
		else
		{
			logFile << "Test 2 EqualTo Failed" << endl;
		}
		logFile.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void stringAppendTest()
{
	//cout << "String Appended: " << testString.Append(", World!") << endl;

	if (logFile.is_open())
	{
		if (testString.Append(", World!") == "Hello, World!")
		{
			logFile << "Test 3 Append Successful" << endl;
		}
		else
		{
			logFile << "Test 3 Append Failed" << endl;
		}
		logFile.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void stringPrependTest()
{
	//cout << "String Prepended: " << testString.Prepend("Hello ") << endl;

	if (logFile.is_open())
	{
		if (testString.Prepend("Hello ") == "Hello Hello, World!")
		{
			logFile << "Test 4 Prepend Successful" << endl;
		}
		else
		{
			logFile << "Test 4 Prepend Failed" << endl;
		}
		logFile.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void stringToLowerTest()
{
	//cout << "All lowercase: " << testString.ToLower() << endl;

	if (logFile.is_open())
	{
		if (testString.ToLower() == "hello hello, world!")
		{
			logFile << "Test 5 ToLower Successful" << endl;
		}
		else
		{
			logFile << "Test 5 ToLower Failed" << endl;
		}
		logFile.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void stringToUpperTest()
{
	//cout << "All uppercase: " << testString.ToUpper() << endl;

	if (logFile.is_open())
	{
		if (testString.ToUpper() == "HELLO HELLO, WORLD!")
		{
			logFile << "Test 6 ToUpper Successful" << endl;
		}
		else
		{
			logFile << "Test 6 ToUpper Failed" << endl;
		}
		logFile.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void stringFindTest()
{
	//cout << "Find WORLD: " << testString.Find("WORLD") << endl;

	if (logFile.is_open())
	{
		if (testString.Find("WORLD") == 13)
		{
			logFile << "Test 7 Find Successful" << endl;
		}
		else
		{
			logFile << "Test 7 Find Failed" << endl;
		}
		logFile.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void stringAdvancedFindTest()
{
	//cout << "Advanced Find WORLD at 13: " << testString.Find(13, "WORLD") << endl;

	if (logFile.is_open())
	{
		if (testString.Find(13,"WORLD") == 13)
		{
			logFile << "Test 8 Advanced Find Successful" << endl;
		}
		else
		{
			logFile << "Test 8 Advanced Find Failed" << endl;
		}
		logFile.close();
	}
	else
	{
		cout << "Error" << endl;
	}
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