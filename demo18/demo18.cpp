#include <iostream>
#include <string>
//#include <ctype.h> //C语言中的写法
#include <cctype> //C++中推荐写法，导入C语言中的标准库函数

using namespace std;

int main()
{
	string s("Hello, World!");
	string::size_type punct_cnt = 0;//标点符号的个数

	for (string::size_type i = 0; i != s.size(); i++)
	{
		if (ispunct(s[i]))//检查字符是否是标点符号
		{
			++punct_cnt;
		}
	}
	cout << "这个字符串里有 " << punct_cnt << " 个标点符号." << endl;

	//isalnum(c) 检查字符是否是字母或数字
	//isalpha(c) 检查字符是否是字母
	//iscntrl(c) 检查字符是否是控制字符
	//isdigit(c) 检查字符是否是数字
	//islower(c) 检查字符是否是小写
	//isupper(c) 检查字符是否是大写
	//ispunct(c) 检查字符是否是标点符号
	//isspace(c) 检查字符是否是空格
	//isxdigit(c) 检查字符是否是16进制数
	//tolower(c) 字符变小写
	//toupper(c) 字符变大写

	return 0;
}