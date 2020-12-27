//C++ 字面值常量
#include <iostream>
#include <locale>
#include <wchar.h>
#include <stdlib.h>

int main()
{
	int a, b;
	a = 1;
	b = 2;
	std::cout << a + b << std::endl;
	std::cout << 2 + 3 << std::endl;

	//整型字面值默认是int或long 10L就是long,10LL就是long long,10uLL就是unsigned long long
	std::cout << 20 << std::endl;
	std::cout << 024 << std::endl; //8进制
	std::cout << 0x14 << std::endl; //16进制

	//浮点型字面值默认是double 3.14159f就是float, 3.14159L就是long double
	std::cout << 3.14159 << std::endl;

	//科学计数法 3.14159E2f就是float,3.14159E2L就是long double
	std::cout << 3.14159E2 << std::endl;
	std::cout << 3.14159e-2 << std::endl;

	//布尔字面值就只有true和false
	bool test = false;
	std::cout << true << std::endl;
	std::cout << false << std::endl;
	//逻辑运算
	std::cout << (true && false) << std::endl;
	std::cout << (true || false) << std::endl;

	//字符字面值
	char x = 'a';//char字符，一个字节
	wchar_t y = L'中';//宽字符，两个字节

	printf("%c\n", 'A');//不能是宽字符
	setlocale(LC_ALL, "chs");
	wprintf(L"%lc\n", L'中');

	//转义
	std::cout << "我说: \"我在学习C++!\"" << std::endl;
	std::cout << "我的文件夹是：c:\\bit\\test" << std::endl;
	std::cout << "hello\n";
	std::cout << "hello\r\n";
	std::cout << "2\nM" << std::endl;
	std::cout << "\062\012\115" << std::endl; //\012 012是8进制10，对应\n的ascii码
	std::cout << "\x032\x00a\x04d" << std::endl; //\x032 x032是16进制50，对应2的ascii码

	//字符串字面值
	std::cout << "hello world!" << std::endl;
	// 字符就是一个字节
	std::cout << 'A' << std::endl;
	// 字符串 "A"='A','\0'会在后面加一个'\0'（看不见的字符)
	std::cout << "A" << std::endl;

	std::cout << "这是普通字符串" << std::endl;
	wprintf(L"%ls\n", L"这是宽字符串");

	//字符串拼接
	std::cout << "a multi-line "
		"string literal "
		"using concatenation" << std::endl;

	std::cout << "a multi-line \
string literal \
using concatenation" << std::endl;

	return 0;
}