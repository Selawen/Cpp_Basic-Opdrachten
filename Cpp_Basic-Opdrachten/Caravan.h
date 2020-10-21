#pragma once
#include <string>
#include <iostream>
#include "Koffer.h"

class Caravan
{
public:
	Caravan();
	Caravan(std::string kleur);
	Caravan(const Caravan& puffelensCaravan);
	virtual ~Caravan();
	Caravan& operator=(const Caravan& puffelensCaravan);

	void addKoffer();
	void toonInhoud();
	
	std::string caravanKleur = "grijs";
	Koffer* koffer;
};

