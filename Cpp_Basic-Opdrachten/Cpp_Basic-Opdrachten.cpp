// Cpp_Basic-Opdrachten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Opdracht2.h"

void MainMenu();

int main()
{
	MainMenu();
}

void MainMenu() {
	Opdracht2 opdracht2;
	int x;

	system("CLS");
    std::cout << "Please give the number of the assignment you want to view\n";
	std::cin >> x;
	

	switch (x) {
	case 1 :
		std::cout << "Look at code at Opdracht1.h\n";
		std::cin.ignore(INT_MAX, '\n');
		std::cin.get();
		MainMenu();
		break;
	case 2 :
		system("CLS");
		opdracht2.SimonSays();
		break;
	default :
		std::cout << "Please enter a valid number\n";
		std::cin.ignore(INT_MAX, '\n');
		std::cin.get();
		MainMenu();
		break;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
