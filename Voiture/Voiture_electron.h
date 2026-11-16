#pragma once
#include "Vehicule.h"
class Voiture_electron :public Vehicule
{
private:
	int niveaubatt;
public:
	Voiture_electron(int n, string m, int v);
	void afficher() const override;
	~Voiture_electron();
};
