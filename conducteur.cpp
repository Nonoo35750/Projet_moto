#include "conducteur.h"

Conducteur::Conducteur()
{
	std::cout << "Construction Conducteur" << std::endl;
}

std::string Conducteur::getNomConducteur()
{
	return std::string();
}

void Conducteur::setEntreprise(std::string nouveauNom)
{
}

std::string Conducteur::getPrenomConducteur()
{
	return std::string();
}

void Conducteur::setPrenomConducteur(std::string NouveauPrenom)
{
}


std::string Conducteur::getNom()
{
	return this->nom;
}

Conducteur::~Conducteur()
{	
	std::cout << "Destruction Conducteur" << std::endl;
}

