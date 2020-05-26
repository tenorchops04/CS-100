#ifndef __SCOPE_HPP__
#define __SCOPE_HPP__


#include "gunProduct.hpp"
#include "decorator.hpp"



class scope: public decorator {

public:	
	scope( gunProduct* firearm ): decorator( firearm ){ }

	double getCost(){ return gun->getCost()+40; }
	std::string  print(){ return gun->print()+" with Scope"; }

};

#endif
