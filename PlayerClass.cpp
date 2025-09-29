#include <iostream>
#include <fstream>
#include <string>
#include "ItemClass.h"
#include "UtilClass.h"
#include "RoomClass.h"
#include "PlayerClass.h"
#include "ActionClass.h"

using namespace std;

player::player()
{
	health = 100;
}

player::player(int playerHealth)
{
	health = playerHealth;
}

int player::getHealth()
{
	return health;
}