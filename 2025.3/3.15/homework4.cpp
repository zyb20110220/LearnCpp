#include <iostream>

bool isLeapYear(int year)
{
	return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int daysInMonth(int year, int month)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		return isLeapYear(year) ? 29 : 28;
	default:
		return 0;
	}
}

int main()
{
	int year, month;
	std::cin >> year >> month;

	int days = daysInMonth(year, month);
	if (days > 0)
	{
		std::cout << days << std::endl;
	}
	else
	{
		std::cout << "Invalid month!" << std::endl;
	}
	return 0;
}