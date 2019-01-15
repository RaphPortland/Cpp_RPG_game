//
//  Ennemi.cpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#include "Ennemi.hpp"

Ennemi::Ennemi()
{

}
void Ennemi::attack(Personnage &autre)
{
	autre.setm_vie(autre.getm_vie()-13);
	std::cout << "L'Ennemi attaque ..." << std::endl;
}
