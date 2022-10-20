#ifndef MEAT_H
#define MEATH_H

#include <iostream>

class Meat
{
    std::string name;
    std::string type;
    int numMeats;

    public:

            //constructors
        Meat();
        Meat(std::string newName, std::string newType, int newNumMeats);
        Meat(const Meat& oldMeat);

            //getters and setters
        std::string getMeatName();
        void        setMeatName();

        std::string getMeatType();
        void        setMeatType(std::string newMeatType);

        int         getNumMeats();
        void        setNumMeats();
};

#endif