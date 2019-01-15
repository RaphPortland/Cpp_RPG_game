//
//  Guerrier.cpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#include "Guerrier.hpp"

Guerrier::Guerrier()
{

}
void Guerrier::attack(Personnage &autre)
{
	autre.setm_vie(autre.getm_vie()-15);
	std::cout << "Le guerrier attaque ..." << std::endl;
}
void Guerrier::affichage()
{
	std::cout << "Guerrier pts de vie : " << m_ptsdevie << std::endl;
}
