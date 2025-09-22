#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"

using namespace std;

stringUtil::stringUtil() // Default Constructor (No Parameters)
{
	mainStrInput = "default";
}

stringUtil::stringUtil(string strInput) // Recommended Constructor
{
	mainStrInput = strInput;
}

int stringUtil::Length() // Returns an integer representing the count of characters up to the null termination character
{
	return mainStrInput.length();
}

char stringUtil::CharacterAt(int index) // Returns a char representing the character at the location. If index is less than 0 or greater than length, return '\0'
{
	if (index < 0 || index > mainStrInput.length())
	{
		return '\0';
	}
	else
	{
		return mainStrInput[index];
	}
}

bool stringUtil::EqualTo(string strInput) // Returns true if str contains the same characters
{
	bool comparison = (mainStrInput == strInput);

	if (comparison)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string stringUtil::Append(string strInput) // Adds str to the end of the string
{
	return mainStrInput.append(strInput);
}

string stringUtil::Prepend(string strInput) // Adds str to the beginning of the string
{
	string combination = (strInput + mainStrInput);
	mainStrInput = combination;

	return combination;
}

string stringUtil::ToLower() // Convert all characters to lowercase
{
	for (int i = 0; i < mainStrInput.length(); i++)
	{
		if (mainStrInput[i] >= 'A' && mainStrInput[i] <= 'Z')
		{
			mainStrInput[i] = mainStrInput[i] + 32;
		}
	}
	return mainStrInput;
}

string stringUtil::ToUpper() // Convert all characters to uppercase
{
	for (int i = 0; i < mainStrInput.length(); i++)
	{
		if (mainStrInput[i] >= 'a' && mainStrInput[i] <= 'z')
		{
			mainStrInput[i] = mainStrInput[i] - 32;
		}
	}
	return mainStrInput;
}

int stringUtil::Find(string findString) // Returns the location of the findString. If not found, return -1
{
	if (mainStrInput.find(findString))
	{
		return mainStrInput.find(findString);
	}
	else
	{
		return -1;
	}
}

int stringUtil::Find(int startIndex, string findString) // Returns the location of the findString. Beginning the search from startIndex. If not found, return -1
{
	if (mainStrInput.find(findString, startIndex))
	{
		return mainStrInput.find(findString, startIndex);
	}
	else
	{
		return -1;
	}
}

void stringUtil::Replace(string findString, string replaceString) // Replaces all occurrences of findString with replaceString
{
	int stringPos = mainStrInput.find(findString);
	while (stringPos != mainStrInput.npos)
	{
		mainStrInput.replace(stringPos, findString.length(), replaceString);
		stringPos = mainStrInput.find(findString, stringPos + replaceString.length());
	}
}

void stringUtil::ReadFromConsole() // Wait for input in the console window and store the result
{
	cin >> mainStrInput;
}

void stringUtil::WriteToConsole() // Writes the string to the console window
{
	cout << mainStrInput << endl;
}