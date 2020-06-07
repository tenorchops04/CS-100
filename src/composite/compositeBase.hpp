#ifndef __COMPOSITEBASE_HPP__
#define __COMPOSITEBASE_HPP__

#include <string>

// 1. name of gun is "type_number"
// 2. name of gun's decorator is CamelStyle. 
enum gunType{ ak_47, mp_7, m_4, ExtendedMags, Grip, Silencer, Scope };

class CompositeBase {
	public:
		// Constructor
		CompositeBase(){}

		// Pure virtual functions. Must be implemented by children

		//virtual void add(CompositeBase* ) = 0;
		//virtual void remove(CompositeBase* ) = 0;

		//virtual GunProduct* createGun(gunType[]) = 0;
		virtual std::string print() = 0;
};

#endif //__COMPOSITEBASE_HPP__
