#include <iostream>
using namespace std;

int calculate(int day)
{
	if (day <= 5)
	{
		return (day + 2);
	}
	else
		return (day - 5);
}

int main()
{
	int day;
	cin >> day;
	cout << calculate(day);
	return 0;
}