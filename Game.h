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
	int currentRoom = 1;
	bool itemUsed[5];
	player newPlayer;

public:
	void gameStart();
	void gameHelp();

	void roomCheck();
	void moveNorth();
	void moveSouth();
	void moveEast();
	void moveWest();

	void actions();

	void use();
};

#endif