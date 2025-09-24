#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"
#include "Task2Functions.h"
#include "Task3Functions.h"

using namespace std;

void task1()
{
	string testString = "ELL";
	stringUtil randomStringUtil(testString);
	
	randomStringUtil.ToLower();
	randomStringUtil.Prepend("H");
	randomStringUtil.Append("o, World!");
	randomStringUtil.WriteToConsole();
}

void task2()
{
	stringLengthTestFunc2();
	stringCharacterAtTestFunc2();
	stringEqualToTestFunc2();
	stringAppendTestFunc2();
	stringPrependTestFunc2();
	stringToLowerTestFunc2();
	stringToUpperTestFunc2();
	stringFindTestFunc2();
	stringAdvancedFindTestFunc2();
	stringReplaceTestFunc2();
	stringWriteToConsoleTestFunc2();
	stringReadFromConsoleTestFunc2();
}

void task3()
{
	int total = 12;
	int passed = 0;
	
	passed = stringLengthTestFunc3(passed);
	passed = stringCharacterAtTestFunc3(passed);
	passed = stringEqualToTestFunc3(passed);
	passed = stringAppendTestFunc3(passed);
	passed = stringPrependTestFunc3(passed);
	passed = stringToLowerTestFunc3(passed);
	passed = stringToUpperTestFunc3(passed);
	passed = stringFindTestFunc3(passed);
	passed = stringAdvancedFindTestFunc3(passed);
	passed = stringReplaceTestFunc3(passed);
	passed = stringWriteToConsoleTestFunc3(passed);
	passed = stringReadFromConsoleTestFunc3(passed);
	logTestResults(passed, total);
}

int main() // Each function is for a separate assessment task. Task 2 and 3 require input to finish working (because of the ReadFromConsole function)
{
	task1();
}