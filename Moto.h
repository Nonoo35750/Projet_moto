/*****************************************************************//**
 * \file   Moto.h
 * \author LOIC
 * \date september 2k25
 *********************************************************************/
#include <iostream>
#include <string>

class Moto
{
private:
   
    int Poids;
    std::string moteur;

protected:

public:
    /**
        * Mise en forme du constructeur/destructeur
        */
    Moto();

    void print();

    ~Moto();

};