#include "Caravan.h"

Caravan::Caravan(){
}

Caravan::~Caravan(){
	delete koffer;
}

Caravan::Caravan(std::string kleur){
	this->caravanKleur = kleur;
}

Caravan::Caravan(const Caravan& puffelensCaravan){
	if (this == &puffelensCaravan) return;
	caravanKleur = puffelensCaravan.caravanKleur;
	koffer = new Koffer(puffelensCaravan.koffer->kofferKleur);
}

Caravan& Caravan::operator=(const Caravan& puffelensCaravan) {
	if (this == &puffelensCaravan) return *this;
	caravanKleur = puffelensCaravan.caravanKleur;
	koffer = new Koffer(puffelensCaravan.koffer->kofferKleur);
	return *this;
}

void Caravan::addKoffer() {
	koffer = new Koffer("rood");
	toonInhoud();
}

void Caravan::toonInhoud() {
	std::cout << "caravan kleur: " << caravanKleur << "\nkoffer kleur: " << koffer->kofferKleur << "\nsokken Kleur: " << koffer->sokken->sokKleur << "\n" << std::endl;
}