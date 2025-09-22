#include <string>
#include <iostream>
#include <fstream>
#include "Functions.h"
using namespace std;

enum trafficLights
{
	RED,
	YELLOW,
	GREEN,
};

void insideLoop()
{
	bool staying = true;

	do
	{
		cout << "You are currently inside a do while loop. Would you like to leave it?" << endl;
		cout << "0 to Leave, 1 to Stay." << endl;
		cin >> staying;
		if (staying)
		{
			cout << "You have chosen to stay inside of the do while loop." << endl;
		}
	} while (staying);

	cout << "You are no longer inside of the do while loop." << endl;
}

void countdown(int start)
{
	while (start > 1)
	{
		start--;
		cout << start << endl;
	}

	cout << "Blast off!" << endl;
}

void inputValidator()
{
	bool isPositive = false;
	int numInput;

	while (!isPositive)
	{
		cout << "Input a positive number." << endl;
		cin >> numInput;

		if (numInput > 0)
		{
			isPositive = true;
			cout << "Thank you!" << endl;
		}
		else if (numInput == 0)
		{
			cout << "No, that's zero. Try again." << endl;
		}
		else
		{
			cout << "No, that's negative. Try again." << endl;
		}
	}
}

int bigSum()
{
	int addingNum = 1;

	for (int turn = 1;turn <= 100;turn++)
	{
		addingNum = addingNum + turn;
	}
	return addingNum;
}

void multiplyTable(int numberMultiplied)
{
	for (int turn = 1;turn <= 12;turn++)
	{
		int displayNum = numberMultiplied * turn;
		cout << numberMultiplied << " * " << turn << " = " << displayNum << endl;
	}
}

void printNumbers(int incrementalNumber)
{
	for (int turn = incrementalNumber;turn <= incrementalNumber * 10;turn += incrementalNumber)
	{
		cout << turn << endl;
	}
}

void trafficLightChecker(trafficLights lightColor)
{
	switch (lightColor)
	{
	case RED:
		cout << "Stop." << endl;
		break;
	case YELLOW:
		cout << "Slow down." << endl;
		break;
	case GREEN:
		cout << "Go." << endl;
		break;
	default:
		cout << "Do something." << endl;
		break;
	}
}

void arraySetter()
{
	const int maxSize = 4;
	int arr[maxSize] = { 5,10,15,20 };
	cout << arr[1] << endl;
	cout << maxSize << endl;
}

void arrayLoop()
{
	int arr[3] = { 7,14,21 };

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << endl;
	}
}

void constExercise()
{
	const int PLAYER_LIVES = 3;
	const string GAME_TITLE = "My Game.";

	cout << PLAYER_LIVES << endl;
	cout << GAME_TITLE << endl;
}

void plrName()
{
	string playerName = "Hero";
	cout << playerName << endl;
	cout << playerName.length() << endl;
	cout << playerName[0] << endl;
}

void stringPrinter(string strInput)
{
	cout << strInput << endl;
}

int getStringLength(string strInput)
{
	return strInput.length();
}

bool stringComparison(string strInput1, string strInput2)
{
	bool comparison = strInput1 == strInput2;

	if (comparison == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string stringToLowercase(string strInput)
{
	for (int i = 0; i < strInput.length(); i++)
	{
		if (strInput[i] >= 'A' && strInput[i] <= 'Z')
		{
			strInput[i] = strInput[i] + 32;
		}
	}
	return strInput;
}

string stringToUppercase(string strInput)
{
	for (int i = 0; i < strInput.length(); i++)
	{
		if (strInput[i] >= 'a' && strInput[i] <= 'z')
		{
			strInput[i] = strInput[i] - 32;
		}
	}
	return strInput;
}

void gameConfiguration(const string PLAYER_NAME)
{
	const int MAX_PLAYERS = 4;
	const string GAME_NAME = "Adventure";
	const string VERSION = "1.0";

	cout << "Welcome, " << PLAYER_NAME << ", to " << GAME_NAME << ", Version " << VERSION << "." << endl;
	cout << "Max players is: " << MAX_PLAYERS << endl;
}

void commandParser()
{
	string plrCommand;

	cout << "Enter a command (type 'quit' to exit): " << endl;
	getline(cin, plrCommand);

	cout << "Command Length: " << plrCommand.length() << endl;
	string lowerCommand = stringToLowercase(plrCommand);

	if (lowerCommand == "quit")
	{
		cout << "Quitting the game..." << endl;
	}
	else
	{
		cout << "Command Ran." << endl;
	}
}

void pointerExercise1()
{
	int someNumber = 42;
	int* somePtr = &someNumber;

	cout << someNumber << endl;
	cout << *somePtr << endl;
}

void pointerExercise2()
{
	int maxHealth = 150;
	int health = 100;

	int* healthPtr = &health;

	cout << *healthPtr << endl;
	healthPtr = &maxHealth;
	cout << *healthPtr << endl;

	cout << health << endl;
	cout << maxHealth << endl;
}

void pointerExercise3(int* ptr)
{
	if (ptr == nullptr)
	{
		cout << "Pointer is null." << endl;
	}
	else
	{
		cout << *ptr << endl;
	}
}

void referenceExercise1()
{
	int randomInt = 25;
	int& randomRef = randomInt;

	randomRef = 50;
	cout << randomInt << endl;
}

void doubleValue(int& numInput)
{
	int newNum = numInput * 2;
	cout << "New Number: " << newNum << endl;
}

void printValue(const int& numInput)
{
	cout << numInput << endl;
}

void writeToFile()
{
	ofstream logFile("game_events.txt");
	if (logFile.is_open())
	{
		logFile << "Game started!" << endl;
		logFile << "Enemy defeated!" << endl;
		logFile << "Game ended!" << endl;
		logFile.close();

		cout << "File written successfully!" << endl;
	}
	else
	{
		cout << "Error: Could not create file!" << endl;
	}
}

void highscoreFile()
{
	ofstream logfile("highscore.txt");
	if (logfile.is_open())
	{
		int highscore = 413;

		logfile << highscore << endl;
		logfile.close();

		cout << "File written." << endl;
	}
	else
	{
		cout << "Error.";
	}
}

void readHighscoreFile()
{
	ifstream dataFile("highscore.txt");
	if (dataFile.is_open())
	{
		int highscore;
		dataFile >> highscore;
		cout << "Highscore is: " << highscore << endl;
		dataFile.close();
	}
	else
	{
		cout << "No save file found." << endl;
	}
}

void logEvent(string newEvent)
{
	ofstream logFile("game_events.txt", ios::app);
	if (logFile.is_open())
	{
		logFile << newEvent << endl;
		logFile.close();

		cout << "New event updated." << endl;
	}
	else
	{
		cout << "ERROR." << endl;
	}
}

void weaponSelection()
{
	string selection[4] = { "Nock Volley Gun", "Musket", "Carbine", "Pistol" };
	int weaponChoice;

	cout << "Selection a weapon by typing 0-3." << endl;
	cin >> weaponChoice;

	try
	{
		if (weaponChoice > 3 || weaponChoice < 0 || cin.fail())
		{
			throw runtime_error("Invalid Input.");
		}
		else
		{
			cout << selection[weaponChoice] << " selected." << endl;
		}
	}
	catch (runtime_error& e)
	{
		cout << "ERROR." << endl;
	}
}

void calcMenu()
{
	cout << "Welcome to Calculator. Please select an operator: " << endl;
	cout << "0 - Addition" << endl;
	cout << "1 - Subtraction" << endl;
	cout << "2 - Multiplication" << endl;
	cout << "3 - Division" << endl;
	cout << "4 - Exit" << endl;
}