#include "etudiant.h"

class Section
{
	public :
		//Les propriétés
		int nbEtudiant;
		string libelleSection;
		Etudiant tabEtudiant[40];
		

		//Les méthodes
		void Section(string leLibelle);
		int afficheMenu();//Affiche le menu gérant les etudiants de la section séléctionner
		int executerAction(int actionChoisis);
		int getEtudiantIndiceByNumero(int numero);
		int getEtudiantIndiceByNomPrenom(string nom , string prenom);
		void ajoutEtudiant();
		void supprimerEtudiant();//suppr elèves
		void afficheEtudiants();
		void afficherLibelle();
};
