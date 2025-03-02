#include <iostream>
using namespace std;

int main()
{
	int hp, attack;
	char isNight;

	cin >> hp >> attack >> isNight;

	if ((hp > 50 && attack >= 30) || (isNight == 'n'))
	{
		cout << "通过";
	}
	else
	{
		cout << "失败";
	}

	return 0;
}