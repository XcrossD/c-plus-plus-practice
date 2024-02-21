#include<iostream>

int readNumber()
{
    int input;
    std::cin >> input;
    return input;
}

void writeAnswer(int ans)
{
    std::cout << "The two numbers added together is: " << ans << "\n";
}