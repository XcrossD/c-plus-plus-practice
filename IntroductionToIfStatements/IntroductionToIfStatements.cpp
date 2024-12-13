// IntroductionToIfStatements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isPrime(int x) {
    if (x == 2) {
        return true;
    }
    else if (x == 3) {
        return true;
    }
    else if (x == 5) {
        return true;
    }
    else if (x == 7) {
        return true;
    }
    return false;
}

int main()
{
    int x{ 0 };
    std::cout << "Enter a number 0 through 9 (inclusive): ";
    std::cin >> x;

    if (isPrime(x)) {
        std::cout << "The digit is prime\n";
    }
    else {
        std::cout << "The digit is not prime\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
