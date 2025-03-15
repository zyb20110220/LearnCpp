#include <iostream>
#include <string>

int main()
{
	int a, b;
	char op;
	std::cin >> a >> b >> op;

	switch (op)
	{
	case '+':
		std::cout << a + b << std::endl;
		break;
	case '-':
		std::cout << a - b << std::endl;
		break;
	case '*':
		std::cout << a * b << std::endl;
		break;
	case '/':
		if (b == 0)
		{
			std::cout << "Divided by zero!" << std::endl;
		}
		else
		{
			std::cout << a / b << std::endl;
		}
		break;
	default:
		std::cout << "Invalid operator!" << std::endl;
	}

	return 0;
}