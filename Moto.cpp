/*****************************************************************//**
 * \file   Moto.cpp
 * \author LOIC
 * \date september 2k25
**********************************************************************/

#include "Moto.h"
#include <string>
#include <iostream>

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param nom nom de l'entreprise
 * \param ville ville de l'entreprise
 */
Moto::Moto() 
{
	this->Poids = 200;
	this->moteur = "92cheveaux";

	/**
 * \brief Constructeur
 *
 */
	std::cout << "Constructeur" << std::endl;
}

void Moto::print()
{
 	std::cout << "Poids : " << this->Poids << " kg" << std::endl;
    std::cout << "Moteur : " << this->moteur << std::endl;
}

/**
 * \brief Destructeur
 *
 */

Moto::~Moto()
{
	std::cout << "Destructeur" << std::endl;
}

