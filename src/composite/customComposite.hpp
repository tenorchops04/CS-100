#ifndef __CUSTOM_COMPOSITE_HPP__
#define __CUSTOM_COMPOSITE_HPP__
#include "compositeBase.hpp"   

class CustomComposite: public CompositeBase {
    private:
        CompositeBase* primary;
        CompositeBase* secondary;
        CompositeBase* loadout;
	public:
		//Constructor
		CustomComposite(CompositeBase* p, CompositeBase* s): CompositeBase() {primary = p; secondary = s; loadout = nullptr;}
		CustomComposite(CompositeBase* p, CompositeBase* s, CompositeBase* l): CompositeBase() {primary = p; secondary = s; loadout = l; }

		//virtual void add(CompositeBase*);
        //virtual void remove(CompositeBase*);
		//virtual GunProduct* createGun(GunType);
		virtual std::string print() {
            if (loadout != nullptr) {
                return primary->print() + " " + secondary->print() + " " + loadout->print(); 
            }
            else {
                return primary->print() + " " + secondary->print(); 
            }
        }
};
#endif 

