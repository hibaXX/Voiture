#include <iostream>
#include "Voiture.h"
#include"Voiture_electron.h"
using namespace std;
int main() {
	Moteur* monMoteur = new Moteur(2023, 150);//creation dynamique
	Moteur M(2020, 44);//creation statique

	cout << "AFFICHAGE" << endl;
	monMoteur->afficher();
	cout << "---------------------------------------" << endl;
	M.afficher();
	cout << "---------------------------------------" << endl;
	cout << "affichage de la voiture" << endl;
	Voiture maVoiture(1, "Rouge", 220, "Sedan", monMoteur);
	maVoiture.afficher();

	delete monMoteur;//car on a cree ca dynamiquement
	cout << "---------------------------------------" << endl;

	Voiture_electron VE(3, "BMW", 5);
	cout << "affichage de Voiture electronique" << endl;
	VE.afficher();
	cout << "---------------------------------------" << endl;
	Vehicule v("kia", 40);
	cout << "affichage de Vehicule" << endl;
	v.afficher();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
