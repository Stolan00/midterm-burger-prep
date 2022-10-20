#ifndef HAMBURGER_H
#define HAMBURGER_H

#include "sandwich.h"

class Hamburger: public Sandwich
{
    bool ketchup;
    bool mayo;

    public:

            //constructors
        Hamburger();
        Hamburger(std::string newType, Meat newMeat, bool newLettuceWrap, bool newKetchup, bool newMayo);
        Hamburger(const Hamburger& oldHamburger);

            //getters & setters
        bool getKetchup();
        void setKetchup(bool newKetchup);

        bool getMayo();
        void setMayo(bool newMayo);

        //methods
        void printHamburger();

        void setBurgerMeat(std::string newBurgerMeat);
};

#endif