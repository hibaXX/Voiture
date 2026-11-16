#include"Voiture.h"
#include"Moteur.h"
#include<iostream>
#include"Vehicule.h"
using namespace std;


Voiture::Voiture(int qte, string color, int vitesse, string marque, Moteur* M):Vehicule(marque,vitesse) {
    this->qte = qte;
    this->color = color;
    this->M = new Moteur(*M);
}

void Voiture::afficher()const {
    cout << "qte:" << this->qte << endl;
    cout << "color:" << this->color << endl;
    Vehicule::afficher();
    if (M != nullptr) {
        M->afficher(); // Appel de la méthode Afficher du moteur associé
    }
    else {
        cout << " -> Aucun moteur associé." << endl;
    }
}
void Voiture::accelerer(int a) {
    vitesse += a;
}
Voiture::~Voiture() {
    delete M;
    this->M = nullptr;
}
