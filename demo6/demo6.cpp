//C++ 声明和定义
#include <iostream>

int i; //变量定义,写在函数外边的这种变量叫做全局变量
extern int j; //变量声明
extern double pi=3.1415;//这也是变量定义,不建议这样写
//变量只能定义一次，其他文件要用，就需要声明

int main()
{
	double m = 2.71828;//局部变量，不能给其他文件使用
	j++;
	printf("%d\n", j);
	return 0;
}