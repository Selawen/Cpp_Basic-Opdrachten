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

	void SimonSays();

private:
	void LevelEnd();
};

