#include "meat.h"
// ----------------------------------------------------------------------------------------

    //constructors

    //default
Meat::Meat()
{
    name = "", type = "";
    numMeats = 0;
}
    //param constructor
Meat::Meat(std::string newName, std::string newType, int newNumMeats)
{
    name = newName, type = newType;
    numMeats = newNumMeats;
}
    //copy constructor
Meat::Meat(const Meat& oldMeat)
{
    name = oldMeat.name, type = oldMeat.type;
    numMeats = oldMeat.numMeats;
}
// ----------------------------------------------------------------------------------------

void Meat::setMeatType(std::string newMeatType)
{
    type = newMeatType;
}

// ----------------------------------------------------------------------------------------
int Meat::getNumMeats()
{
    return numMeats;
}
// ----------------------------------------------------------------------------------------
std::string Meat::getMeatType()
{
    return type;
}