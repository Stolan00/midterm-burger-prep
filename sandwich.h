#ifndef SANDWICH_H
#define SANDWICH_H

#include <iostream>
#include "meat.h"

class Sandwich
{
    protected:
        std::string sandwichType;
        Meat meatType;
        bool lettuceWrap;

    public:

            //constructors
        Sandwich();
        Sandwich(std::string newST, Meat newMeat, bool newLWrap);
        Sandwich(const Sandwich& oldSandwich);

        std::string getSandwichType();
        void        setSandwichType(std::string newSandwichType);

        bool        getLettuceWrap();
        void        setLettuceWrap(bool newLettuceWrap);
};

#endif