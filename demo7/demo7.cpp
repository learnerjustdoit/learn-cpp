//C++ 名字的作用域
#include <iostream>
#include <string>

std::string s1 = "hello";//全局变量，有全局作用域

int a = 0;

void test()
{
	int a = 1;//最好别写这种重名的
	std::cout << s1 << std::endl;
	//std::cout << s2 << std::endl;
	std::cout << a << std::endl; // 变量隐藏（屏蔽），就近原则，取最近的作用域里面的a
}

int main()
{
	std::string s2 = "world";
	int sum = 0;//局部变量，有局部作用域
	int a = 2;
	a++;
	for (int val = 1; val <= 10; ++val) //val是语句变量，有语句作用域
	{
		sum += val;
	}
	//std::cout << val << std::endl;
	std::cout << sum << std::endl;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << a << std::endl;
	return 0;
}
//其他作用域：类作用域，命名空间作用域