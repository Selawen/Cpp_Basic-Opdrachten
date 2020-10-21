#include "Sokken.h"

Sokken::Sokken() {

}

Sokken::~Sokken() {

}

Sokken::Sokken(std::string kleur) {
	this->sokKleur = kleur;
}

Sokken::Sokken(const Sokken& puffelensSokken) {
	if (this == &puffelensSokken) return;
	sokKleur = puffelensSokken.sokKleur;
}

Sokken& Sokken::operator=(const Sokken& puffenlensSokken) {
	if (this == &puffenlensSokken) return *this;
	this->sokKleur = puffenlensSokken.sokKleur;
	return *this;
}