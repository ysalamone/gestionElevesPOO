#include "etudiant.h"

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
	float moyenne=maMoyenne();
	cout<<"Ma moyenne: "<<moyenne<<endl;
	cout<<"Nom de l'élèves: "<<nom<<endl;
	cout<<"Prénom de l'élèves: "<<prenom<<endl;
	cout<<"Numero de l'élèves: "<<numero<<endl;

}