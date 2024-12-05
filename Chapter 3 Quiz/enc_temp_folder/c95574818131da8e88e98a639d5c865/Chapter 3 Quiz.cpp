#include <iostream>

// Question #1
// The following program is supposed to add two numbers, but doesn’t work correctly.
/*
int readNumber(int x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x{};
	readNumber(x);
	x = x + readNumber(x);
	writeAnswer(x);

	return 0;
}
*/
// The issue mainly lies in the returned value from readNumber() is not assigned to x.
// Technically one could still pass in x into readNumber() but it is considered bad practice.

// Question #2
// The following program is supposed to divide two numbers, but doesn’t work correctly.
/*
int readNumber()
{
	std::cout << "Please enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The quotient is: " << x << '\n';
}

int main()
{
	int x{ };
	int y{ };
	x = readNumber();
	x = readNumber();
	writeAnswer(x / y);

	return 0;
}
*/
// The issue is that x is assigned to twice, leaving y at its uninitialized value 0

// Question #3
// What does the call stack look like in the following program when the point of execution is on line 4? Only the function names are needed for this exercise, not the line numbers indicating the point of return.
/*
void d()
{ // here
}

void c()
{
}

void b()
{
	c();
	d();
}

void a()
{
	b();
}

int main()
{
	a();

	return 0;
}
*/
/*
The call stack looks like this:
d()
b()
a()
main()
*/

// Question #4
// Extra credit: The following program is supposed to add two numbers, but doesn’t work correctly.
int readNumber()
{
	std::cout << "Please enter a number: ";
	char x{};
	std::cin >> x;

	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x{ readNumber() };
	int y{ readNumber() };
	writeAnswer(x + y);

	return 0;
}