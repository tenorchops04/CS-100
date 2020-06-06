#ifndef __GUNPRODUCT_TEST_HPP__
#define __GUNPRODUCT_TEST_HPP__

#include "../src/decorator/gunProduct.hpp"
#include "../src/decorator/AK_47.hpp"
#include "../src/decorator/MP_7.hpp"
#include "../src/decorator/M4.hpp"

#include "../src/decorator/decorator.hpp"
#include "../src/decorator/extendedMags.hpp"
#include "../src/decorator/grip.hpp"
#include "../src/decorator/silencer.hpp"
#include "../src/decorator/scope.hpp"


TEST( gunProduct_unitTest, singleGun){
        gunProduct* gun1=new AK_47();


        EXPECT_EQ( gun1->print(), "AK_47");
}


TEST( gunProduct_unitTest, aGunWithOneDecorator){
        gunProduct* gun1=new MP_7();
        gunProduct* decorator1=new grip( gun1 );


        EXPECT_EQ( decorator1->print(), "MP_7 with Grip");
}

TEST( gunProduct_unitTest, aGunWithAnotherDecorator){
        gunProduct* gun1=new M4();
        gunProduct* decorator1=new extendedMags( gun1 );


        EXPECT_EQ( decorator1->print(), "M4 with Extended Mags");
}

TEST( gunProduct_intergration, aGunWithTwoDecorators){
   	gunProduct* gun1=new AK_47();
	gunProduct* decorator1=new silencer( gun1 );
	gunProduct* decorator2=new scope( decorator1 );


	EXPECT_EQ( decorator2->print(), "AK_47 with Silencer with Scope");
}



#endif 
