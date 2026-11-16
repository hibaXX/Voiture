#include <iostream>
#include"Moteur.h"
using namespace std;

Moteur::Moteur(int a, int b) {
	this->annee = a;
	this->puiss = b;
};
void Moteur::afficher() const {
	cout << "annee :" << annee << endl;
	cout << "puissance :" << puiss << endl;
}

Moteur::~Moteur() {

}