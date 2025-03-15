#include <iostream>
using namespace std;

int calculate(int times)
{
	int num = 1;
	for (int i = 0; i < times; i++)
		num *= 10;
	return num;
}

int main()
{
	int n, times, num;
	cin >> n >> times;
	cout << n % calculate(times);
	return 0;
}