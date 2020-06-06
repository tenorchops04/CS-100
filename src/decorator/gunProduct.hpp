#ifndef __GUNPRODUCT_HPP__
#define __GUNPRODUCT_HPP__

#include <iostream>
#include <string>

class gunProduct
{
public:
	gunProduct(){};

	virtual double getCost()=0;
	virtual std::string print()=0;
};

#endif
