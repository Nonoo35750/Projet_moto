#include <string>
#include <iostream>

class Conducteur {
		protected:

		private :
			std::string nom;
		public :
			Conducteur();
			~Conducteur();
			std::string getNomConducteur();
			void setEntreprise(std::string nouveauNom);
			std::string getPrenomConducteur();
			void setPrenomConducteur(std::string NouveauPrenom);
	
			std::string getNom();	
};
