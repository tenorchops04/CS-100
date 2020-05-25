//#include "primary.hpp"
#include "customComposite.hpp"
#include "compositeBase.hpp"
#include "primary.hpp"

int main(){
	CustomComposite* custom1 = new CustomComposite();
	Primary* primary = new Primary();

	custom1->add(primary);
	std::cout << custom1->print();
	
	return 0;
}

