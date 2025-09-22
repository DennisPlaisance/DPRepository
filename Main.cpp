#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"

using namespace std;

void runAll()
{
	string strToBeTested = "Hello";
	stringUtil testString = strToBeTested;

	cout << "String Length: " << testString.Length() << endl;
	cout << "Character At Index 0: " << testString.CharacterAt(0) << endl;
	cout << "Are two strings equal? Hello and Hello: " << testString.EqualTo("Hello") << endl;
	cout << "String Appended: " << testString.Append(", World!") << endl;
	cout << "String Prepended: " << testString.Prepend("Hello ") << endl;
	cout << "All lowercase: " << testString.ToLower() << endl;
	cout << "All uppercase: " << testString.ToUpper() << endl;
	cout << "Find WORLD: " << testString.Find("WORLD") << endl;
	cout << "Advanced Find WORLD at 13: " << testString.Find(13, "WORLD") << endl;
	cout << "Replace all instances of HELLO with nothing. (Is void, will still run though.)" << endl;
	testString.Replace("HELLO", "");
	cout << "Print to console: ";
	testString.WriteToConsole();
	cout << "Read from console: ";
	testString.ReadFromConsole();
	cout << "Print to console again: ";
	testString.WriteToConsole();
}

int main()
{
	runAll();
}