//W1634216 BenjaminSimon
#include "Main.h"
#include <iostream>
#include <string>
#include <fstream>

#include "Inventory.h"
#include "Hands.h"

using namespace std; 
string userInput = "";

void Start()
{
	//Display line by line the main text that has all starting information

	int lineNum = 0;
	std::string line_;
	ifstream file_("StartText.txt");
	if (file_.is_open())
	{
		while (getline(file_, line_) && lineNum != 23)
		{

			cout << line_ << '\n';
			++lineNum;
		}
		file_.close();
	}
	else
	{
		std::cout << "FILE NOT FOUND." << '\n';
	}
}

int main() 
{
	//Loads start function
	Start();

	//Allows user input
	cin >> userInput;

	//Loop of user input. Will terminate if user types Quit
	while (userInput!="Quit")
	{

		//Look input will display all available items on table
		if (userInput == "Look") 
		{
			void callList();
			{
				Inventory list;
				list.displayItems();
				cin >> userInput;
			}
		}

		//Take input will tell you what items will you want to take from table once taken which hand
		else if (userInput == "Take") 
		{
			cout << "Which item will you like to take?" << endl;
			cin >> userInput;
			Hands pickUp;
			pickUp.takeItem(userInput);
			cin >> userInput;
		}

		//Combine imput will combine the items you are holding if possible
		else if (userInput == "Combine") 
		{
			Hands combination;
			combination.Combine();
			cin >> userInput;
		}

		//Drop input will drop and return the item
		else if (userInput == "Drop") 
		{
			Hands dropping;
			dropping.Drop();
			cin >> userInput;
		}

		//Any input the player puts that is not listed will be invalid input
		else 
		{
			cout << "Invalid input try again." << endl;
			cin >> userInput;
		}
	}

	//Once player quits will display a message including final score
	Hands final;
	final.Final();
	std::system("PAUSE");
	return 0;
}