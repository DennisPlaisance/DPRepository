#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"
#include "Functions.h"

using namespace std;

void runAll()
{
	int total = 13;
	int passed = 0;
	
	stringLengthTest();
	stringCharacterAtTest();
	stringEqualToTest();
	stringAppendTest();
	stringPrependTest();
	stringToLowerTest();
	stringToUpperTest();
	stringFindTest();
	stringAdvancedFindTest();
	stringReplaceTest();
	stringWriteToConsoleTest();
	stringReadFromConsoleTest();
	stringWriteToConsoleTest();
}

int main()
{
	runAll();
}