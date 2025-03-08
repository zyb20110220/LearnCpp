#include <iostream>
using namespace std;
int main()
{
	double x;
	cin >> x;
	if (x > 0)
	{
		cout << "正数";
	}
	else if (x == 0)
	{
		cout << "零";
	}
	else if (x < 0)
	{
		cout << "负数";
	}

	return 0;
}
