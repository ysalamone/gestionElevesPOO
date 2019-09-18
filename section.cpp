#include "section.h"

Section::Section(string leLibelle) {
	libelleSection = leLibelle;
}

string Section::retournerLib() {
	return(libelleSection);
}

void Section::afficherLibelle()
{
	cout<<libelleSection<<endl;
}

void Section::ajoutEtudiant()
{
	cout<<"New etudiant"<<endl;
	string leNom;
	string lePrenom;
	int leNumero;
	cout<<"Quel est le nom de l'etudiant ? ";
	getline(cin,leNom);
	cout<<"Quel est le prenom de l'etudiant ? ";
	getline(cin,lePrenom);
	cout<<"Entrez son numéro : ";;
	cin>>leNumero;
	cin.ignore(1);
	vecteurEtudiant.push_back(Etudiant(leNom,lePrenom,leNumero));
}

void Section::afficheEtudiants()
{
	for(int noCase=0;noCase<vecteurEtudiant.size();noCase++)
	{
		vecteurEtudiant[noCase].affiche();//STP
	}
}

void Section::supprimerEtudiant()
{
	cout<<"Entrez le numero de l'élève que vous voulez supprimer"<<endl;
	int numEleveASuppr=0;
	cin>>numEleveASuppr;
	cin.ignore(1);
	int numCaseASuppr = 0;
	while (!(numCaseASuppr == vecteurEtudiant.size() || numEleveASuppr==vecteurEtudiant[numCaseASuppr].retournerNumEleve()))
	{
		numCaseASuppr++;
	}
	if (numEleveASuppr==vecteurEtudiant[numCaseASuppr].retournerNumEleve())
	{
		vecteurEtudiant.erase(vecteurEtudiant.begin() + numCaseASuppr);
	}
	else {
		cout<<"L'élève est déjà supprimer ou le numéro est incorrect"<<endl;

	}
}

int Section::afficheMenu()
{
	int choix;  //Variable pour choisir 
	do
	{
	cout<<"Tapez 1 pour entrez un nouvel élèves"<<endl;
	cout<<"Tapez 2 Afficher les etudiants en slam1"<<endl;
	cout<<"Tapez 3 Pour supprimer un élève"<<endl;
	//cout<<"Tapez 4 Pour modifier un élève "<<endl;
	cout<<"Tapez 999 pour Quitter"<<endl;
	cout<<"Quel choix voulez-vous "<<endl;
	cin>>choix;
	cin.ignore(1);
	executerAction(choix);
	}while(!(choix==999));


}

int Section::executerAction(int actionChoisis)
{
	switch (actionChoisis)
	{
		case 1: ajoutEtudiant();break;
		case 2: afficheEtudiants();break;	
		case 3: supprimerEtudiant();break;
		case 999: break;


	}
}

int Section::rechercheEleve()
{
	//On vas demander le numero de l'élève puis on vas le chercher 
	cout<<"Entrez le numero de l'élève"<<endl;
	int numEleve=0;
	cin>>numEleve;
	cin.ignore(1);
	int numCaseAExaminer=0;
	while (!(numCaseAExaminer==nbEtudiant-1 || numEleve==vecteurEtudiant[numCaseAExaminer].retournerNumEleve()))
	{
		numCaseAExaminer++;
	}

	if (numEleve==vecteurEtudiant[numCaseAExaminer].retournerNumEleve())
	{
		vecteurEtudiant[numCaseAExaminer];
	}
	else {
		cout<<"pas bon"<<endl;
	}
}
