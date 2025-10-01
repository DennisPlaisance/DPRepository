#include <iostream>
#include <fstream>
#include <string>
#include "ItemClass.h"
#include "UtilClass.h"
#include "RoomClass.h"
#include "PlayerClass.h"
#include "ActionClass.h"
#include "EnemyClass.h"

using namespace std;

enemy::enemy()
{
	name = "Placeholder";
	health = 100;
	dmg = 5;
}

enemy::enemy(string enemyName, string enemyDescription, int enemyHealth, int dmgDealing)
{
	name = enemyName;
	description = enemyDescription;
	health = enemyHealth;
	dmg = dmgDealing;
}

string enemy::getName()
{
	return name;
}

string enemy::getDescription()
{
	return description;
}

int enemy::getHealth()
{
	return health;
}

int enemy::getDamage()
{
	return dmg;
}

void enemy::takeDamage(int dmgAmount)
{
	health -= dmgAmount;
}