#include "Opdracht4.h"

void Opdracht4::startAutomaat() {
	amountInserted = 0;
	makeKoffie();
	koffieAutomaat();
}

void Opdracht4::koffieAutomaat(){
	getCoin();
	getKoffie();
}

void Opdracht4::makeKoffie() {
	espresso = Koffie(1, "espresso");
	cappuchino = Koffie(2, "cappuchino");
	doppio = Koffie(3, "doppio");
}

void Opdracht4::getCoin() {
	FiftyCent fiftyCent = FiftyCent();
	OneEuro oneEuro = OneEuro();
	KoffieMuntje koffieMuntje = KoffieMuntje();

	std::cout << "Please insert coin\n1 for 50 cent\n2 for 1 euro\n3 for a 'koffiemuntje'\n0 to go back\n";
	std::cin >> x;
	
	switch (x) {
	case 1:
		std::cout << "50 cent given";
		worthInsertedCoin = coinWorth(fiftyCent);
		std::cin.ignore(INT_MAX, '\n');
		std::cin.get();
		break;
	case 2:
		std::cout << "1 euro given";
		worthInsertedCoin = coinWorth(oneEuro);
		std::cin.ignore(INT_MAX, '\n');
		std::cin.get();
		break;
	case 3:
		std::cout << "Koffiemuntje given";
		worthInsertedCoin = coinWorth(koffieMuntje);
		std::cin.ignore(INT_MAX, '\n');
		std::cin.get();
		break;
	case 0:
		amountInserted = 0;
		MainMenu();
		break;
	default:
		std::cout << "\nPlease enter a valid number\n\n";
		koffieAutomaat();
		break;
	}
	amountInserted += worthInsertedCoin;
}

int Opdracht4::coinWorth(Munt coin) {
	return coin.getValue();
}

void Opdracht4::getKoffie() {
	std::cout << "you can get: ";
	if (amountInserted >= espresso.price) std::cout << espresso.name;
	if (amountInserted >= cappuchino.price) std::cout << ", " << cappuchino.name;
	if (amountInserted >= doppio.price) std::cout << ", " << doppio.name;

	std::cout << "\n1 to add another coin \n0 to go back";
	std::cin >> x;
	switch (x) {
	case 1:
		koffieAutomaat();
		break;
	case 0:
		amountInserted = 0;
		MainMenu();
		break;
	default:
		std::cout << "Please enter a valid number\n";
		std::cin.ignore(INT_MAX, '\n');
		std::cin.get();
		getKoffie();
		break;
	}
}

int Munt::getValue() 
{
	return value;
}

int FiftyCent::getValue() 
{
	return value;
}

int OneEuro::getValue() 
{
	return value;
}

int KoffieMuntje::getValue() 
{
	return value;
}

FiftyCent::FiftyCent() {
	value = 1;
}

OneEuro::OneEuro() {
	value = 2;
}

KoffieMuntje::KoffieMuntje() {
	value = 3;
}

Koffie::Koffie(int _price, std::string _name) : price(_price), name(_name) {
}

Koffie::Koffie(){}