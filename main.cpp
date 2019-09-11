#include <iostream>
#include <vector>
#include "section.h"
using namespace std;

void voirSections() {
	cout<<"-- Voir les sections --"<<endl<<endl;
	for(int noCase = 0 ; noCase < vecteurSections.size(); noCase++ ) {
		cout<<vecteurSections[noCase].afficherLibelle()<<endl;
	}
}

void ajouterSection() {
	cout<<"-- Ajouter une section --"<<endl<<endl;
	string libSection;
	cout<<"Saisir le nom de la section à ajouter : ";
	getline(cin, libSection);
	vecteurSections.push_back(Section(libsection));
}

void supprimerSection() {
	cout<<"-- Supprimer une section --"<<endl<<endl;
	
}

void choisirSection() {
	cout<<"-- Choisir une section --"<<endl<<endl;
}

void afficherMenu() {
	int choixMenu;
	do {
		cout<<"-- Menu --"<<endl<<endl;
		cout<<"1. Voir les sections"<<endl;
		cout<<"2. Ajouter une section"<<endl;
		cout<<"3. Supprimer une section"<<endl;
		cout<<"4. Entrer dans une section"<<endl;
		cout<<"5. Quitter le programme"<<endl<<endl;
		do {
			cout<<"Que faire ? ";
			cin>>choixMenu;
			if(!(choixMenu>=1 && choixMenu<=5)) {
				cout<<"Commande invalide. Veuillez réessayer."<<endl;
			}
		}while(!(choixMenu>=1 && choixMenu<=5));
		switch(choixMenu) {
			case 1 : voirSections();
					 break;
			case 2 : ajouterSection();
					 break;
			case 3 : supprimerSection();
					 break;
			case 4 : choisirSection();
					 break;
			default: break;
		}
	}while(!(choixMenu == 5));
	cout<<"Au revoir."<<endl;
}

int main() {
	vector <Section> vecteurSections;
	cout<<"PROGRAMME DE GESTION DES ELEVES"<<endl<<endl;
	afficherMenu();
	return 0;
}