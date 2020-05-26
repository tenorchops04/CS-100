#ifndef __MP_7_HPP__
#define __MP_7_HPP__

#include "gunProduct.hpp"

class MP_7: public gunProduct
{
public:
	double getCost() { return 200.25; }

	std::string  print() { return "MP_7"; }
};

#endif

