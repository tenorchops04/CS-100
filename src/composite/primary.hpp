
#ifndef __PRIMARY_HPP__
#define __PRIMARY_HPP__

#include "compositeBase.hpp"   
#include "../decorator/gunProduct.hpp" 
#include "../factory/gunFactory.hpp" 


class Primary: public CompositeBase {
    private:
        gunProduct* item;
	public:
		//Constructor
		Primary() : CompositeBase() { }
		
		gunProduct* createGun(std::vector<gunType> &g) {
	        gunFactory* newFactory = new gunFactory(); 
	        gunProduct* newGun = newFactory->createGun(g,2); 
            this->item = newGun;
		}

		std::string print(){
		//print a Gun's name and its decorator
            return this->item->print(); 
		}
};

#endif // __PRIMARY_HPP__ 
