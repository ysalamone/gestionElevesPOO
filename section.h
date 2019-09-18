#include "etudiant.h"

class Section
{
	public :
		//Les propriétés
		int nbEtudiant;
		string libelleSection;
		vector <Etudiant> vecteurEtudiant;

		//Les méthodes
		Section(string leLibelle);
		string retournerLib();
		void afficherLibelle();
		int afficheMenu();//Affiche le menu gérant les etudiants de la section séléctionner
		int executerAction(int actionChoisis);
		int getEtudiantIndiceByNumero(int numero);
		int getEtudiantIndiceByNomPrenom(string nom , string prenom);
		void ajoutEtudiant();
		void supprimerEtudiant();//suppr elèves
		void afficheEtudiants();
		int rechercheEleve();
};
