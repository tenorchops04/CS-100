#ifndef __GRIP_HPP__
#define __GRIP_HPP__

#include "gunProduct.hpp"

#include "AK_47.hpp"
#include "MP_7.hpp"
#include "M4.hpp"

#include "decorator.hpp"
#include "extendedMags.hpp"
#include "grip.hpp"
#include "silencer.hpp"
#include "scope.hpp"

class grip: public decorator
{

public:	
	grip( gunProduct* firearm ): decorator( firearm ){}

	double getCost(){ return gun->getCost()+20; }
	std::string  print(){ return gun->print()+" with Grip"; }

};

#endif
