#include "section.h"
#include <vector>

class Application
{
	private:
		//les propriétés
		vector <Section> vecteurSections;
	public:
		//les méthodes
		void menuSection();
		void voirSections();
		void listeSections();
		void ajouterSection();
		int getSectionIdByNom();
		void supprimerSection();
		void choisirSection();
};
