# Cpp_rpg_game

Considérons un RPG caractérisé par les personnages suivants : magicien, guerrier et elfe. Tous les personnages ont 100 points de vie au départ. Les caractéristiques des personnages sont les suivantes :
- Un magicien attaque et se protège en lançant de la magie. Il a donc un compteur de magie. L’attaque lui coute 10 points de magie et la défense 5 points. Au départ, le magicien possède 50 points de magie et il ne peut pas regagner de magie en cours de combat. Son attaque a une puissance de 20 points de dégâts.
- Un guerrier attaque avec son épée mais ne peut pas se protéger (pas de bouclier). Son attaque a une puissance de 15 points de dégâts.
- Un elfe attaque en utilisant un arc et donc des flèches. Il possède 20 flèches au départ. Il ne peut pas se recharger en flèches. Son attaque a une puissance de 10 points de dégâts.
On ne peut rencontrer qu’un seul ennemi qui a 100 points de vie, qui inflige 13 points de vie par attaque et ne peut pas se défendre. A chaque tour, l’ennemie ne fait donc qu’attaquer. C’est toujours le joueur qui commence le combat.


1) Implémenter en C++ la gestion des personnages.

2) Implémenter en C++ la gestion de l’ennemi.

3) Implémenter en C++ un combat au tour par tour entre un personnage choisi au hasard (parmi magicien, guerrier ou elfe) et l’ennemi sachant que les entités ne peuvent qu’attaquer.

Maintenant, le joueur possède une équipe de deux personnages (un magicien et un guerrier par exemple ou alors un magicien et un elfe...) qu’il choisit au départ. Quand un personnage meurt, il ne peut plus faire d’actions. L’ennemi possède 200 points de vie dans ce scénario.

4) Implémenter en C++ un mini-système de combat en console (basé sur du std ::cout) au tour par tour. Le combat oppose alors deux personnages contre l’ennemi. A chaque tour, le joueur peut choisir entre « attaquer » ou « defendre ». L’ennemi (contrôlé par l’IA) choisi aléatoirement les actions (attaquer ou défendre) et choisi aléatoirement le personnage attaqué.
