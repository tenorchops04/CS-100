#include <string>
#include <iostream>
#include "./composite/compositeBase.hpp"
#include "./composite/customComposite.hpp"
#include "./composite/primary.hpp"
#include "./composite/secondary.hpp"

int main() {
    Primary* primaryWeapon = new Primary("AK47");
    Secondary* secondaryWeapon = new Secondary("Desert Eagle");
    Primary* primaryEquipment = new Primary("Frag Grenade");
    Secondary* secondaryEquipment = new Secondary("Stun Grenade");
    CustomComposite* equipment = new CustomComposite(primaryEquipment,secondaryEquipment);
    CompositeBase* class1 = new CustomComposite(primaryWeapon,secondaryWeapon,equipment);

    std::cout << class1->print() << std::endl;
}
