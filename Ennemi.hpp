//
//  Ennemi.hpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#ifndef Ennemi_hpp
#define Ennemi_hpp

#include <stdio.h>
#include "Personnage.hpp"
#include <iostream>

class Ennemi : public Personnage
{
	private:

	public:
		Ennemi();
		void attack(Personnage &autre);
		void protect(){};
};
#endif /* Ennemi_hpp */
