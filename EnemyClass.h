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
	int health;
	int dmg;

public:
	enemy();
	enemy(string enemyName, int enemyHealth, int dmgDealing);

	int getHealth();
	int getDamage();

	void takeDamage(int dmgAmount);
};

#endif