#pragma once
#include <iostream>
#include "Caravan.h"

void MainMenu();

class Opdracht6
{
public:
	void start();
	void opVakantie();
	void steelOpties();
	void steelCaravan();
	void cleanUp();
private:
	int x;
	Caravan* caravan = nullptr;
	Caravan* gestolenCaravan = nullptr;
};

