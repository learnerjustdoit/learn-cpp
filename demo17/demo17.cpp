#include <iostream>
#include <string>

using namespace std;

int main()
{
	//string类型不是C语言中的字符数组，但仍然可以下标索引
	string str("hello");

	cout << str[0] << endl;
	cout << str[4] << endl;

	//代替int
	for (string::size_type x = 0; x != str.size(); x++)
	{
		cout << str[x] << ' ';
	}

	cout << endl;

	for (string::size_type i = 2; i != str.size(); ++i)
	{
		str[i] = '*';
	}

	cout << str << endl;

	return 0;
}