#include <iostream>
#include <fstream>
#include <string>
#ifndef ENEMYCLASS_H
#define ENEMYCLASS_H

using namespace std;
#pragma once

class enemy
{
protected:
	string name;
	string description;
	int health;
	int dmg;

public:
	enemy();
	enemy(string enemyName, string enemyDescription, int enemyHealth, int dmgDealing);

	string getName();
	string getDescription();

	int getHealth();
	int getDamage();

	void takeDamage(int dmgAmount);
};

#endif