#pragma once
#include <iostream>
#include <string>

void MainMenu();

class Munt {
public:
	int getValue();
protected:
	int value;
};

class FiftyCent : public Munt {
public:
	FiftyCent();
	int getValue();
};

class OneEuro : public Munt {
public:
	OneEuro();
	int getValue();
};

class KoffieMuntje : public Munt {
public:
	KoffieMuntje();
	int getValue();
};

class Koffie {
public:
	int price;
	std::string name;
	Koffie(int _price, std::string _name);
	Koffie();
};

class Opdracht4 {
public:
	void startAutomaat();

private: 
	int x;
	int worthInsertedCoin;
	int amountInserted;
	Koffie espresso;
	Koffie cappuchino;
	Koffie doppio;
	
	void koffieAutomaat();
	void makeKoffie();
	void getCoin();
	int coinWorth(Munt coin);
	void getKoffie();
};

