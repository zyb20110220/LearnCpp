#include <iostream>
using namespace std;

int main()
{
	int key;
	cin >> key;
	switch (key)
	{
	case 1:
		cout << "山河社稷图";
		break;
	case 2:
		cout << "混元金斗";
		break;
	case 3:
		cout << "阴阳镜";
		break;
	case 4:
		cout << "乾坤圈";
		break;
	case 5:
		cout << "如意金箍棒";
		break;
	default:
		cout << "你已进入安全屋。";
	}
	return 0;
}