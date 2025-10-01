#include <iostream>
#include <fstream>
#include <string>
#ifndef ITEMCLASS_H
#define ITEMCLASS_H

using namespace std;
#pragma once

class item
{
protected:
	string itemName;
	string itemDescription;
	string usageText;

public:
	item();
	item(string nameUsed, string descUsed, string usageUsed);

	virtual void describeItem();
	virtual void useItem();
	virtual string getDescription();
	virtual string getName();
	virtual string getUseText();
};

class food : public item
{
public:
	food();
	food(string namedUsed, string descUsed, string usageUsed);

	void describeItem() override;
	void useItem() override;
	string getDescription() override;
	string getName() override;
};

#endif