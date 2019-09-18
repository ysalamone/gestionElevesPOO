#include "etudiant.h"

Etudiant::Etudiant(string leNom, string lePrenom, int leNumero) {
	nom = leNom;
	prenom = lePrenom;
	numero = leNumero;
}

void Etudiant::fromKeyboard()
{
	cout<<"Quel est le nom de l'etudiant"<<endl;
	getline(cin,nom);
	cout<<"Quel est le prenom de l'etudiant"<<endl;
	getline(cin,prenom);
	cout<<"Entrez le numero"<<endl;
	cin>>numero;
	cin.ignore(1);
}

void Etudiant::affiche()
{
	cout<<"Nom de l'élève : "<<nom<<endl;
	cout<<"Prénom de l'élève : "<<prenom<<endl;
	cout<<"Numéro de l'élève : "<<numero<<endl;

}

int Etudiant::retournerNumEleve() {
	return numero;
}
