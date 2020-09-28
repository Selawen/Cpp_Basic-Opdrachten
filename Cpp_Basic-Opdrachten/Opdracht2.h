#pragma once
#include <iostream>
#include <queue> 
#include <string>
#include <stdlib.h>

void MainMenu();

class Opdracht2
{
public:
	std::queue<int> numbers;
	int numberAmount = 3;
	int input;
	char inputChar;
	bool succeeded;

	void SimonSays() 
	{
		std::cout << "Simon Says: \n";
		//generate and print number sequence
		for (int i = 0; i < numberAmount; i++) {
			int number = rand() % 10;
			numbers.push(number);
			std::cout << std::to_string(number) + " ";
		}	
		std::cout << "\npress enter to continue...\n";
		std::cin.ignore(INT_MAX, '\n');
		std::cin.get();
		system("CLS");

		std::cout << "\ngive numbers one by one \n";
		succeeded = true;
		while (!numbers.empty()) {
			std::cin >> input;
			if (input != numbers.front()) {
				numbers.empty();
				succeeded = false;
				break;
			}
			else {
				numbers.pop();
			}
		}
		LevelEnd();
	}

	void LevelEnd() {
		if (succeeded) {
			std::cout << "You got it! \n 0 to go back to main menu\n 1 to continue\n";
			std::cin >> input;
			if (input == 1) {
				numberAmount++;
				system("CLS");
				SimonSays();
			}
			else if (input == 0){
				MainMenu();
			}
			else {
				std::cout << "invalid input, please try again\n";
				LevelEnd();
			}
		}
		else {
			std::cout << "too bad, wrong number \n0 to go back to main menu \n1 to try again\n";
			std::cin >> input;
			if (input == 1) {
				numberAmount = 3;
				while (!numbers.empty()) {
					numbers.pop();
				}
				system("CLS");
				SimonSays();
			}
			else if (input == 0){
				MainMenu();
			}
			else {
				std::cout << "invalid input, please try again\n";
				LevelEnd();
			}
		}
	}
};

