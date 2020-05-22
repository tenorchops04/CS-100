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

		virtual void add(CompositeBase*);
        virtual void remove(CompositeBase*);
		virtual GunProduct* createGun(GunType);
		virtual std::string print() {
            return primaryWeapon->print(); 
        }
};
#endif 

