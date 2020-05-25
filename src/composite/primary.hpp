
#ifndef __PRIMARY_HPP__
#define __PRIMARY_HPP__

#include "compositeBase.hpp"   
//#include "GunProduct.hpp" 


class Primary: public CompositeBase {
    private:
        std::string item;
	public:
		//Constructor
		Primary(std::string userItem) : CompositeBase() { this->item = userItem; }

		
	//	GunProduct* createGun(GunType ) {
	        
	//	}

		std::string print(){
		//print a Gun's name and its decorator
            return item; 
		}
};

#endif 
