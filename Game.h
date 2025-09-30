#include <iostream>
#include <fstream>
#include <string>
#include "ItemClass.h"
#include "UtilClass.h"
#include "RoomClass.h"
#include "PlayerClass.h"
#include "ActionClass.h"
#ifndef GAME_H
#define GAME_H

using namespace std;
#pragma once

class Game
{
protected:
	room rooms[5];
	string message; // Will be used for taking input.
	string attackMessage; // Used for battle input.
	int currentRoom = 1;
	bool itemUsed[5];
	player newPlayer;
	// Typically I don't use global bools for such niche things, however there is only one enemy so I will make an exception here. Don't fix what isn't broken.
	bool enemyAttacking = false;
	bool enemyDead = false;
	bool gameOver = false;

public:
	void gameStart();
	void gameHelp();

	void roomCheck();
	void moveNorth();
	void moveSouth();
	void moveEast();
	void moveWest();

	void showHealth();

	void actions();

	void use();

	void enemyAttack();
};

#endif