#include <iostream>
#include <fstream>
#include <string>
#ifndef ACTIONCLASS_H
#define ACTIONCLASS_H

using namespace std;
#pragma once

class action
{
protected:
	string name;
	int damage;

public:
	action();
	action(string actionName, int damageAmount);

	virtual void cast();
};

#endif