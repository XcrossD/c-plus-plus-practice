#include <iostream>

int main()
{
	std::cout << "Hello, world!" << '\n';

	std::cout << "Please enter a number: ";

	int x{ };
	std::cin >> x;

	std::cout << "You have entered: " << x << '\n';

	std::cout << "Please enter two numbers separated by a space: ";

	int y{ };
	int z{ };
	std::cin >> y >> z;

	std::cout << "You have entered: " << y << " and " << z << '\n';
	return 0;
}
