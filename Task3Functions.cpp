#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"
#include "Task3Functions.h"

using namespace std;

string strToBeTested3 = "Hello";
stringUtil testString3 = strToBeTested3;

// Task 3 Functions - Each function is made to check whether each utility class function works, prints the result into a text file, then gives a total.

int stringLengthTestFunc3(int passed)
{
	if (testString3.Length() == 5)
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 0 Length Successful" << endl;
		}
		
		return passed += 1;
	}
	else
	{
		ofstream logFile("test_results.txt", ios::app);
		
		if (logFile.is_open())
		{
			logFile << "Test 0 Length Failed" << endl;
		}
		
		return passed;
	}
}

int stringCharacterAtTestFunc3(int passed)
{
	if (testString3.CharacterAt(0) == 'H')
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 1 CharacterAt Successful" << endl;
		}

		return passed += 1;
	}
	else
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 1 CharacterAt Failed" << endl;
		}
		
		return passed;
	}
}

int stringEqualToTestFunc3(int passed)
{
	if (testString3.EqualTo("Hello") == 1)
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 2 EqualTo Successful" << endl;
		}
		
		return passed += 1;
	}
	else
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 2 EqualTo Failed" << endl;
		}
		
		return passed;
	}
}

int stringAppendTestFunc3(int passed)
{
	if (testString3.Append(", World!") == "Hello, World!")
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 3 Append Successful" << endl;
		}
		
		return passed += 1;
	}
	else
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 3 Append Failed" << endl;
		}
		
		return passed;
	}
}

int stringPrependTestFunc3(int passed)
{
	if (testString3.Prepend("Hello ") == "Hello Hello, World!")
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 4 Prepend Successful" << endl;
		}
		
		return passed += 1;
	}
	else
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 4 Prepend Failed" << endl;
		}
		
		return passed;
	}
}

int stringToLowerTestFunc3(int passed)
{
	if (testString3.ToLower() == "hello hello, world!")
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 5 ToLower Successful" << endl;
		}
		
		return passed += 1;
	}
	else
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 5 ToLower Failed" << endl;
		}
		
		return passed;
	}
}

int stringToUpperTestFunc3(int passed)
{
	if (testString3.ToUpper() == "HELLO HELLO, WORLD!")
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 6 ToUpper Successful" << endl;
		}
		
		return passed += 1;
	}
	else
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 6 ToUpper Failed" << endl;
		}
		
		return passed;
	}
}

int stringFindTestFunc3(int passed)
{
	if (testString3.Find("WORLD") == 13)
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 7 Find Successful" << endl;
		}
		
		return passed += 1;
	}
	else
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 7 Find Failed" << endl;
		}
		
		return passed;
	}
}

int stringAdvancedFindTestFunc3(int passed)
{
	if (testString3.Find(13, "WORLD!") == 13)
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 8 Advanced Find Successful" << endl;
		}
		
		return passed += 1;
	}
	else
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 8 Advanced Find Failed" << endl;
		}
		
		return passed;
	}
}

int stringReplaceTestFunc3(int passed)
{
	if (testString3.Replace("HELLO", "") == " , WORLD!")
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 9 Replace Successful" << endl;
		}
		
		return passed += 1;
	}
	else
	{
		ofstream logFile("test_results.txt", ios::app);

		if (logFile.is_open())
		{
			logFile << "Test 9 Replace Failed" << endl;
		}
		
		return passed;
	}
}

int stringWriteToConsoleTestFunc3(int passed)
{
	ofstream logFile("test_results.txt", ios::app);

	if (logFile.is_open())
	{
		logFile << "Test 10 WriteToConsole Successful" << endl;
	}
	
	testString3.WriteToConsole();
	return passed += 1;
}

int stringReadFromConsoleTestFunc3(int passed)
{
	ofstream logFile("test_results.txt", ios::app);

	if (logFile.is_open())
	{
		logFile << "Test 11 ReadFromConsole Successful" << endl;
	}
	
	testString3.ReadFromConsole();
	return passed += 1;
}

void logTestResults(int passed, int total)
{
	float successRate = (float)passed / total * 100;

	ofstream logFile("test_results.txt", ios::app);

	if (logFile.is_open())
	{
		logFile << "Tests Passed: " << passed << "/" << total << endl;
		logFile << "Success Rate: " << successRate << "%" << endl;
		logFile << "" << endl;
		logFile.close();
	}
	else
	{
		cout << "ERROR" << endl;
	}
}