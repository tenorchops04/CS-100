#include <string>
#include <iostream>
#include <vector>
#include "./composite/compositeBase.hpp"
#include "./composite/customComposite.hpp"
#include "./composite/primary.hpp"
#include "./composite/secondary.hpp"

void choosePrimaryWeapon(std::vector<gunType> &);
//std::string* chooseSecondaryWeapon();

int main() {
        
        std::vector<gunType> userPrimary;
        
        std::cout << "CREATE-A-CLASS MENU" << std::endl;
        std::cout << "p - Choose Primary Weapom" << std::endl;
        std::cout << "s - Secondary Weapon" << std::endl;
        std::cout << "q - Quit" << std::endl;
 
        std::string userInput;
        std::cin >> userInput;

        if (userInput == "p") {
            choosePrimaryWeapon(userPrimary);
        }
        else if (userInput == "s") {
  //          chooseSecondaryWeapon();
                return 0 ;
        }
        else {
            return 0;
        }

        Primary* newPrimary= new Primary();
        newPrimary->createGun(userPrimary);
        
        std::cout << newPrimary->print() << std::endl;
        
}

void choosePrimaryWeapon(std::vector<gunType> &userPrimary) {
        
        std::string choice;

        std::cout << "CHOOSE A PRIMARY WEAPON" << std::endl;
        std::cout << "Type one of the following:" << std::endl;
        std::cout << "1 - AK-47" << std::endl;
        std::cout << "2 - MP7" << std::endl;
        std::cout << "3 - M4" << std::endl;
        std::cout << "q - Quit" << std::endl;
    
        std::cin >> choice;
        std::cin.ignore();

        if (choice == "1") {
            userPrimary.push_back(ak_47);
        }
        else if (choice == "2") {
            userPrimary.push_back(mp_7);
        }
        else if (choice == "3") {
            userPrimary.push_back(m_4);
        }
        else if (choice == "q") {
            exit(0);
        }

        std::cout << "CHOOSE YOUR FIRST ATTACHMENT" << std::endl;
        std::cout << "1 - Scope" << std::endl;
        std::cout << "2 - Extended Mags" << std::endl;
        std::cout << "3 - Grip" << std::endl;
        std::cout << "4 - Silencer" << std::endl;
        std::cout << "q - Quit" << std::endl;

        std::cin >> choice;
        std::cin.ignore();

        if (choice == "1") {
            userPrimary.push_back(Scope);
        }
        else if (choice == "2") {
            userPrimary.push_back(ExtendedMags);
        }
        else if (choice == "3") {
            userPrimary.push_back(Grip);
        }
        else if (choice == "4") {
            userPrimary.push_back(Silencer);
        }
        else if (choice == "q") {
            exit(0);
        }

}

//std::string* chooseSecondaryWeapon();
