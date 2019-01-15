//
//  Personnage.hpp
//  Exo502
//
//  Created by Partouche on 28/10/2017.
//  Copyright © 2017 Partouche. All rights reserved.
//

#ifndef Personnage_hpp
#define Personnage_hpp

#include <stdio.h>
class Personnage
{
	protected : 
		int m_ptsdevie;
	public:
		Personnage();
		int getm_vie(){return m_ptsdevie;}
		void setm_vie(int _vie){m_ptsdevie=_vie;}
		virtual void attack(Personnage &autre) = 0;
		virtual void protect() = 0;
		//virtual  ~Personnage();
};

#endif /* Personnage_hpp */
