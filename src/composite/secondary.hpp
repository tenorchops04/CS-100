#ifndef __SECONDARY_HPP__
#define __SECONDARY_HPP__

#include "compositeBase.hpp"   
#include "GunProduct.hpp" 


class Secondary: public CompositeBase {
	public:
		//Constructor
		Secondary(): CompositeBase() {}

		
		GunProduct* createGun(GunType ) {
		// ...
		}

		std::string print(){
		//print a Gun's name and its decorator
		}
}

#endif 
