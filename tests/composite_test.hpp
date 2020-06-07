#include "../src/composite/primary.hpp"
#include "../src/composite/secondary.hpp"
#include "../src/composite/customComposite.hpp"
#include "../googletest/googletest/include/gtest/gtest.h"

TEST(CompositeTest, TestPrint){
	Primary* primary1 = new Primary(ak_47);
	Secondary* secondary1 = new Secondary(glock);
	Primary* primary2 = new Primary(m_4);
	Secondary* secondary2 = new Secondary(desert_eagle);
	CustomComposite* custom1 = new CustomComposite(primary1, secondary1);
	CustomComposite* custom2 = new CustomComposite(primary2, secondary2);
	CustomComposite* custom3 = new CustomComposite(custom1, custom2);
}

