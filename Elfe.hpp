//
//  Elfe.hpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#ifndef Elfe_hpp
#define Elfe_hpp

#include <stdio.h>
#include <iostream>
#include "Personnage.hpp"

class Elfe : public Personnage
{
	private: 
		int m_nbrsdefleches;
	public:
		Elfe();
		void attack(Personnage &autre);
		void affichage();
		void protect(){};
};


#endif /* Elfe_hpp */
