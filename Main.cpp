#include <iostream>
#include "Functions.h"
using namespace std;

//struct GameCharacter
//{
//	string name;
//	int health;
//	int level;
//};
//
//class BankAccount
//{
//private:
//	int balance = 0;
//	int accountNumber;
//
//public:
//	int deposit(int depositAmount)
//	{
//		return balance += depositAmount;
//	}
//
//	int getBalance()
//	{
//		return balance;
//	}
//
//	int setAccountNumber(int newAccNumber)
//	{
//		return accountNumber == newAccNumber;
//	}
//
//};
//
//struct Address
//{
//	string street;
//	string city;
//	int zipCode;
//};
//
//struct Player
//{
//	string name;
//	Address homeAddress;
//	int score;
//};
//
//class Student
//{
//private:
//	string name;
//	int id;
//	float gpa;
//
//public:
//	Student()
//	{
//		name = "Unknown";
//		id = 0;
//		gpa = 0.0;
//	}
//
//	Student(string studentName, int studentID)
//	{
//		name = studentName;
//		id = studentID;
//		gpa = 0.0;
//	}
//
//	void displayStudentInfo()
//	{
//		cout << "Student Name: " << name << endl;
//		cout << "Student ID: " << id << endl;
//		cout << "Student GPA: " << gpa << endl;
//	}
//};
//
//class Weapon
//{
//private:
//	string name;
//	int damage;
//	int durability;
//
//public:
//	void PrintWeaponStats()
//	{
//		cout << "Weapon Name: " << name << endl;
//		cout << "Weapon Damage: " << damage << endl;
//		cout << "Weapon Durability: " << durability << endl;
//		cout << "" << endl;
//	}
//	
//	Weapon()
//	{
//		name = "Weapon";
//		damage = 0;
//		durability = 0;
//	}
//
//	Weapon(string nameInput)
//	{
//		name = nameInput;
//		damage = 0;
//		durability = 0;
//	}
//
//	Weapon(string nameInput, int damageInput, int durabilityInput)
//	{
//		name = nameInput;
//		damage = damageInput;
//		durability = durabilityInput;
//	}
//};
//
//class Item
//{
//protected:
//	string name;
//
//public:
//	Item()
//	{
//		cout << "Item constructor called" << endl;
//		name = "Unknown item";
//	}
//
//	Item(string itemName)
//	{
//		cout << "Item constructor with name called" << endl;
//		name = itemName;
//	}
//};
//
//class Sword : public Item
//{
//public:
//	Sword()
//	{
//		cout << "Sword constructor called" << endl;
//	}
//
//	Sword(string swordName)
//	{
//		cout << "Sword with name called" << endl;
//	}
//};
//
//class Animal
//{
//protected:
//	string name;
//	int age;
//
//public:
//	Animal()
//	{
//		name = "Animal";
//		age = 0;
//	}
//
//	Animal(string animalName, int animalAge)
//	{
//		name = animalName;
//		age = animalAge;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	Dog()
//	{
//		name = "Animal";
//		age = 0;
//	}
//
//	Dog(string dogName, int dogAge)
//	{
//		name = dogName;
//		age = dogAge;
//	}
//
//	void displayInfo()
//	{
//		cout << "Dog Name: " << name << endl;
//		cout << "Dog Age: " << age << endl;
//	}
//
//	void bark()
//	{
//		cout << "woof" << endl;
//	}
//};
//
//class Vehicle
//{
//protected:
//	int speed;
//	string color;
//
//public:
//	Vehicle()
//	{
//		speed = 0;
//		color = "White";
//	}
//
//	Vehicle(int speedInput, string colorInput)
//	{
//		speed = speedInput;
//		color = colorInput;
//	}
//};
//
//class Car : public Vehicle
//{
//public:
//	Car()
//	{
//		speed = 0;
//		color = "White";
//	}
//
//	Car(int speedInput, string colorInput)
//	{
//		speed = speedInput;
//		color = colorInput;
//	}
//
//	void displayInfo()
//	{
//		cout << "Vehicle Speed: " << speed << endl;
//		cout << "Vehicle Color: " << color << endl;
//	}
//
//	void honk()
//	{
//		cout << "honk" << endl;
//	}
//};
//
//class GameCharacter
//{
//protected:
//	int health;
//	string name;
//
//public:
//	GameCharacter()
//	{
//		health = 100;
//		name = "Hero";
//	}
//
//	GameCharacter(int healthInput, string nameInput)
//	{
//		health = healthInput;
//		name = nameInput;
//	}
//};
//
//class Warrior : public GameCharacter
//{
//private:
//	string weapon;
//public:
//
//	Warrior()
//	{
//		health = 100;
//		name = "Hero";
//		weapon = "Small Dagger";
//	}
//
//	Warrior(int healthInput, string nameInput, string weaponInput)
//	{
//		health = healthInput;
//		name = nameInput;
//		weapon = weaponInput;
//	}
//
//	void displayInfo()
//	{
//		cout << "Character Name: " << name << endl;
//		cout << "Character Health: " << health << endl;
//		cout << "Character Weapon: " << weapon << endl;
//	}
//};
//
//class Animal2
//{
//protected:
//	int health;
//public:
//	virtual void makeNoise()
//	{
//		cout << "SOME ANIMAL NOISE" << endl;
//		health -= 30;
//	}
//};
//
//class Dog2 : public Animal2
//{
//public:
//	void makeNoise() override
//	{
//		cout << "woof" << endl;
//		health += 15;
//	}
//};
//
//class Shape
//{
//public:
//	virtual void draw()
//	{
//		cout << "Drawing a shape." << endl;
//	}
//};
//
//class Circle : public Shape
//{
//public:
//	void draw() override
//	{
//		cout << "Drawing a circle." << endl;
//	}
//};

class Item
{
public:
	virtual void use()
	{
		cout << "Item used." << endl;
	}
};

class Sword : public Item
{
public:
	void use() override
	{
		cout << "You swung a sword!" << endl;
	}
};

int main()
{
	Item newItem;
	Sword newSword;
	newItem.use();
	newSword.use();
}