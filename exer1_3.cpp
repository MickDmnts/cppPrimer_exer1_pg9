#include <iostream>

void PrintHelloWorld()
{
	std::cout << "Hello World" << std::endl;
}

void PrintMultiplication()
{
	int value1 = 15, value2 = 15;
	std::cout << "The addition of " << value1 << " and " << value2 << " is " << value1 + value2 << std::endl;
}

int main()
{
	PrintHelloWorld();
	PrintMultiplication();
	return 0;
}