#pragma once
#include <iostream>
#include<string>
#include"Moteur.h"
#include"Vehicule.h"
using namespace std;

class Voiture:
	public Vehicule {
private:
	int qte;
	string color;
	Moteur* M;
public:
	Voiture(int qte, string color, int vitesse, string marque, Moteur*);
	void afficher() const;
	void accelerer(int);
	~Voiture();
};

