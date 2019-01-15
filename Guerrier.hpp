//
//  Guerrier.hpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#ifndef Guerrier_hpp
#define Guerrier_hpp

#include <stdio.h>
#include <iostream>
#include "Personnage.hpp"

class Guerrier : public Personnage
{
    private :
    
public:
    Guerrier();
    void attack(Personnage &autre);
    void affichage();
    void protect(){};
};

#endif /* Guerrier_hpp */

