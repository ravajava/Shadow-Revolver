#include <iostream>
#include "Menus.h"
using namespace std;

Menus * newMenu = new Menus();

int main()
{
	newMenu->displayMainMenu();
	return 0;
}