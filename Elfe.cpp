//
//  Elfe.cpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#include "Elfe.hpp"

Elfe::Elfe() : m_nbrsdefleches(20)
{

}

void Elfe::attack(Personnage &autre)
{
	if (m_nbrsdefleches>=1)
	{
		autre.setm_vie(autre.getm_vie()-10);
		m_nbrsdefleches=m_nbrsdefleches-1;
		std::cout << "L'elfe attaque ..." << std::endl;
	}
	else {
		std::cout << "L'Elfe a 0 fleche restante" << std::endl;
	}
}
void Elfe::affichage()
{
	std::cout << "Points de vie de l'Elfe : " << m_ptsdevie << std::endl;
	std::cout << "Nombre de fleches de l'Elfe : " << m_nbrsdefleches << std::endl;
}