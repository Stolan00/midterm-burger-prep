#include "sandwich.h"
// ----------------------------------------------------------------------------------------

    //default constructor
Sandwich::Sandwich()
{
    sandwichType = "";
    Meat meatType;
    lettuceWrap  = false;
}
    //param construtor
Sandwich::Sandwich(std::string newST, Meat newMeat, bool newLWrap)
{
    sandwichType = newST;

    lettuceWrap = newLWrap;
}
    //copy constructor
Sandwich::Sandwich(const Sandwich& oldSandwich)
{
    sandwichType = oldSandwich.sandwichType;

    lettuceWrap  = oldSandwich.lettuceWrap;
}
// ----------------------------------------------------------------------------------------
    //getters and setters
std::string Sandwich::getSandwichType()
{
    return sandwichType;
}
void Sandwich::setSandwichType(std::string newSandwichType)
{
    sandwichType = newSandwichType;
}

bool Sandwich::getLettuceWrap()
{
    return lettuceWrap;
}
void Sandwich::setLettuceWrap(bool newLettuceWrap)
{
    lettuceWrap = newLettuceWrap;
}

