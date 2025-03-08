#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, b;
	char op;
	cin >> a >> op >> b;

	double result = 0;
	switch (op)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	}

	cout << fixed << setprecision(3) << result;
	return 0;
}