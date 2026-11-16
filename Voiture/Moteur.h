#pragma once
#include <iostream>
#include<string>
class Moteur {
private:
	int annee;
	int puiss;
public:
	Moteur(int, int);
	void afficher() const;
	~Moteur();
};


