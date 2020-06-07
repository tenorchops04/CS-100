#ifndef __GUNFACTORY_TEST_HPP__
#define __GUNFACTORY_TEST_HPP__

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

TEST( gunFactory_unitTest, ak47_with_Silencer){

    std::vector<gunType> requirement = { ak_47, Silencer };
    gunFactory* tool = new gunFactory();
    gunProduct* player1 = tool->createGun(requirement);

    EXPECT_EQ( player1->print(), "AK_47 with Silencer");
}


TEST( gunFactory_unitTest, mp_7_with_ExtendedMags){

    std::vector<gunType> requirement = { mp_7, ExtendedMags };
    gunFactory* tool = new gunFactory();
    gunProduct* player1 = tool->createGun(requirement);

    EXPECT_EQ( player1->print(), "MP_7 with Extended Mags");
}


TEST( gunFactory_unitTest, m_4_with_Grip){

    std::vector<gunType> requirement = { m_4, Grip };
    gunFactory* tool = new gunFactory();
    gunProduct* player1 = tool->createGun(requirement);

    EXPECT_EQ( player1->print(), "M4 with Grip");
}


TEST( gunFactory_unitTest, ak47_with_multiple_decorators){

    std::vector<gunType> requirement={ ak_47, Silencer, Scope, Grip, ExtendedMags };
    gunFactory* tool = new gunFactory();
    gunProduct* player1 = tool->createGun(requirement);

    EXPECT_EQ( player1->print(), "AK_47 with Silencer with Scope with Grip with Extended Mags");
}


TEST( gunFactory_unitTest, accidently_requiring_2_guns){

    std::vector<gunType> requirement={ ak_47, Silencer, Scope, Grip, ExtendedMags, m_4, Silencer, ExtendedMags };
    gunFactory* tool = new gunFactory();
    gunProduct* player1 = tool->createGun(requirement);

    EXPECT_EQ( player1->print(), "M4 with Silencer with Extended Mags");
}

#endif 
