#ifndef __COMPOSITEBASE_HPP__
#define __COMPOSITEBASE_HPP__

enum GunType {AK-47, MP-7, M4} guntype;

class CompositeBase {
	public:
		// Constructor
		CompositeBase() {};

		// Pure virtual functions. Must be implemented by children
		virtual void add(CompositeBase* ) = 0;
		virtual void remove(CompositeBase* ) = 0;
		virtual GunProduct* createGun(GunType ) = 0;
		virtual std::string print() = 0;
}

#endif //__COMPOSITEBASE_HPP__
