#ifndef __SECONDARY_HPP__
#define __SECONDARY_HPP__

#include "compositeBase.hpp"   
#include "../decorator/gunProduct.hpp" 
#include "../factory/gunFactory.hpp" 


class Secondary: public CompositeBase {
    private:
        gunProduct* item;
	public:
		//Constructor
		Secondary() : CompositeBase() { }

		gunProduct* createGun(std::vector<gunType> &g) {
	        gunFactory* newFactory = new gunFactory(); 
	        gunProduct* newGun = newFactory->createGun(g,2); 
            item = newGun;
		}

		std::string print(){
		//print a Gun's name and its decorator
            return item->print();
		}
};

#endif 
