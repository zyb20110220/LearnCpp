#include <iostream>
using namespace std;

int main()
{
	int temperature;
	cin >> temperature;

	if (temperature >= 10 && temperature < 35)
	{
		cout << "适中";
	}
	else
	{
		cout << "太冷或太热";
	}

	return 0;
}