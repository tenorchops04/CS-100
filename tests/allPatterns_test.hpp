#ifndef __ALLPATTERNS_TEST_HPP__
#define __ALLPATTERNS_TEST_HPP__

#include "../src/composite/compositeBase.hpp"
#include "../src/composite/primary.hpp"
#include "../src/composite/secondary.hpp"
#include "../src/factory/gunFactory.hpp"

#include "../src/decorator/gunProduct.hpp"
#include "../src/decorator/AK_47.hpp"
#include "../src/decorator/MP_7.hpp"
#include "../src/decorator/M4.hpp"

#include "../src/decorator/decorator.hpp"
#include "../src/decorator/extendedMags.hpp"
#include "../src/decorator/grip.hpp"
#include "../src/decorator/silencer.hpp"
#include "../src/decorator/scope.hpp"

TEST(allPatternsTest, singleCustomWithOneAttachmentAttachments){
    	std::vector<gunType> gun1 = {ak_47, Silencer};
	std::vector<gunType> gun2 = {mp_7, Scope};

	// The factory patterns creates a gun that is decorated with an attachment
    	gunFactory* tool = new gunFactory();
	gunProduct* layout1 = tool->createGun(gun1);
	gunProduct* layout2 = tool->createGun(gun2);

	// Using the composite pattern to fill the custom1 slot with primary and secondary weapons
	Primary* primary = new Primary(layout1);
	Secondary* secondary = new Secondary(layout2);
	CustomComposite* custom1 = new CustomComposite(primary, secondary);

	EXPECT_EQ(custom1->print(), "AK_47 with Silencer and MP_7 with Scope");
	EXPECT_EQ(custom1->getTotalCost(), 370.5);
}

TEST(allPatternsTest, multipleCustomWithOneAttachmentAttachments){
    	std::vector<gunType> gun1 = {ak_47, Silencer, ExtendedMags, Scope};
	std::vector<gunType> gun2 = {mp_7, Scope, Silencer, Grip};

	// The factory patterns creates a gun that is decorated with an attachment
    	gunFactory* tool = new gunFactory();
	gunProduct* layout1 = tool->createGun(gun1);
	gunProduct* layout2 = tool->createGun(gun2);

	// Using the composite pattern to fill the custom1 slot with primary and secondary weapons
	Primary* primary = new Primary(layout1);
	Secondary* secondary = new Secondary(layout2);
	CustomComposite* custom1 = new CustomComposite(primary, secondary);
	
	// Each vector contains the gun and the decorators that the factory will create
    	std::vector<gunType> gun3 = {m_4, Silencer, Grip, Scope};
	std::vector<gunType> gun4 = {mp_7, Scope, Silencer, Grip};

	// The factory patterns creates a gun that is decorated with an attachment
	gunProduct* layout3 = tool->createGun(gun3);
	gunProduct* layout4 = tool->createGun(gun4);

	// Using the composite pattern to fill the custom1 slot with primary and secondary weapons
	Primary* primary2 = new Primary(layout3);
	Secondary* secondary2 = new Secondary(layout4);
	CustomComposite* custom2 = new CustomComposite(primary2, secondary2);

	CustomComposite* custom3 = new CustomComposite(custom1, custom2);

	EXPECT_EQ(custom3->print(), "AK_47 with Silencer with Extended Mags with Scope and MP_7 with Scope with Silencer with Grip and M4 with Silencer with Grip with Scope and MP_7 with Scope with Silencer with Grip");
	EXPECT_EQ(custom3->getTotalCost(), 1151.0);
}

#endif //__ALLPATTERNS_TEST_HPP__
