#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;

	if (size >= 10)
		cout << "good";
	else if (size >= 6)
		cout << "so so";
	else
		cout << "bad";

	return 0;
}