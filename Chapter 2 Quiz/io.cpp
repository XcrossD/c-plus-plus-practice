#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter a number to add: ";
    int input {};
    std::cin >> input;
    return input;
}

void writeAnswer(int ans)
{
    std::cout << "The two numbers added together is: " << ans << "\n";
}