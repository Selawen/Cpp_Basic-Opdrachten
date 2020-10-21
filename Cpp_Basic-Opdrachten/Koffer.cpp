#include "Koffer.h"

Koffer::Koffer() {
	sokken = new Sokken("Groen");
}

Koffer::~Koffer() {
	delete sokken;
}

Koffer::Koffer(std::string kleur) {
	this->kofferKleur = kleur;
	sokken = new Sokken("groen");
}

Koffer::Koffer(const Koffer& puffelensKoffer) {
	if (this == &puffelensKoffer) return;
	kofferKleur = puffelensKoffer.kofferKleur;
}

Koffer& Koffer::operator=(const Koffer& puffenlensKoffer) {
	if (this == &puffenlensKoffer) return *this;
	this->kofferKleur = puffenlensKoffer.kofferKleur;
	return *this;
}

