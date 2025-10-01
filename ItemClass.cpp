#include <iostream>
#include <fstream>
#include <string>
#include "ItemClass.h"
#include "UtilClass.h"

using namespace std;

item::item()
{
	itemName = "Placeholder";
	itemDescription = "Does nothing.";
	usageText = "Did nothing.";
}

item::item(string nameUsed, string descUsed, string usageUsed)
{
	itemName = nameUsed;
	itemDescription = descUsed;
	usageText = usageUsed;
}

void item::describeItem()
{
	stringUtil descriptionNeeded = itemDescription;
	descriptionNeeded.WriteToConsole();
}

void item::useItem()
{
	stringUtil shownUsage = usageText;
	shownUsage.WriteToConsole();
}

string item::getDescription()
{
	return itemDescription;
}

string item::getName()
{
	return itemName;
}

string item::getUseText() // This one is specifically for debugging the center rooms item.
{
	return usageText;
}

food::food()
{
	itemName = "Placeholder";
	itemDescription = "Does nothing.";
	usageText = "Did nothing.";
}

food::food(string nameUsed, string descUsed, string usageUsed)
{
	itemName = nameUsed;
	itemDescription = descUsed;
	usageText = usageUsed;
}

void food::describeItem()
{
	stringUtil descriptionNeeded = itemDescription;
	descriptionNeeded.WriteToConsole();
}

void food::useItem()
{
	stringUtil shownUsage = usageText;
	shownUsage.WriteToConsole();
}

string food::getDescription()
{
	return itemDescription;
}

string food::getName()
{
	return itemName;
}