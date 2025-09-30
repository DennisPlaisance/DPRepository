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
	stringUtil nameNeeded("'" + roomName + "'");
	stringUtil descriptionNeeded(roomDescription);
	nameNeeded.WriteToConsole();
	descriptionNeeded.WriteToConsole();
}

void room::describeItem()
{
	stringUtil nameNeeded("'" + roomItem.getName() + "'");
	stringUtil descriptionNeeded(roomItem.getDescription());
	nameNeeded.WriteToConsole();
	descriptionNeeded.WriteToConsole();
}

item room::getItem()
{
	return roomItem;
}