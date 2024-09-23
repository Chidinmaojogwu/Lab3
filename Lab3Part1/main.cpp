#include <iostream>

extern int pInteger;
extern int dollar;
extern int change;
extern int quarters;
extern int dime;
extern int nickel;
extern int pennies;

int main()
{
    int pInteger;

    std::cout << "Enter a positive integer <=100: ";
    std::cin >> pInteger;
    int dollar = 100;

    int change = dollar - pInteger;

    // Calculate the number of each coin
    int quarters = change / 25;//calcuate the quarters
    change = change % 25;

    int dime = change / 10;//calculate the dime
    change = change % 10;

    int nickel = change / 5;//calculate the nickel
    change = change % 5;

    int pennies = change;

    // Display the change
    std::cout << "Change from a dollar: " << std::endl;
    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dime << std::endl;
    std::cout << "Nickels: " << nickel << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;

}