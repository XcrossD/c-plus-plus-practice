#include <iostream>

void quiz1();
void chapter1Question3();

int main()
{
	std::cout << "Enter an integer: ";

	int num{ };
	std::cin >> num;

	// bad version
	// num = num * 2;
	// std::cout << "Double that number is: " << num << '\n';

	// mostly good version
	// int doubleNum{ num * 2 };
	// std::cout << "Double that number is: " << doubleNum << '\n';

	// preferred version
	std::cout << "Double that number is: " << num * 2 << '\n';

	quiz1();

	chapter1Question3();
	
	return 0;
}

void quiz1()
{
	std::cout << "Enter an integer: ";

	int num{  };
	std::cin >> num;

	std::cout << "Double " << num << " is: " << num * 2 << '\n';
	std::cout << "Triple " << num << " is: " << num * 3 << '\n';
}

void chapter1Question3()
{
	std::cout << "Enter an integer: ";
	int num1{ };
	std::cin >> num1;

	std::cout << "Enter another integer: ";
	int num2{ };
	std::cin >> num2;

	std::cout << num1 << " + " << num2 << " is " << num1 + num2 << ".\n";
	std::cout << num1 << " - " << num2 << " is " << num1 - num2 << ".\n";
}