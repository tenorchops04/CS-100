#ifndef __AK_47_HPP__
#define __AK_47_HPP__

#include "gunProduct.hpp"



class AK_47: public gunProduct
{
public:
	double getCost() { return 100.25; }

	std::string  print() { return "AK_47"; }
};
#endif
