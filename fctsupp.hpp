//
//  fctsupp.hpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#ifndef fctsupp_hpp
#define fctsupp_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include "Personnage.hpp"
#include "Magicien.hpp"
#include "Elfe.hpp"
#include "Guerrier.hpp"

void tour(Personnage &P, Personnage &mechant, int quelperso);
int magicienelfeouguerrier(int var);
int menuprincipale();
void gagneperdu(int Persovie, int mechantvie);
void remplissagetabjoueur(std::vector <Personnage*> &p1, int nbrsdejoueur, int &perso1, int &perso2);
int choixquelperso(int perso1,int perso2, int &type);

#endif /* fctsupp_hpp */
