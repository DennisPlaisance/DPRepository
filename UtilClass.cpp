#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"

using namespace std;

stringUtil::stringUtil()
{
	mainStrInput = "default";
}

stringUtil::stringUtil(string strInput)
{
	mainStrInput = strInput;
}

int stringUtil::Length()
{
	return mainStrInput.length();
}

/*char stringUtil::CharacterAt()
{

}*/

bool stringUtil::EqualTo(string strInput)
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

string stringUtil::Append(string strInput)
{
	return mainStrInput.append(strInput);
}

string stringUtil::Prepend(string strInput)
{
	string combination = (strInput + mainStrInput);

	return combination;
}

/*char stringUtil::CStr()
{

}*/

string stringUtil::ToLower()
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

string stringUtil::ToUpper()
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

int stringUtil::Find(string findString)
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

int stringUtil::Find(int startIndex, string findString)
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

//void stringUtil::Replace(string findString, string replaceString)
//{
//	for (int i = 0; i < mainStrInput.length(); i++)
//	{
//		if (mainStrInput.find(findString))
//		{
//			findString.replace(replaceString);
//		}
//	}
//}