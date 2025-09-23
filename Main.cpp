#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"
#include "Functions.h"

using namespace std;

void runAll()
{
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