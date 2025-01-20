# Day2
## 课程

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
### 运行效果
```
输入:10
周长:40
面积:100
```