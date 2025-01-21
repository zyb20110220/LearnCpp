#include <iostream>
using namespace std;

char Upper_To_Lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return c;
}

int main()
{
	char Upper;
	cout << "输入一个大写字母: ";
	cin >> Upper;
	cout << "它的小写字母是: " << Upper_To_Lower(Upper) << endl;
	return 0;
}