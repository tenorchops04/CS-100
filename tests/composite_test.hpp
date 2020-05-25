#include "../src/composite/primary.hpp"
#include "../src/composite/secondary.hpp"
#include "../src/composite/customComposite.hpp"
#include "../googletest/googletest/include/gtest/gtest.h"

TEST(CompositeTest, TestPrint){
	Primary* primary = new Primary("AK-47");
	Secondary* secondary = new Secondary("Desert Eagle");
	Primary* lethal = new Primary("Frag Grenade");
	Secondary* tactical = new Secondary("Flashbang");
	CustomComposite* custom1 = new CustomComposite(primary, secondary);
	CustomComposite* custom2 = new CustomComposite(lethal, tactical);
	CustomComposite* custom3 = new CustomComposite(custom1, custom2);

	EXPECT_EQ(custom3->print(), "AK-47 Desert Eagle Frag Grenade Flashbang");
}

