//
//  fctsupp.cpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#include "fctsupp.hpp"

int menuprincipale (){
    int choix=0;
    while (choix!=1 && choix!=2){
        std::cout << "Mode 1 : Un combat au tour par tour entre un personnage choisi par l'utilisateur (parmi magicien, guerrier ou elfe) et l’ennemi sachant que l'ennemi ne peut qu’attaquer. : 1 " << std::endl;
        std::cout << "Mode 2 : Un mini-système de combat en console (basé sur du std ::cout) au tour par tour. Le combat oppose alors deux personnages contre l’ennemi. A chaque tour, le joueur peut choisir entre « attaquer » ou « defendre ». L’ennemi (contrôlé par l’IA) choisi aléatoirement les actions (attaquer ou défendre) et choisi aléatoirement le personnage attaqué. : 2" << std::endl;
        std::cin >> choix;
        if (choix!=1 && choix!=2){
            std::cout << "Veuillez rentrer un mode existant" << std::endl;
        }
    }
    return choix;
}
int magicienelfeouguerrier(int var){
    int quelperso=4;

        while(quelperso!=1 && quelperso!=2 && quelperso!=3){
            std::cout << "Choisissez votre personnage " << var << " : \n1. Magicien : 1\n2. Guerrier : 2\n3. Elfe : 3" << std::endl;
            std::cin >> quelperso;
        }

    return quelperso;
}
void tour(Personnage &P, Personnage &mechant, int quelperso)
{
    int attackordefense;
    if(quelperso==1){
        while(attackordefense!=1 && attackordefense!=2)
        {
            std::cout << "Voulez-vous \n1. Attaquer : 1\n2. Defendre : 2 " << std::endl;
            std::cin >> attackordefense;
            if (attackordefense!=1 && attackordefense!=2)
            {
                std::cout << "Veuillez selectioner un pouvoir existant" << std::endl;
            }
        }
    }
    else {
        attackordefense=1;
    }
    if (attackordefense==1)
    {
        P.attack(mechant);
    }
    if (attackordefense==2)
    {
        P.protect();
    }
}

void gagneperdu(int Persovie, int mechantvie) 
{
    if (Persovie<=0)
    {
        std::cout << "Le(s) Personnage est mort. L'ennemi vous a battu" << std::endl;
    }
    if (mechantvie<=0)  
    {
        std::cout << "L'ennemi est mort. Le(s) personnage a donc gagné ! Bravo " << std::endl;
    }   
}


void remplissagetabjoueur(std::vector <Personnage*> &p1, int nbrsdejoueur, int &perso1, int &perso2)
{
    if(nbrsdejoueur==1){
        perso1=magicienelfeouguerrier(1);
        if (perso1==1){
            Magicien *Poi= new Magicien;
            p1.push_back(Poi);
        }
        if (perso1==2){
            Guerrier *Po= new Guerrier;
            p1.push_back(Po);
        }
        else {
            Elfe *P= new Elfe;
            p1.push_back(P);
        }
    }
    if(nbrsdejoueur==2){
        perso1=magicienelfeouguerrier(1);
        perso2=magicienelfeouguerrier(2);

        if(perso1==1){
            Magicien *Poi= new Magicien;
            p1.push_back(Poi);

            if(perso2==1){
                Magicien *Poi2= new Magicien;
                p1.push_back(Poi2);
            }
            if (perso2==2){
                Guerrier *Po= new Guerrier;
                p1.push_back(Po);
            }
            if (perso2==3){
                Elfe *P= new Elfe;
                p1.push_back(P);
            }

        }
        if (perso1==2){
            Guerrier *Po= new Guerrier;
            p1.push_back(Po);
            if(perso2==1){
                Magicien *Poi= new Magicien;
                p1.push_back(Poi);
            }
            if (perso2==2){
                Guerrier *Po2= new Guerrier;
                p1.push_back(Po2);
            }
            if (perso2==3){
                Elfe *P= new Elfe;
                p1.push_back(P);
            }
        }
        if(perso1==3){
            Elfe *P= new Elfe;
            p1.push_back(P);  
            if(perso2==1){
                Magicien *Poi= new Magicien;
                p1.push_back(Poi);              
            }     
            if(perso2==2){
                Guerrier *Po= new Guerrier;
                p1.push_back(Po);               
            }   
            if (perso2==3)
            {
                Elfe *P2= new Elfe;
                p1.push_back(P2);
            }
        }
    }
        
}



int choixquelperso(int perso1,int perso2, int &type){
    int choix;
    int type1 = 0,type2=0;
    if (perso1==1)
    {
        std::cout << "Perso 1 -> Magicien : 1 " << std::endl;
        type1=1;
    }
    if (perso1==2)
    {
        std::cout << "Perso 1 -> Guerrier : 1 " << std::endl;
        type1=2;
    }
    if (perso1==3)
    {
        std::cout << "Perso 1 -> Elfe : 1 " << std::endl;
        type1=3;
    }
    if (perso2==1)
    {
        std::cout << "Perso 2 -> Magicien : 2 " << std::endl;
        type2=1;
    }
    if (perso2==2)
    {
        std::cout << "Perso 2 -> Guerrier : 2 " << std::endl;
        type2=2;
    }
    if (perso2==3)
    {
        std::cout << "Perso 2 -> Elfe : 2 " << std::endl;
        type2=3;
    }
    std::cout << "Voulez vous attaquer avec perso 1 ou 2 ?" << std::endl;
    std::cin >> choix;
    if (choix==1){
        type=type1;
    }
    else {
        type=type2;
    }
    return choix-1;
}

