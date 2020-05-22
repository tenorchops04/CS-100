
#ifndef __PRIMARY_HPP__
#define __PRIMARY_HPP__

#include "compositeBase.hpp"   
#include "GunProduct.hpp" 


class Primary: public CompositeBase {
	public:
		//Constructor
		Primary(): CompositeBase() {}

		
		GunProduct* createGun(GunType ) {
		// ...
		}

		std::string print(){
		//print a Gun's name and its decorator
		}
}

#endif 
