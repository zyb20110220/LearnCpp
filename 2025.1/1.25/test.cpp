#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

// 检查字符串是否为数字
bool isNumber(const std::string &str)
{
	if (str.empty())
		return false;

	char *end = nullptr;
	std::strtod(str.c_str(), &end);

	return end != str.c_str() && *end == '\0';
}

// 检查是否有效算术表达式
bool isValidExpression(const std::string &input)
{
	std::istringstream iss(input);
	std::string num1, op, num2;

	// 尝试读取三个部分：数字1 运算符 数字2
	if (!(iss >> num1 >> op >> num2))
	{
		return false;
	}

	// 检查操作数是否为有效数字
	if (!isNumber(num1) || !isNumber(num2))
	{
		return false;
	}

	// 检查运算符是否有效
	return op == "+" || op == "-" || op == "*" || op == "/" || op == "^";
}

// 计算表达式结果
double calculatePower(const std::string &input)
{
	std::istringstream iss(input);
	double num1, num2;
	std::string op;

	iss >> num1 >> op >> num2;

	if (op == "+")
	{
		return num1 + num2;
	}
	else if (op == "-")
	{
		return num1 - num2;
	}
	else if (op == "*")
	{
		return num1 * num2;
	}
	else if (op == "/")
	{
		if (num2 == 0)
		{
			throw std::invalid_argument("除数不能为零。");
		}
		return num1 / num2;
	}
	else if (op == "^")
	{
		return std::pow(num1, num2);
	}

	throw std::invalid_argument("无效的运算符。");
}

int main()
{
	// 定义输入变量
	std::string input;

	// 提示用户输入算式
	std::cout << "请输入一个算式 (如: 2 + 3): ";
	std::getline(std::cin, input);

	// 检查是否是有效的算术表达式
	if (isValidExpression(input))
	{
		try
		{
			double result = calculatePower(input);
			std::cout << "结果是: " << result << std::endl;
		}
		catch (const std::invalid_argument &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
	{
		std::cout << "无效的输入，请提供一个有效的算术表达式。" << std::endl;
	}

	return 0;
}
