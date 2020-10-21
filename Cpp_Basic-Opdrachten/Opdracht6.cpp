#include "Opdracht6.h"

void Opdracht6::start() {
	std::cout << "1 om op vakantie te gaan\n0 om terug te gaan\n";
	std::cin >> x;

	switch (x) {
	case 1:
		opVakantie();
		break;
	case 0:
		cleanUp();
		MainMenu();
		break;
	default:
		std::cout << "\nPlease enter a valid number\n\n";
		break;
	}
	start();
}

void Opdracht6::opVakantie() {
	caravan = new Caravan("blauw");
	caravan->addKoffer();
	steelOpties();
}

void Opdracht6::steelOpties() {
	std::cout << "1 om de caravan te stelen\n0 om terug te gaan\n";
	std::cin >> x;

	switch (x) {
	case 1:
		steelCaravan();
		break;
	case 0:
		cleanUp();
		MainMenu();
		break;
	default:
		std::cout << "\nPlease enter a valid number\n\n";
		break;
	}
	steelOpties();
}

void Opdracht6::steelCaravan() {
	gestolenCaravan = caravan;
	gestolenCaravan->toonInhoud();
	start();
}
void Opdracht6::cleanUp() {
	if (&caravan != nullptr) delete caravan;
	if (&gestolenCaravan != nullptr) delete gestolenCaravan;
}