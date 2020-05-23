
#ifndef __PRIMARY_HPP__
#define __PRIMARY_HPP__

#include "compositeBase.hpp"   
//#include "GunProduct.hpp" 


class Primary: public CompositeBase {
	public:
		//Constructor
		Primary(): CompositeBase() {}

		/*GunProduct* createGun(GunType ) {
		// ...
		}*/
		
		virtual void add(CompositeBase* ){}
		virtual void remove(CompositeBase* ){}
		std::string print(){
			//print a Gun's name and its decorator
			return "In primary class print function.\n";
		}
};

#endif // __PRIMARY_HPP__ 
