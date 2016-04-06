#include "Menus.h"
#include <iostream>

using namespace std;

Menus::Menus()
{
}


Menus::~Menus()
{
}

void Menus::displayMainMenu()
{
	int choice = 0;
	do
	{
		cout << "[1] Create Faction" << endl;
		cout << "[2] Display Faction" << endl;
		cout << "[3] Modify Faction" << endl;
		cout << "[4] Delete Faction" << endl;
		cout << "[5] Quit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			//createLobbyData(newLobby);
			break;
		case 2:
			//displayLobby(newLobby);
			break;
		case 3:
			//clearLobby(newLobby);
			break;
		case 4:
			//sortLobby(newLobby);
			break;
		case 5:
			//deleteMatch(newLobby);
			break;
		case 6:
			break;
		default:
			cout << "Not a valid selection." << endl;
			break;
		}
	} while (choice != 6);
}
