//
//  Magicien.hpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#ifndef Magicien_hpp
#define Magicien_hpp

#include <stdio.h>
#include <iostream>
#include "Personnage.hpp"

class Magicien : public Personnage 
{
	private :
		int m_compteurdemagie;
	public:
		Magicien();
		void attack(Personnage &autre);
        void protect();
        void affichage();
    
};

#endif /* Magicien_hpp */
