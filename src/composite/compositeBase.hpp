#ifndef __COMPOSITEBASE_HPP__
#define __COMPOSITEBASE_HPP__

#include <string>

enum gunType{ ak_47, mp_7, m_4, glock, desert_eagle, ExtendedMags, Grip, Silencer, Scope };

class CompositeBase {
	public:
		// Constructor
		CompositeBase(){}

		virtual std::string print() = 0;
		virtual double getTotalCost() = 0;
};

#endif //__COMPOSITEBASE_HPP__
