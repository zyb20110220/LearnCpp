# Day2
## 课程

### cout 语句
```cpp
std::cout << 表达式1 << 表达式2 << ...... ; // 可以多表达式连接
```
### 变量
```cpp
int a("变量名") = 0("值");
```
#### 或
```cpp
int a;
a = 0
```

### cin 语句
```cpp
int n;
std::cin >> n; // 将控制台输入内容存入变量n
```

### ["计算周长和面积"程序](calculate.cpp)
```cpp
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "输入:";
	cin >> num;
	cout << "周长:" << num * 4 << endl;
	cout << "面积:" << num * num << endl;
	return 0;
}
```
### 示例
```
输入:10
周长:40
面积:100
```