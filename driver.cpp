#include "hamburger.h"
#include <string>

int main()
{
    Meat doublePatty("Double Patty", "Beef", 2);

    Hamburger doubleBurger("Double Beef Burger", doublePatty, false, true, true);

    //doubleBurger.print
    doubleBurger.printHamburger();

    std::cout << std::endl << std::endl;
    
    doubleBurger.setBurgerMeat("Chicken");

    doubleBurger.printHamburger();
    //change to chicken
    return 0;
}
