#include <iostream>
#include <fstream>
#include <string>
#ifndef ROOMCLASS_H
#define ROOMCLASS_H

using namespace std;
#pragma once

class room
{
protected:
	string roomName;
	string roomDescription;
	item roomItem;

public:
	room();
	room(string nameRoom, string describeRoom, item itemForRoom);

	virtual void describeRoom();
	virtual void describeItem();
	virtual item getItem();
};

#endif