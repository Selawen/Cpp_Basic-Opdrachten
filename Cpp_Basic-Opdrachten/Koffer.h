#pragma once
#include <iostream>
#include <string>
#include "Sokken.h"

class Koffer
{
public:
	Koffer();
	Koffer(std::string kleur);
	Koffer(const Koffer& puffelensKoffer);
	virtual ~Koffer();
	Koffer& operator=(const Koffer& puffelensKoffer);

	std::string kofferKleur = "grijs";
	Sokken* sokken;
};

