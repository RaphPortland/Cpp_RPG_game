//
//  main.cpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Guerrier.hpp"
#include "Personnage.hpp"
#include "Elfe.hpp"
#include "Magicien.hpp"
#include "Ennemi.hpp"
#include "fctsupp.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int choix=0;
    std::vector<Personnage*> p1;
    
    Ennemi mechant;
    
    choix=menuprincipale();
    
    if(choix==1)
    {
        std::cout << "on est la" << std::endl;
    	int compteur;
    	int perso1;
        int poubelle;
    	remplissagetabjoueur(p1,1,perso1,poubelle);
        
        while (p1[0]->getm_vie()>0 && mechant.getm_vie()>0){
	    	std::cout << "Tour numero : " << compteur << std::endl;
	   		tour(*p1[0], mechant, perso1);
            if(mechant.getm_vie()>0){
                mechant.attack(*p1[0]);
            }
	        compteur++;
    	}
    	gagneperdu(p1[0]->getm_vie(), mechant.getm_vie());
    }
    
    if (choix==2)
    {
        int perso1,perso2,actif,type;
        int compteur,a;
        remplissagetabjoueur(p1,2,perso1,perso2);
        std::cout << "Perso1 : " << perso1 << std::endl;
        std::cout << "Perso2 : " << perso2 << std::endl;

        while (p1[0]->getm_vie()>0 && p1[1]->getm_vie()>0 && mechant.getm_vie()>0) {
            actif = choixquelperso(perso1,perso2,type);
            std::cout << "Tour numero : " << compteur << std::endl;
            tour(*p1[actif], mechant, type);
            if(mechant.getm_vie()>0){
                mechant.attack(*p1[rand()%2]);
            }
            compteur++;
        }
        if (p1[0]->getm_vie()>p1[0]->getm_vie()){
            a=p1[0]->getm_vie();
        }
        else {
            a=p1[0]->getm_vie();
        }
        gagneperdu(a, mechant.getm_vie());

    }
    return 0;
}
