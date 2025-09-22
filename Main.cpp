#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"

using namespace std;

int main()
{
	string randomString = "Hello";
	stringUtil randomUtil = randomString;
	cout << randomUtil.Find(1, "ello") << endl;
}