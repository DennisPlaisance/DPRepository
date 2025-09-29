#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"
#include "ItemClass.h"
#include "RoomClass.h"
#include "PlayerClass.h"
#include "Task2Functions.h"
#include "Task3Functions.h"

using namespace std;

//void task1()
//{
//	string testString = "ELL";
//	stringUtil randomStringUtil(testString);
//	
//	randomStringUtil.ToLower();
//	randomStringUtil.Prepend("H");
//	randomStringUtil.Append("o, World!");
//	randomStringUtil.WriteToConsole();
//}
//
//void task2()
//{
//	stringLengthTestFunc2();
//	stringCharacterAtTestFunc2();
//	stringEqualToTestFunc2();
//	stringAppendTestFunc2();
//	stringPrependTestFunc2();
//	stringToLowerTestFunc2();
//	stringToUpperTestFunc2();
//	stringFindTestFunc2();
//	stringAdvancedFindTestFunc2();
//	stringReplaceTestFunc2();
//	stringWriteToConsoleTestFunc2();
//	stringReadFromConsoleTestFunc2();
//}
//
//void task3()
//{
//	int total = 12;
//	int passed = 0;
//	
//	passed = stringLengthTestFunc3(passed);
//	passed = stringCharacterAtTestFunc3(passed);
//	passed = stringEqualToTestFunc3(passed);
//	passed = stringAppendTestFunc3(passed);
//	passed = stringPrependTestFunc3(passed);
//	passed = stringToLowerTestFunc3(passed);
//	passed = stringToUpperTestFunc3(passed);
//	passed = stringFindTestFunc3(passed);
//	passed = stringAdvancedFindTestFunc3(passed);
//	passed = stringReplaceTestFunc3(passed);
//	passed = stringWriteToConsoleTestFunc3(passed);
//	passed = stringReadFromConsoleTestFunc3(passed);
//	logTestResults(passed, total);
//}

void gameStart();
void gameHelp();

int main()
{
	string command;
	stringUtil commandString(command);

	gameStart();
	commandString.ReadFromConsole();

	if (commandString.ToLower() == "help")
	{
		gameHelp();
	}
}

void gameStart()
{
	cout << "Task 4 Assessment" << endl;
	cout << "==================================================" << endl;
	cout << "The Bunker is unsafe. Take caution." << endl;
	cout << "What will you do first? Type 'help' for a list of commands." << endl;
	cout << "==================================================" << endl;
}

void gameHelp()
{
	cout << "Placeholder Help." << endl;
}