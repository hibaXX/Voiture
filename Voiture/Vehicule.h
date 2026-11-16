#pragma once
#include<iostream>
using namespace std;

class Vehicule
{
private:
	string marque;
protected:
	int vitesse;
public:
	Vehicule();
	Vehicule(string, int);
	virtual void afficher()const;
	~Vehicule();
};
