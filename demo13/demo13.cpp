//C++编写自己的头文件
#include <iostream>
#include <string>
#include "Dog.h"
#include "demo.h"
#include "Sales_item.h"

using std::cout;
using std::string;

//main()函数只能写在一个源文件中
int main()
{
	string name;
	Sales_item a;
	Dog dog;
	cout << "Hello 头文件!\n";
	return 0;
}
//程序设计全过程：编辑、预处理、编译、链接、执行/运行
//避免多重包含，使用头文件保护符 #ifndef xxx #define xxx #endif