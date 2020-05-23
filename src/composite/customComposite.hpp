#ifndef __CUSTOM_COMPOSITE_HPP__
#define __CUSTOM_COMPOSITE_HPP__
#include "compositeBase.hpp"   

class CustomComposite: public CompositeBase {
	private:
        	CompositeBase* primaryWeapon;
        	CompositeBase* secondaryWeapon;
	public:
		//Constructor
		CustomComposite(): CompositeBase() {}

		virtual void add(CompositeBase* primary){
			// Placeholder. Need to figure out how to set primaryWeapon and secondaryWeapon.
			primaryWeapon = primary;
		}
        	virtual void remove(CompositeBase*){
			std::cout << "In custom class, remove() function.\n";
		}
		//virtual GunProduct* createGun(GunType);
		virtual std::string print() {
            		return primaryWeapon->print(); 
        	}
};
#endif //__CUSTOM_COMPOSITE_HPP__ 

