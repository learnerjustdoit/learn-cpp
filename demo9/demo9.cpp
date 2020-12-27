//C++ 引用
#include <iostream>

int main()
{
	int 张飞 = 1024;
	int &张翼德 = 张飞;//使用&符号,引用就是别名

	张飞++;
	std::cout << 张飞 << std::endl;
	std::cout << 张翼德 << std::endl;

	int ival = 1024;
	int &refval = ival;
	//int &refval2; 引用变量定义时必须初始化，
	//int &refval3 = 10; 必须引用变量，不能是字面值常量的别名
	int i = 1024, i2 = 2048;
	int &r = i, &r2 = i2;
	std::cout << "Ok!" << std::endl;

	//const引用
	const int const_ival = 1024;
	const int &refconst_val = const_ival;
	//int &rref = const_ival; 非const引用不能引用const常量

	const int &rrr = 42;//const引用可以引用字面值常量
	double pi = 3.14;
	const double &ppi = pi; 
	//const int &ppi = pi;  ppi就是3了，小数部分被舍弃

	std::cout << ppi << std::endl;

	return 0;
}