#include <iostream>
#include <fstream>
#include <string>
#include "UtilClass.h"
#ifndef GAME_H
#define GAME_H

using namespace std;
#pragma once

class Game
{
protected:
	room rooms[5];
	string message;
	int currentRoom = 0;

public:
	void gameStart();
	void gameHelp();

	void roomCheck();
	void moveNorth();
	void moveSouth();
	void moveEast();
	void moveWest();
};

#endif