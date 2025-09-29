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
	usageText = itemName + " Did nothing.";
}

item::item(string nameUsed, string descUsed, string usageUsed)
{
	itemName = nameUsed;
	itemDescription = descUsed;
	usageText = itemName + " " + usageUsed;
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

void CenterArtifact::describeItem()
{
	string customDesc = "An artifact that vaguely looks like a vase.";
	stringUtil descriptionNeeded = customDesc;
	descriptionNeeded.WriteToConsole();
}

void CenterArtifact::useItem()
{
	string customUse = "This item cannot be used!";
	stringUtil descriptionNeeded = customUse;
	descriptionNeeded.WriteToConsole();
}