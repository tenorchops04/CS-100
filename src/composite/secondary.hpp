#ifndef __SECONDARY_HPP__
#define __SECONDARY_HPP__

#include "compositeBase.hpp"   
//#include "GunProduct.hpp" 


class Secondary: public CompositeBase {
	public:
		//Constructor
		Secondary(): CompositeBase() {}

		
		/*GunProduct* createGun(GunType ) {
		// ...
		}*/
		
		virtual void add(CompositeBase* ){}
		virtual void remove(CompositeBase* ){}
		std::string print(){
			//print a Gun's name and its decorator
			return "In secondary class print function.\n";
		}
};

#endif 
