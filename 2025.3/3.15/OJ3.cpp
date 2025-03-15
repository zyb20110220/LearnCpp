#include <iostream>
using namespace std;

int main()
{
	int score;
	cin >> score;
	score /= 10;
	switch (score)
	{
	case 10:
		cout << "巅峰学者";
		break;
	case 9:
		cout << "卓越之星";
		break;
	case 8:
		cout << "智慧之光";
		break;
	case 7:
		cout << "勤学新秀";
		break;
	case 6:
		cout << "潜力突破";
		break;
	default:
		cout << "成长萌芽";
	}
	return 0;
}
