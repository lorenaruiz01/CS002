#include <iostream>

int main()
{
    int saved_cents, total_cents, quarters, dimes, nickels, pennies;

    std::cout << "Please enter a number greater than 500: ";
    std:: cin >> total_cents;
    saved_cents = total_cents; //preserving the original value so we can print at the end.

    quarters = total_cents / 25; //figures out how many quarters
    total_cents = total_cents - (quarters * 25); //figures out how mny cents remain.

    dimes = total_cents / 10; //figures out how many dimes
    total_cents = total_cents - (dimes * 10); //figures out how many cents remain.
    
    nickels = total_cents / 5; //figures out how many nickels
    total_cents = total_cents - (nickels * 5);

    pennies = total_cents % 5; //figure out how many cents using modulo

    std::cout << saved_cents << " cents has " << quarters << " quarters ";
    std::cout << dimes << " dimes " << nickels << " nickels and " << pennies << " pennies.\n";
    
    return 0;
}