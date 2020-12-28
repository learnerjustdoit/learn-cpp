//C++命名空间的using声明
#include <iostream>
#include <string>

//using std::cin;
//using std::string;
//using std::cout;
//using std::endl;
using namespace std;

int main()
{
	//就像文件放在文件夹里，名称放在名称空间里！
	//::是作用域操作符，前面是名称空间
	//cout名称，endl名称
	cout << "Hello 名称空间!" << endl;

	string s;
	cout << "请输入一个字符串：";
	cin >> s;
	cout << "你输入的是：" << s << endl;
	return 0;
}