#include <iostream>
#include <string>
using namespace std;

int main()
{
	string st("hello");
	cout << "字符串的大小（字符的个数）：" << st.size() << endl;

	//int size = st.size();
	string::size_type size = st.size();//int可能是负的，这个比起int更安全
	cout << size << endl;

	string s;
	if (s.size() == 0)
	{
		cout << "这是一个空字符串!\n";
	}
	if (s.empty())
	{
		cout << "这是一个空字符串!\n";
	}

	string a("张飞");
	string b("刘备");

	if (a==b)
	{
		cout << "张飞和刘备相等!" << endl;
	}
	else
	{
		if (a>b)
		{
			cout << "张飞比刘备大!" << endl;
		}
		else
		{
			cout << "张飞比刘备小!" << endl;
		}
	}

	string ss1("hello, ");
	string ss2("world");
	string ss3 = ss1 + ss2;
	cout << ss3 << endl;
	ss1 += ss2;
	cout << ss1 << endl;

	//string ss4 = "hello" + ", "; //在其他语言中合法，C++中不行
	string ss5 = ss1 + ", " + ss2; //加号两边其中有一个是string类型就是合法的
	//string ss6 = "hello" + ", " + ss2;//C++中非法
	cout << ss5 << endl;

	return 0;
}