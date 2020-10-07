#include "Opdracht5.h"

void Opdracht5::start() {
	Bibliotheek* bieb = new Bibliotheek;
	Boek* boek = new Boek;

	bieb->leverIn(boek);
	boek = NULL;
	biebOpties();
}

void Opdracht5::biebOpties() {
	std::cout << "1 om een boek te lenen\n2 om een boek terug te brengen\n0 om terug te gaan\n";
	std::cin >> x;

	switch (x) {
	case 1:
		if (bieb->booksAvailable()) {
			boek = bieb->leenUit();
		}
		break;
	case 2:
		if (bieb->leverIn(boek)) {
			boek = NULL;
		}
		break;
	case 0:
		deleteHeap();
		MainMenu();
		break;
	default:
		std::cout << "\nPlease enter a valid number\n\n";
		break;
	}

	biebOpties();
}

bool Bibliotheek::booksAvailable() {
	if (boeken[0] != nullptr) {
		return true;
	}
	else {
		std::cout << "Geen boeken beschikbaar, lever eerst een boek in\n";
		return false;
	}
}

Boek* Bibliotheek::leenUit() {
		std::cout << "Boek uitgeleend\n";
		return boeken[0];
}

bool Bibliotheek::leverIn(Boek* _boek) {
	if (_boek != nullptr) {
		boeken[0] = _boek;
		std::cout << "Boek ingeleverd\n";
		return true;
	}
	else {
		std::cout << "Nog geen boek geleend, leen het boek eerst\n";
		return false;
	}
}

void Opdracht5::deleteHeap() {
	delete bieb;
	delete boek;
}