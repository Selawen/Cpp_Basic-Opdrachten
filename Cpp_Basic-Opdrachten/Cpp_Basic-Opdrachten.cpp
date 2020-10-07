// Cpp_Basic-Opdrachten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Opdracht2.h"
#include "Opdracht3.h"
#include "Opdracht4.h"
#include "Opdracht5.h"

void MainMenu();

int main()
{
	MainMenu();
}

void MainMenu() {
	Opdracht2 opdracht2;
	Opdracht3 opdracht3;
	Opdracht4 opdracht4;
	Opdracht5 opdracht5;
	int x;

	system("CLS");
    std::cout << "Please give the number of the assignment you want to view\n";
	std::cin >> x;
	

	switch (x) {
	case 1 :
		std::cout << "Look at code Opdracht1.h\n";
		std::cin.ignore(INT_MAX, '\n');
		std::cin.get();
		MainMenu();
		break;
	case 2 :
		system("CLS");
		opdracht2.SimonSays();
		break;
	case 3 :
		system("CLS");
		opdracht3.start();
		break;
	case 4 :
		system("CLS");
		opdracht4.startAutomaat();
		break;	
	case 5 :
		system("CLS");
		opdracht5.start();
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
