#include <iostream>

void PrintHelloWorld()
{
	std::cout << "Hello World" << std::endl;
}

void PrintMultiplication(int v1,int v2)
{
	int total = v1 + v2;
	std::cout << "The addition of " << v1 << " and " << v2 << " is " << total << std::endl;
}

void SeparateStatements(int v1, int v2)
{
	int total = v1 + v2;

	std::cout << "The total of " << v1;
	std::cout << std::endl;

	std::cout << " and " << v2;
	std::cout << std::endl;

	std::cout << " is " << total;
	std::cout << std::endl;
}

void CodeFragmentIsLegal()
{
	/*int total = v1 + v2;

	std::cout << "The sum of " << v1;
	<< " and " << v2;
	<< " is " << total << std::endl;*/

	//The above code fragment will throw an "expected an expression" error at line 33 and 34 therefore it's not legal.
	//The reason of it not compiling is that the output operator (<<) expects an ostream object at it's left hand side in which here, doesn't exist
	// because the ; in the previous line practically ends the statement.
	//A possible fix is just to remove the ; after v1 and v2 at lines 32 and 33, then it will compile and execute.
}

int main()
{
	std::cout << "Please input two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;

	PrintHelloWorld(); // exer1.3
	system("pause");

	PrintMultiplication(v1,v2); //exer1.4
	system("pause");

	SeparateStatements(v1, v2); //exer1.5
	system("pause");

	CodeFragmentIsLegal(); //exer1.6

	return 0;
}