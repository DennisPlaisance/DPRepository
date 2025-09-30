#include <iostream>
#include <fstream>
#include <string>
#ifndef PLAYERCLASS_H
#define PLAYERCLASS_H

using namespace std;
#pragma once

class player
{
protected:
	int health;

public:
	player();
	player(int playerHealth);

	int getHealth();
	void takeDamage(int dmgAmount);
	void heal(int healAmount);
};

#endif