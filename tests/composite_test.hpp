#include "../src/composite/primary.hpp"
#include "../src/composite/secondary.hpp"
#include "../src/composite/customComposite.hpp"
#include "../googletest/googletest/include/gtest/gtest.h"

TEST(CompositeTest, TestingWithSinglePrimaryandSecondaryWeapon){
	Primary* primary = new Primary(ak_47);
	Secondary* secondary = new Secondary(mp_7);
	CustomComposite* custom1 = new CustomComposite(primary, secondary);
	
	EXPECT_EQ(custom1->print(), "AK_47 and MP_7");
	EXPECT_EQ(custom1->getTotalCost(), 300.5);
}

TEST(CompositeTest, TestingWithMultiplePrimaryandSecondaryWeapons){
	Primary* primary1 = new Primary(ak_47);
	Secondary* secondary1 = new Secondary(mp_7);
	Primary* primary2 = new Primary(m_4);
	Secondary* secondary2 = new Secondary(mp_7);
	CustomComposite* custom1 = new CustomComposite(primary1, secondary1);
	CustomComposite* custom2 = new CustomComposite(primary2, secondary2);
	CustomComposite* custom3 = new CustomComposite(custom1, custom2);
	
	EXPECT_EQ(custom3->print(), "AK_47 and MP_7 and M4 and MP_7");
	EXPECT_EQ(custom3->getTotalCost(), 801.0);
}

