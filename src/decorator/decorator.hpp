#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__

#include "gunProduct.hpp"
#include "AK_47.hpp"
#include "MP_7.hpp"
#include "M4.hpp"



class decorator: public gunProduct
{
protected:
	gunProduct* gun=nullptr;

public:
	decorator( gunProduct* firearm ): gun( firearm ) {}

	virtual double getCost(){ return gun->getCost(); }
	virtual std::string print(){ return gun->print(); }
};

#endif

