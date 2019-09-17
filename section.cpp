#include "section.h"

Section::Section(string leLibelle) {
	libelleSection = leLibelle;
}

void Section::ajoutEtudiant()
{
	cout<<"New etudiants"<<endl;
	tabEtudiant[nbEtudiant].fromKeyboard();
	nbEtudiant++;
}

void Section::afficheEtudiants()
{
	for(int noCase=0;noCase<nbEtudiant;noCase++)
	{
		tabEtudiant[noCase].affiche();//STP
	}
}

void Section::supprimerEtudiant()
{
	cout<<"Entrez le numero de l'élèves que vous voulez supprimer"<<endl;
	int numEleveASuppr=0;
	cin>>numEleveASuppr;
	cin.ignore(1);
	while (!(numCaseASupprimer==nbEtudiant-1 || numEleveASuppr==tabEtudiant[numCaseASupprimer].numero))
	{
		numCaseASupprimer++;
	}
	if (numEleveASuppr==tabEtudiant[numCaseASupprimer])
	{
		tabEtudiant.erase(numCaseASupprimer);
	}
	else {
		cout<<"L'élève est déjà supprimer ou le numéro est incorrect"<<endl;

}

int Section::afficheMenu()
{
	cout<<"Tapez 1 pour entrez un nouvel élèves"<<endl;
	cout<<"Tapez 2 Afficher les etudiants en slam1"<<endl;
	cout<<"Tapez 3 Pour supprimer un élève"<<endl;
	cout<<"Tapez 4 Pour modifier un élève "<<endl;
	cout<<"Tapez 999 pour Quitter"<<endl;
	cout<<"Quel choix voulez-vous "<<endl;
	int choix;  //Variable pour choisir 
	cin>>choix;
	cin.ignore(1);
	return (choix);


}

int Section::executerAction(int actionChoisis)
{

	switch (actionChoisis)
	{
		case 1: ajoutEtudiant();break;
		case 2: afficheEtudiants();break;	
		case 3: supprimerEtudiant();break;
		

	}
}

int Section::rechercheEleve()
{
	//On vas demander le numero de l'élève puis on vas le chercher 
	cout<<"Entrez le numero de l'élèves"<<endl;
	int numEleve=0;
	cin>>numEleve;
	cin.ignore(1);
	int numCaseAExaminer=0;
    while (!(numCaseAExaminer==nbEtudiant-1 || numEleve==tabEtudiant[numCaseAExaminer].numero))
	{
		numCaseAExaminer++;
		
	}
   
	if (numEleve==tabEtudiant[numCaseAExaminer].numero)
	{
			
			tabEtudiant[numCaseAExaminer];
		
	}
	else{
		cout<<"pas bon"<<endl;
	}
}

void Section::afficherLibelle() {
	cout<<libelleSection<<endl;
}
