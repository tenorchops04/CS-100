#ifndef __CUSTOM_COMPOSITE_HPP__
#define __CUSTOM_COMPOSITE_HPP__
#include "compositeBase.hpp"   

class CustomComposite: public CompositeBase {
	private:
        	CompositeBase* primary;
        	CompositeBase* secondary;

	public:
		//Constructor
		CustomComposite(CompositeBase* p, CompositeBase* s): CompositeBase() {primary = p; secondary = s;}

		//virtual void add(CompositeBase*);
        	//virtual void remove(CompositeBase*);
		//virtual GunProduct* createGun(GunType);
		virtual std::string print() {
    	            return primary->print() + " and " + secondary->print(); 
    		}
		
		virtual double getTotalCost(){
			return primary->getTotalCost() + secondary->getTotalCost();
		}
};
#endif //__CUSTOM_COMPOSITE_HPP__ 

