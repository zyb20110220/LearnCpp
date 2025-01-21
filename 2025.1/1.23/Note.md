# Day5
## 课程
### 字符型
#### 特点
- 成对的引号
- 只有一个字符
- 例:字母、数字、标点符号
  
#### 字符型的定义及赋值
```cpp
char name = "value"; // name是变量名,value是值
```
### ASCII码
- 全名:美国信息交换标准代码
- 某个字符在计算机中实际存储的数值大小
- 大小规则:数字字符 < 大写字母 < 小写字母
### char转ASCII
#### [代码:](chartoascii.cpp)
```cpp
#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	int n = c;
	cout << n;
	return 0;
}
```
#### 示例:
```
A
65
```
### ASCII转char
#### [代码](asciitochar.cpp):
```cpp
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char c = n;
	cout << c;
	return 0;
}
```
#### 示例:
```
65
A
```
### 编程实战1
#### [代码](1.cpp):
```cpp
#include <iostream>
using namespace std;

int main()
{
	const char *lst[] = {"+", "-", "*", "/"};
	for (int i = 0; i < 4; i++)
	{
		cout << lst[i] << endl;
	}
}
```
#### 输出结果:
```
+
-
*
/
```
### 编程实战2
#### [代码](2.cpp):
```cpp
#include <iostream>
using namespace std;

int main()
{
	char c;
	cout << "请输入任意字符:";
	cin >> c;
	cout << "您输入的字符是:" << c;
	return 0;
}
```
#### 示例:
```
请输入任意字符:A
您输入的字符是:A
```
## 作业
#### [代码:](homework.cpp)
```cpp
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
```
#### 示例:
```
输入一个大写字母: A
它的小写字母是: a
```