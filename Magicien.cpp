//
//  Magicien.cpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#include "Magicien.hpp"

Magicien::Magicien() : m_compteurdemagie(50)
{

}


void Magicien::attack(Personnage &autre)
{
	if (m_compteurdemagie>=10){
		m_compteurdemagie=m_compteurdemagie-10;
		autre.setm_vie(autre.getm_vie()-20);
		std::cout << "Le magicien attaque ..." << std::endl;
	}
	else {std::cout << "Points de magie manquant" << std::endl;}

}
void Magicien::protect()
{
	if (m_compteurdemagie>=5){
		m_compteurdemagie=m_compteurdemagie-5;
		std::cout << "Le magicien se defend ..." << std::endl;
		m_ptsdevie=m_ptsdevie+10;
	}
	else {std::cout << "Points de magie manquant" << std::endl;}
}

void Magicien::affichage()
{
	std::cout << "Pts de vie du Magicien : " << m_ptsdevie << std::endl;
	std::cout << "Compteur de magie du Magicien : " << m_compteurdemagie << std::endl;
}
