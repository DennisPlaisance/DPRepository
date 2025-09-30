#include <iostream>
#include <fstream>
#include <string>
#include "ItemClass.h"
#include "UtilClass.h"
#include "RoomClass.h"
#include "ActionClass.h"

using namespace std;

action::action()
{
	name = "Placeholder";
	damage = 0;
}

action::action(string actionName, int damageAmount)
{
	name = actionName;
	damage = damageAmount;
}

int action::cast()
{
	return damage;
}