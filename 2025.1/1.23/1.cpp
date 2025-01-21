#include <iostream>
using namespace std;

int main()
{
	const char *lst[] = {"+", "-", "*", "/"};
	for (int i = 0; i < 4; i++)
	{
		cout << lst[i] << endl;
	}
	return 0;
}