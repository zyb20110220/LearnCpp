#include <iostream>
#include <string>
using namespace std;

int main()
{
	for (int i = 1; i < 5; i++)
		cout << string(i, '*') << '\n';
	return 0;
}