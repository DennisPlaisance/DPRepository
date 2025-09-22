#include <iostream>
#include <fstream>
#include <string>
#ifndef UTILCLASS_H
#define UTILCLASS_H

using namespace std;
#pragma once

class stringUtil
{
private:
	string mainStrInput;
public:
	stringUtil();
	stringUtil(string strInput);
	int Length();
	//char CharacterAt();
	bool EqualTo(string strInput);
	string Append(string strInput);
	string Prepend(string strInput);
	//char CStr();
	string ToLower();
	string ToUpper();
	int Find(string findString);
	int Find(int startIndex, string findString);
	/*void Replace(string findString, string replaceString);*/
};

#endif