//W1634216 BenjaminSimon
#include "Hands.h"
#include "Inventory.h"
#include <string>


string type = "";
string leftHand = "";
string rightHand = "";
bool leftHold = false;
bool rightHold = false;
bool torchComp = false;
bool spearComp = false;
bool mushComp = false;
bool waterComp = false;
int total = 0;



Hands::Hands()
{

}


void Hands::takeItem(string item)
{
	//This function will take the item the user chooses and places it on the left or right hand

	if (item == "Stick" || item == "Coal" || item == "Rock" || item == "Bowl" || item == "Mushroom")
	{
		//Allows user decision
			cout << "Which hand left or right?" << endl;
			cin >> type;

			//Places item on left hand
			if (type == "Left") 
			{
				//If hand is full it will not take item
				if (leftHold == true)
				{
					cout << "Left hand is full." << endl;
				}
				else 
				{
					//Will add the item and reduce amount
					leftHand = item;
					cout << "You are holding a " << item << " on the left hand." << endl;
					leftHold = true;
					if (item == "Stick")
					{
						Inventory reduce;
						reduce.reduce(0);
					}
					else if (item == "Coal")
					{
						Inventory reduce;
						reduce.reduce(1);
					}
					else if (item == "Rock")
					{
						Inventory reduce;
						reduce.reduce(2);
					}
					else if (item == "Bowl")
					{
						Inventory reduce;
						reduce.reduce(3);
					}
					else if (item == "Mushroom")
					{
						Inventory reduce;
						reduce.reduce(4);
					}
				}
			}
			//If user decides to place item on the right
			else if(type == "Right")
			{
				//If hand is full it will not take item
				if (rightHold == true)
				{
					cout << "Right hand is full." << endl;
				}
				else
				{
					//Will add the item and reduce amount
					rightHand = item;
					cout << "You are holding a " << item << " on the right hand." << endl;
					rightHold = true;
					if (item == "Stick")
					{
						Inventory reduce;
						reduce.reduce(0);
					}
					else if (item == "Coal")
					{
						Inventory reduce;
						reduce.reduce(1);
					}
					else if (item == "Rock")
					{
						Inventory reduce;
						reduce.reduce(2);
					}
					else if (item == "Bowl")
					{
						Inventory reduce;
						reduce.reduce(3);
					}
					else if (item == "Mushroom")
					{
						Inventory reduce;
						reduce.reduce(4);
					}
				}

			}
			else 
			{
				cout << "Wrong input." << endl;
			}
	}
}

void Hands::Combine() 
{
	//This function will combine the items the user is holding.
	//If valid input it will make a new item.
	//If its a new item that the player hasnt made it will grant a point.

	if(leftHand=="Stick" && rightHand == "Coal")
	{
		leftHand = "";
		rightHand = "";
		leftHold = false;
		rightHold = false;
		cout << "You made a torch!" << endl;
		if (torchComp == false)
		{
			torchComp = true;
			cout << "You gained a point!" << endl;
			total++;
			cout << "You have " << total << " points!" << endl;
		}
	}
	else if (rightHand == "Stick" && leftHand == "Coal")
	{
		leftHand = "";
		rightHand = "";
		leftHold = false;
		rightHold = false;
		cout << "You made a torch!" << endl;
		if (torchComp == false)
		{
			torchComp = true;
			cout << "You gained a point!" << endl;
			total++;
			cout << "You have " << total << " points!" << endl;
		}
	}
	else if (leftHand == "Stick" && rightHand == "Rock")
	{
		leftHand = "";
		rightHand = "";
		leftHold = false;
		rightHold = false;
		cout << "You made a spear!" << endl;
		if (spearComp == false)
		{
			spearComp = true;
			cout << "You gained a point!" << endl;
			total++;
			cout << "You have " << total << " points!" << endl;
		}
	}
	else if (rightHand == "Stick" && leftHand == "Rock")
	{
		leftHand = "";
		rightHand = "";
		leftHold = false;
		rightHold = false;
		cout << "You made a spear!" << endl;
		if (spearComp == false)
		{
			spearComp = true;
			cout << "You gained a point!" << endl;
			total++;
			cout << "You have " << total << " points!" << endl;
		}
	}
	else if (leftHand == "Mushroom" && rightHand == "Bowl")
	{
		leftHand = "";
		rightHand = "";
		leftHold = false;
		rightHold = false;
		cout << "You made a mushroom soup!" << endl;
		if (mushComp == false)
		{
			mushComp = true;
			cout << "You gained a point!" << endl;
			total++;
			cout << "You have " << total << " points!" << endl;
		}
	}
	else if (rightHand == "Mushroom" && leftHand == "Bowl")
	{
		leftHand = "";
		rightHand = "";
		leftHold = false;
		rightHold = false;
		cout << "You made a mushroom soup!" << endl;
		if (mushComp == false)
		{
			mushComp = true;
			cout << "You gained a point!" << endl;
			total++;
			cout << "You have " << total << " points!" << endl;
		}
	}
	else
	{
		cout << "No combination." << endl;
	}

}

void Hands::Drop()
{
	//Function that drops item on the hand that is choosen

	Inventory add;
	string dropInput;
	//Allows user decision
	cout << "Which hand you want to empty?" << endl;
	cin >> dropInput;
	//Will drop item on left hand
	if (dropInput == "Left") 
	{
		//Will display if no item on hand
		if (leftHand == "") 
		{
			cout << "Nothing already." << endl;
		}
		else
		{
			//Will return item back to the table
			string currentItem = leftHand;
			if(currentItem == "Stick")
			{
				add.adding(0);
			}
			else if (currentItem == "Coal")
			{
				add.adding(1);
			}
			else if (currentItem == "Rock")
			{
				add.adding(2);
			}
			else if (currentItem == "Bowl")
			{
				add.adding(3);
			}
			else if (currentItem == "Mushroom")
			{
				add.adding(4);
			}
			leftHold = false;
			leftHand = "";
			cout << "Left hand has been emptied." << endl;
		}
	}
	//Will drop the item on the right hand
	if (dropInput == "Right")
	{
		if(rightHand == "")
		{
			//Will display if no item on hand
			cout << "Nothing already." << endl;
		}
		else
		{
			//Will return item back to the table
			string currentItem = rightHand;
			if (currentItem == "Stick")
			{
				add.adding(0);
			}
			else if (currentItem == "Coal")
			{
				add.adding(1);
			}
			else if (currentItem == "Rock")
			{
				add.adding(2);
			}
			else if (currentItem == "Bowl")
			{
				add.adding(3);
			}
			else if (currentItem == "Mushroom")
			{
				add.adding(4);
			}
			rightHold = false;
			rightHand = "";
			cout << "Right hand has been emptied." << endl;
		}
	}
}

void Hands::Final()
{
	//Displays final message if quit
	cout << "Final Score is " << total << "!" << endl;
	cout << "Well done!" << endl;
}