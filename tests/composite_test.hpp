#include "../src/composite/primary.hpp"
#include "../src/composite/customComposite.hpp"
#include "../googletest/googletest/include/gtest/gtest.h"

TEST(PrimaryTest, TestPrint){
	CustomComposite* custom1 = new CustomComposite();
	Primary* primary = new Primary();

	custom1->add(primary);

	EXPECT_EQ(custom1->print(), "In primary class print function.\n");
}

TEST(SecondaryTest, TestPrint){
	CustomComposite* custom1 = new CustomComposite();
	Secondary* secondary = new Secondary();

	custom1->add(secondary);

	EXPECT_EQ(custom1->print(), "In primary class print function.\n");
}
