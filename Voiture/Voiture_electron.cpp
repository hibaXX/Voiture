#include "Voiture_electron.h"

Voiture_electron::Voiture_electron(int n, string m, int v) :Vehicule(m, v)
{
	this->niveaubatt = n;
}

void Voiture_electron::afficher() const
{
	cout << "Niveau de batterie:" << this->niveaubatt << endl;
	this->Vehicule::afficher();
}

Voiture_electron::~Voiture_electron()
{
}
