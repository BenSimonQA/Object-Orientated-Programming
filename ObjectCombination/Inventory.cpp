//W1634216 BenjaminSimon
#include "Inventory.h"
#include <iostream>
#include <string>

using namespace std;

//Starting amount of each item
int new1 = 5;
int new2 = 2;
int new3 = 3;
int new4 = 4;
int new5 = 2;

Inventory::Inventory()
{

}


void Inventory::displayItems()
{
	//This is the Look function

	//All items that are available
	inventory[0] = "Sticks";
	inventory[1] = "Coals";
	inventory[2] = "Rocks";
	inventory[3] = "Bowls";
	inventory[4] = "Mushrooms";

	//All starting amount
	amount[0] = new1;
	amount[1] = new2;
	amount[2] = new3;
	amount[3] = new4;
	amount[4] = new5;

	//This loop will display all current available items with their amounts
	cout << "On the table you have ";
	for (int i = 0; i<5; i ++) 
	{
		if (i == 4) 
		{
			cout << amount[i] << " " << inventory[i] << ".";
		}
		else
		{
			cout << amount[i] << " " << inventory[i] << ", ";
		}
	}
	cout << "" << endl;
}

void Inventory::reduce(int num)
{
	//This function will take the item the player wants and reduce the amount

	//Reduces Stick
	if(num == 0)
	{
		if(new1 == 0)
		{
			cout << "You have no more left." << endl;
		}
		else
		{
			new1--;
		}
	}
	//Reduces Coal
	else if (num == 1)
	{
		if (new2 == 0)
		{
			cout << "You have no more left." << endl;
		}
		else
		{
			new2--;
		}
	}
	//Reduces Rock
	else if (num == 2)
	{
		if (new3 == 0)
		{
			cout << "You have no more left." << endl;
		}
		else
		{
			new3--;
		}
	}
	//Reduces Bowl
	else if (num == 3)
	{
		if (new4 == 0)
		{
			cout << "You have no more left." << endl;
		}
		else
		{
			new4--;
		}
	}
	//Reduces Mushroom
	else if (num == 4)
	{
		if (new5 == 0)
		{
			cout << "You have no more left." << endl;
		}
		else
		{
			new5--;
		}
	}

}

void Inventory::adding(int num) 
{
	//This function will add the items back if dropped.

	//Adds stick
	if (num == 0)
	{
		new1++;
	}
	//Adds coal
	else if (num == 1)
	{
		new2++;
	}
	//Adds rock
	else if (num == 2)
	{
		new3++;
	}
	//Adds bowl
	else if (num == 3)
	{
		new4++;
	}
	//Adds mushroom
	else if (num == 4)
	{
		new5++;
	}
}



