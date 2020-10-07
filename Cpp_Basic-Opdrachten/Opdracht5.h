#pragma once
#include <iostream>
#include <list>

void MainMenu();

class Boek {
};

class Bibliotheek {
public:
	bool booksAvailable();
	Boek* leenUit();
	bool leverIn(Boek* _boek);
private:
	Boek* boeken[1];
};

class Opdracht5{
public:
	void start();
private:
	int x;
	Bibliotheek* bieb = new Bibliotheek;
	Boek* boek = new Boek;	
	
	void biebOpties();
	void deleteHeap();
};

