#include <iostream>
#include <fstream>
#include <string>
#include "ItemClass.h"
#include "UtilClass.h"
#include "RoomClass.h"
#include "PlayerClass.h"
#include "EnemyClass.h"
#include "ActionClass.h"
#include "Game.h"

using namespace std;

void Game::gameStart() // Main game loop. While the player is still alive, certain commands can be typed in.
{
	stringUtil commandString(message);
	action knife("Knife", 15);
	action shovel("Shovel", 35);
	action revolver("Revolver", 25);
	for (int i = 0; i < 5; i++)
	{
		itemUsed[i] = false;
	}
	
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
		else if (commandString.ToLower() == "actions")
		{
			actions();
		}
		else if (commandString.ToLower() == "use")
		{
			use();
		}
		else if (commandString.ToLower() == "health")
		{
			showHealth();
		}
		else
		{
			cout << "Not a valid command. Try again." << endl;
		}
	}
	cout << "You have perished. Game Over." << endl;
}

void Game::gameHelp() // Lists commands the player can type. These cannot be used in an attack.
{
	cout << "use - If a room has an item, this will use it." << endl;
	cout << "health - Shows your current health." << endl;
	cout << "north - Move North." << endl;
	cout << "south - Move South." << endl;
	cout << "east - Move East." << endl;
	cout << "west - Move West." << endl;
	cout << "help - Brings up this list of commands." << endl;
}

void Game::roomCheck() // Checks what the current room is and prints its respective descriptions.
{
	if (currentRoom == 1)
	{
		item gramophone("Gramophone", "An old device used to play music.", "You interacted with the device.");
		rooms[0] = room("Center Room", "The center starting room.", gramophone);

		rooms[0].describeRoom();
		rooms[0].describeItem();
	}
	else if (currentRoom == 2)
	{
		food hardbiscuit("Hard Biscuit", "A biscuit that could break your teeth.", "You ate the biscuit. Thankfully, your teeth aren't broken.");
		rooms[1] = room("Sleeping Quarters", "The soldiers rest here.", hardbiscuit);

		rooms[1].describeRoom();
		if (not itemUsed[1])
		{
			rooms[1].describeItem();
		}
		if (not enemyAttacking && not enemyDead)
		{
			cout << "" << endl;
			cout << "An enemy appears." << endl;
			cout << "Remember your options of attack: " << endl;
			actions();
			enemyAttack();
		}
	}
	else if (currentRoom == 3)
	{
		item lantern("Lantern", "A rusty old lantern.", "You interacted with the lantern.");
		rooms[2] = room("Observation Post", "Rain pours through the pillbox opening.", lantern);

		rooms[2].describeRoom();
		rooms[2].describeItem();
	}
	else if (currentRoom == 4)
	{
		food cornedbeef("Corned Beef", "A soldiers ration.", "You ate the ration. Not very filling.");
		rooms[3] = room("Sunken Mess", "The mess hall has collapsed.", cornedbeef);

		rooms[3].describeRoom();
		if (not itemUsed[3])
		{
			rooms[3].describeItem();
		}
	}
	else if (currentRoom == 5)
	{
		item whistle("Officer's Whistle", "Screams a sound you'd rather forget.", "You refuse to create such an obnoxious noise.");
		rooms[4] = room("Officer's Quarter", "A small room for planning.", whistle);

		rooms[4].describeRoom();
		rooms[4].describeItem();
	}
	else
	{
		string noclipMessage = "You shouldn't be reading this.";
		stringUtil yesclipMessage(noclipMessage);

		yesclipMessage.WriteToConsole();
	}
}

void Game::moveNorth()
{
	if (currentRoom == 1)
	{
		currentRoom = 2;
		cout << "" << endl;
		cout << "Moved North." << endl;
		roomCheck();
	}
	else if (currentRoom == 3)
	{
		currentRoom = 1;
		cout << "" << endl;
		cout << "Moved North." << endl;
		roomCheck();
	}
	else
	{
		cout << "Can't move North!" << endl;
	}
}

void Game::moveSouth()
{
	if (currentRoom == 1)
	{
		currentRoom = 3;
		cout << "" << endl;
		cout << "Moved South." << endl;
		roomCheck();
	}
	else if (currentRoom == 2)
	{
		currentRoom = 1;
		cout << "" << endl;
		cout << "Moved South." << endl;
		roomCheck();
	}
	else
	{
		cout << "Can't move South!" << endl;
	}
}

void Game::moveEast()
{
	if (currentRoom == 1)
	{
		currentRoom = 4;
		cout << "" << endl;
		cout << "Moved East." << endl;
		roomCheck();
	}
	else if (currentRoom == 5)
	{
		currentRoom = 1;
		cout << "" << endl;
		cout << "Moved East." << endl;
		roomCheck();
	}
	else
	{
		cout << "Can't move East!" << endl;
	}
}

void Game::moveWest()
{
	if (currentRoom == 1)
	{
		currentRoom = 5;
		cout << "" << endl;
		cout << "Moved West." << endl;
		roomCheck();
	}
	else if (currentRoom == 4)
	{
		currentRoom = 1;
		cout << "" << endl;
		cout << "Moved West." << endl;
		roomCheck();
	}
	else
	{
		cout << "Can't move West!" << endl;
	}
}

void Game::actions() // Lists the actions a player can take in an attack.
{
	cout << "" << endl;
	cout << "revolver - Revolver Gun" << endl;
	cout << "shovel - Shovel Melee" << endl;
	cout << "knife - Knife Melee" << endl;
}

