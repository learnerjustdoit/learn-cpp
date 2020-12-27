//C++ 枚举类型
#include <iostream>

int m;
const int n = 8;

//const int input = 0;
//const int output = 1;
//const int append = 2;

enum open_modes
{
	input,
	output,
	append
	//自动是0,1,2初始化,也可以自己给定，没给的在给的基础上依次加1
};

int main()
{
	double d;
	open_modes a;//a是枚举open_modes类型
	a = append;
	std::cout << a << std::endl;
	std::cout << "Ok!" << std::endl;
	return 0;
}