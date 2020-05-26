#ifndef __EXTENDEDMAGS_HPP__
#define __EXTENDEDMAGS_HPP__

#include "gunProduct.hpp"

#include "AK_47.hpp"
#include "MP_7.hpp"
#include "M4.hpp"

#include "decorator.hpp"
#include "extendedMags.hpp"
#include "grip.hpp"
#include "silencer.hpp"
#include "scope.hpp"


class extendedMags: public decorator
{

public:	
	extendedMags( gunProduct* firearm ): decorator( firearm ){}

	double getCost(){ return gun->getCost()+10; }
	std::string  print(){ return  gun->print()+" with Extended Mags"; }

};

#endif
