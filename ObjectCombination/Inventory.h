//W1634216 BenjaminSimon
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Inventory
{
public:

	string inventory[5];
	int amount[5];

	Inventory();

	void displayItems();

	void reduce(int num);

	void adding(int num);

};

