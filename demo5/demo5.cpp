#include <iostream>
#include <string>

class Sales_item
{
	//构造函数
};

int a, b; //在main()函数外边自动初始化为0
int c = 0;

int main()
{
	int units_sold;
	double sales_price, avg_price;
	std::string title;
	Sales_item curr_book;//会调用默认的构造函数进行初始化

	int ival(1024);//直接初始化
	int ival2 = 1024; //复制初始化

	std::cout << ival << std::endl;
	std::cout << ival2 << std::endl;
	std::cout << "Ok!" << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}