#ifndef __SECONDARY_HPP__
#define __SECONDARY_HPP__

#include "compositeBase.hpp"   
//#include "GunProduct.hpp" 


class Secondary: public CompositeBase {
    private:
        std::string item;
	public:
		//Constructor
		Secondary(std::string userItem) : CompositeBase() { item = userItem; }

		
	//	GunProduct* createGun(GunType ) {
		// ...
	//	}

		std::string print(){
		//print a Gun's name and its decorator
            return item;
		}
};

#endif 
