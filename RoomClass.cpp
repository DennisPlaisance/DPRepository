#include <iostream>
#include <fstream>
#include <string>
#include "ItemClass.h"
#include "UtilClass.h"
#include "RoomClass.h"

using namespace std;

room::room()
{
	roomName = "Placeholder";
	roomDescription = "Nothing in here.";
	item placeholderItem;
	roomItem = placeholderItem;
}

room::room(string nameRoom, string describeRoom, item itemForRoom)
{
	roomName = nameRoom;
	roomDescription = describeRoom;
	roomItem = itemForRoom;
}

void room::describeRoom()
{
	stringUtil descriptionNeeded = roomDescription;
	descriptionNeeded.WriteToConsole();
}