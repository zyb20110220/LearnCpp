#include <iostream>
using namespace std;

int main()
{
	char c;
	cout << "输入一个小写字母: ";
	cin >> c;
	cout << "它的大写字母是: " << static_cast<char>(c - 32) << endl;
	return 0;
}