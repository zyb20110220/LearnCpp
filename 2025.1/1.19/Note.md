# Day1

## 课程

### C++

- 一门程序设计语言
- 包括但不限于系统软件开发、游戏开发、嵌入式系统、图形图像处理、金融领域(需要高性能、系统级别控制、复杂算法实现的领域)
- 具有准确性、实时性

### C++基础框架

```cpp
#include <iostream> // 头文件("工具箱")
using namespace std; // 命名空间(声明命名空间可以使代码更简洁)

// 主函数
int main()
{
	// 程序执行代码
	return 0; // 程序结束运行
}
```

### cout 语句

```cpp
std::cout << "Hello World"; // 控制台输出Hello World
```

### ["控制台输出 Hello World"程序](helloworld.cpp)

#### 代码:

```cpp
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World";
	return 0;
}
```

#### 输出效果:

```
Hello World
```

### 换行符

```cpp
std::endl // 等于"\n"
```

### ["输出表情"程序](emoji.cpp)

#### 代码:

```cpp
#include <iostream>
using namespace std;

int main()
{
	cout << " -^--^-" << endl;
	cout << "(。·w·。)";
}
```

#### 输出效果:

```
 -^--^-
(。·w·。)
```

## 作业

#### [代码:](homework.cpp)

```cpp
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
```

#### 输出效果:

```
*
**
***
****
```
