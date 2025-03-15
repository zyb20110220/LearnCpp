# 3.15

## 课程

### switch

```cpp
switch(值/表达式) {
	case 常量1: 
		语句块1; 
		break;
	case 常量2:
		语句块2;
		break;
	case 常量3:
		语句块3;
		break; // 防止程序运行不相干的代码
	...
	default: 
		语句块n; // 当switch表达式的值与任何case标签都不匹配时,程序会执行default中的代码
}

```