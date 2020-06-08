#ifndef __SILENCER_HPP__
#define __SILENCER_HPP__

#include "gunProduct.hpp"

#include "AK_47.hpp"
#include "MP_7.hpp"
#include "M4.hpp"

#include "decorator.hpp"
#include "extendedMags.hpp"
#include "grip.hpp"
#include "silencer.hpp"
#include "scope.hpp"

class silencer: public decorator
{

public:	
	silencer( gunProduct* firearm ): decorator( firearm ){}

	double getCost(){ return gun->getCost() + 30; }
	std::string  print(){ return gun->print()+" with Silencer"; }

};

#endif
