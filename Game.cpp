#include <iostream>
#include <fstream>
#include <string>
#include "ItemClass.h"
#include "UtilClass.h"
#include "RoomClass.h"
#include "PlayerClass.h"
#include "ActionClass.h"
#include "Game.h"

using namespace std;

void Game::gameStart()
{
	stringUtil commandString(message);
	player newPlayer(100);
	rooms[1] = room("Starting Room", "The Center Room.",)
	
	cout << "Task 4 Assessment" << endl;
	cout << "==================================================" << endl;
	cout << "The Bunker is unsafe. Take caution." << endl;
	cout << "What will you do first? Type 'help' for a list of commands." << endl;
	cout << "==================================================" << endl;

	while (newPlayer.getHealth() > 0)
	{
		commandString.ReadFromConsole();

		if (commandString.ToLower() == "help")
		{
			gameHelp();
		}
		else if (commandString.ToLower() == "north")
		{
			moveNorth();
		}
		else if (commandString.ToLower() == "south")
		{
			moveSouth();
		}
		else if (commandString.ToLower() == "east")
		{
			moveEast();
		}
		else if (commandString.ToLower() == "west")
		{
			moveWest();
		}
	}
}

void Game::gameHelp()
{
	cout << "north - Move North." << endl;
	cout << "south - Move South." << endl;
	cout << "east - Move East." << endl;
	cout << "west - Move West." << endl;
	cout << "help - Brings up this list of commands." << endl;
}

void Game::roomCheck()
{
	if (currentRoom == 0)
	{

	}
}

void Game::moveNorth()
{
	if (currentRoom == 0)
	{
		currentRoom = 1;
		cout << "Moved North." << endl;
	}
	else if (currentRoom == 2)
	{
		currentRoom = 0;
		cout << "Moved North." << endl;
	}
	else
	{
		cout << "Can't move North!" << endl;
	}
}

void Game::moveSouth()
{
	if (currentRoom == 0)
	{
		currentRoom = 2;
		cout << "Moved South." << endl;
	}
	else if (currentRoom == 1)
	{
		currentRoom = 0;
		cout << "Moved South." << endl;
	}
	else
	{
		cout << "Can't move South!" << endl;
	}
}

void Game::moveEast()
{
	if (currentRoom == 0)
	{
		currentRoom = 3;
		cout << "Moved East." << endl;
	}
	else if (currentRoom == 4)
	{
		currentRoom = 0;
		cout << "Moved East." << endl;
	}
	else
	{
		cout << "Can't move East!" << endl;
	}
}

void Game::moveWest()
{
	if (currentRoom == 0)
	{
		currentRoom = 4;
		cout << "Moved West." << endl;
	}
	else if (currentRoom == 3)
	{
		currentRoom = 0;
		cout << "Moved West." << endl;
	}
	else
	{
		cout << "Can't move West!" << endl;
	}
}