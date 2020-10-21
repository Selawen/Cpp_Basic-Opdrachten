#pragma once
#include <string>

class Sokken
{
public:
	Sokken();
	Sokken(std::string kleur);
	Sokken(const Sokken& puffelensSokken);
	virtual ~Sokken();
	Sokken& operator=(const Sokken& puffelensSokken);	
	
	std::string sokKleur = "grijs";
};

