#ifndef __M4_HPP__
#define __M4_HPP__

#include "gunProduct.hpp"

class M4: public gunProduct
{
public:
	double getCost() { return 300.25; }

	std::string  print() { return  "M4"; }
};

#endif

