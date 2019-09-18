#include "application.h"

void Application::listeSections() {
	cout<<"Voici la liste des sections : "<<endl;
	for(int noCase = 0 ; noCase < vecteurSections.size(); noCase++ ) {
		vecteurSections[noCase].afficherLibelle();
	}
	cout<<endl;
}

void Application::voirSections() {
	cout<<"-- Voir les sections --"<<endl<<endl;
	listeSections();
}

void Application::ajouterSection() {
	cout<<"-- Ajouter une section --"<<endl<<endl;
	string libSection;
	cout<<"Saisir le nom de la section à ajouter : ";
	getline(cin, libSection);
	vecteurSections.push_back(Section(libSection));
}

int Application::getSectionIdByNom()
{
	listeSections();
	string nomSectionRecherchee;
	int indiceRecherche=0;
	cout<<"Saisissez le nom de la section concernée : ";
	getline(cin,nomSectionRecherchee);
	do
	{
		if(nomSectionRecherchee != vecteurSections[indiceRecherche].retournerLib())
		{
			indiceRecherche++;
		}
	}while(!(indiceRecherche == vecteurSections.size() || nomSectionRecherchee == vecteurSections[indiceRecherche].retournerLib()));

	if(indiceRecherche == vecteurSections.size())
	{
		cout<<"La section n'a pas été trouvée, veuillez réessayer en faisant attention à la casse."<<endl;
	}
	return(indiceRecherche);
}

void Application::supprimerSection() {
	cout<<"-- Supprimer une section --"<<endl<<endl;
	int indiceSupprimer=getSectionIdByNom();
	string nomSectionSupprimer=vecteurSections[indiceSupprimer].retournerLib();
	cout<<"Êtes-vous sûr de vouloir supprimer la section \""<<nomSectionSupprimer<<"\" ? Sa suppression entraînera la suppression des étudiants qu'elle contient, ainsi que de l'ensemble de leurs notes."<<endl;
	cout<<"Pour confirmer la suppression, saisissez \"OUI\". Sinon, saisissez autre chose : ";
	string confirmation;
	getline(cin,confirmation);
	if(confirmation=="OUI")
	{
		for(int noCase=indiceSupprimer;noCase<vecteurSections.size()-1;noCase++)
		{
			vecteurSections[noCase]=vecteurSections[noCase+1];
		}
		vecteurSections.pop_back();
		cout<<"La section \""<<nomSectionSupprimer<<"\" a bien été supprimée."<<endl;
	}
	else
	{
		cout<<"Abandon de la suppression."<<endl;
	}
}

void Application::choisirSection() {
	cout<<"-- Choisir une section --"<<endl<<endl;
	int indiceSelection = getSectionIdByNom();
	vecteurSections[indiceSelection].afficheMenu();
}

void Application::menuSection() {
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
		cin.ignore(1);
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
