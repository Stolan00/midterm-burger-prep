#include "hamburger.h"
// ----------------------------------------------------------------------------------------
// constructors
    
    //default
Hamburger::Hamburger()
{
    ketchup  = false, mayo = false;

    meatType = Meat();
}
    //param
Hamburger::Hamburger(std::string newType, Meat newMeat, bool newLettuceWrap, bool newKetchup, bool newMayo)
{
    ketchup      = newKetchup, mayo = newMayo;
    sandwichType = newType;
    meatType     = newMeat;
    lettuceWrap  = newLettuceWrap;
}
    //copy
Hamburger::Hamburger(const Hamburger& oldHamburger)
{
    ketchup  = oldHamburger.ketchup;
    mayo     = oldHamburger.mayo;
    meatType = oldHamburger.meatType;
}
// ----------------------------------------------------------------------------------------
// getters & setters

bool Hamburger::getKetchup()
{
    return ketchup;
}
void Hamburger::setKetchup(bool newKetchup)
{
    ketchup = newKetchup;
}

bool Hamburger::getMayo()
{
    return mayo;
}
void Hamburger::setMayo(bool newMayo)
{
    mayo = newMayo;
}
// ----------------------------------------------------------------------------------------
// prints hamburger attributes
void Hamburger::printHamburger()
{
    std::cout << "The " << sandwichType << " is a Hamburger sandwich. It has:" << std::endl;
    if(ketchup) std::cout << "Ketchup" << std::endl;
    if(mayo) std::cout << "Mayo" << std::endl;

    std::cout << meatType.getNumMeats() << " " << meatType.getMeatType() << " patties" << std::endl;
}
void Hamburger::setBurgerMeat(std::string newBurgerMeat)
{
    meatType.setMeatType(newBurgerMeat);
}