void Game::showHealth()
{
	cout << "Your current health is: " << newPlayer.getHealth() << endl;
}

void Game::use() // There are two item types, items and foods. Items are usually toggleable, whiles foods are consumable, and are destroyed upon use.
{
	string useMessage;
	
	if (currentRoom == 1) // Toggleable
	{
		if (not itemUsed[0])
		{
			item roomItm = rooms[0].getItem();
			roomItm.useItem();
			itemUsed[0] = true;
			useMessage = "The gramophone plays a scratchy tune.";
			stringUtil useOutput(useMessage);
			useOutput.WriteToConsole();
		}
		else
		{
			item roomItm = rooms[0].getItem();
			roomItm.useItem();
			itemUsed[0] = false;
			useMessage = "The gramophone stops playing.";
			stringUtil useOutput(useMessage);
			useOutput.WriteToConsole();
		}
	}
	else if (currentRoom == 2) // Consumable
	{
		if (not itemUsed[1])
		{
			int healAmount = 5;
			item roomItm = rooms[1].getItem();
			roomItm.useItem();
			if (newPlayer.getHealth() < 100)
			{
				if ((newPlayer.getHealth() + healAmount) > 100)
				{
					int healthToBeAdded = (newPlayer.getHealth() + healAmount) - 100;
					newPlayer.heal(healthToBeAdded);
				}
				else
				{
					newPlayer.heal(healAmount);
				}
				cout << "Your health is now: " << newPlayer.getHealth() << endl;
			}
			itemUsed[1] = true;
		}
		else
		{
			useMessage = "Nothing to use here.";
			stringUtil useOutput(useMessage);
			useOutput.WriteToConsole();
		}
	}
	else if (currentRoom == 3) // Toggleable
	{
		if (not itemUsed[2])
		{
			item roomItm = rooms[2].getItem();
			roomItm.useItem();
			itemUsed[2] = true;
			useMessage = "The lantern burns brightly.";
			stringUtil useOutput(useMessage);
			useOutput.WriteToConsole();
		}
		else
		{
			item roomItm = rooms[2].getItem();
			roomItm.useItem();
			itemUsed[2] = false;
			useMessage = "The flame is put out.";
			stringUtil useOutput(useMessage);
			useOutput.WriteToConsole();
		}
	}
	else if (currentRoom == 4) // Consumable
	{
		if (not itemUsed[3])
		{
			int healAmount = 10;
			item roomItm = rooms[3].getItem();
			roomItm.useItem();
			if (newPlayer.getHealth() < 100)
			{
				if ((newPlayer.getHealth() + healAmount) > 100)
				{
					int healthToBeAdded = (newPlayer.getHealth() + healAmount) - 100;
					newPlayer.heal(healthToBeAdded);
				}
				else
				{
					newPlayer.heal(healAmount);
				}
				cout << "Your health is now: " << newPlayer.getHealth() << endl;
			}
			itemUsed[3] = true;
		}
		else
		{
			useMessage = "Nothing to use here.";
			stringUtil useOutput(useMessage);
			useOutput.WriteToConsole();
		}
	}
	else if (currentRoom == 5) // This one is weird. The player will refuse it irregardless.
	{
		if (not itemUsed[4])
		{
			item roomItm = rooms[4].getItem();
			roomItm.useItem();
		}
		else
		{
			string errorMessage = "ERROR";
			stringUtil errorUtil(errorMessage);

			errorUtil.WriteToConsole();
		}
	}
	else // in case it weren't obvious, this should never happen... I hope... O_O
	{
		string wut = "WHAT IS HAPPENING";
		stringUtil wat(wut);

		wat.WriteToConsole();
	}
}

void Game::enemyAttack() // Plays out an attack. Players get the first turn, and from then on the enemy will attack second. When you die, you lose the game.
{
	action knife("Knife", 15);
	action shovel("Shovel", 35);
	action revolver("Revolver", 25);
	
	enemy screamer("Screamer", 80, 5);

	enemyAttacking = true;

	cout << "" << endl;
	cout << "You currently have " << newPlayer.getHealth() << " health." << endl;
	cout << "The enemy currently has " << screamer.getHealth() << " health." << endl;

	while (enemyAttacking && not gameOver)
	{
		stringUtil attackString(attackMessage);
		attackString.ReadFromConsole();

		if (attackString.ToLower() == "revolver")
		{
			screamer.takeDamage(revolver.cast());
			cout << "You fire off your revolver." << endl;
		}
		else if (attackString.ToLower() == "knife")
		{
			screamer.takeDamage(knife.cast());
			cout << "You swing your knife." << endl;
		}
		else if (attackString.ToLower() == "shovel")
		{
			screamer.takeDamage(shovel.cast());
			cout << "You swing your shovel." << endl;
		}
		else
		{
			cout << "This cannot be done in an attack." << endl;
		}

		if (screamer.getHealth() > 0)
		{
			cout << "" << endl;
			cout << "The enemy's health has been dropped to " << screamer.getHealth() << "." << endl;

			newPlayer.takeDamage(screamer.getDamage());
			cout << "The enemy attacks, dropping your health to " << newPlayer.getHealth() << "." << endl;
		}
		else
		{
			cout << "The enemy has been defeated. It will no longer bother you." << endl;
			cout << "" << endl;
			enemyAttacking = false;
			enemyDead = true;
		}

		if (newPlayer.getHealth() <= 0)
		{
			gameOver = true;
		}
	}
}