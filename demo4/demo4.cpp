//C++ 变量
#include <iostream>

int main()
{
	//等号左边的是左值，右边的是右值，左值必须是能被修改的
	//变量命名由数字字母下划线组合而成， 不能数字开头，区分大小写，不能使用C++关键字等
	//命名习惯：小写，_代替空格
	int a = 2;
	int b = 10;
	std::cout << a*b << std::endl;
	return 0;
}