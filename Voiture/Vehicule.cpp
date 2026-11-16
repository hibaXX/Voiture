#include "Vehicule.h"

Vehicule::Vehicule()
{
}

Vehicule::Vehicule(string m, int v)
{
	this->marque = m;
	this->vitesse = v;
}

void Vehicule::afficher() const
{
	cout << "La marque vehicule:" << this->marque << endl;
	cout << "La vitesse vehicule:" << this->vitesse << endl;

}

Vehicule::~Vehicule()
{

}