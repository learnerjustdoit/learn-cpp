#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;


int main()
{
	char name[10]="张飞"; //C语言的做法
	string name2("刘备"); //C++的做法
	
	cout << name << endl;
	cout << name2 << endl;

	//4种初始化方法
	string s1;//默认初始化为空字符串,没写小括号，调用string的默认构造函数
	string s2("hello");//小括号就是调用string对象的构造函数
	string s3(s2);
	string s4(10, 'a');
	string s5 = "hello";//这是不好的方法，这种方法比第2种慢，会先默认初始化，再赋值

	cout << "第1种：" << s1 << endl;
	cout << "第2种：" << s2 << endl;
	cout << "第3种：" << s3 << endl;
	cout << "第4种：" << s4 << endl;
	cout << "第5种：" << s5 << endl;

	cout << s2 << endl; //这是string类型，C++风格的string字符串
	cout << "hello" << endl; //这是字符数组，C风格的字符串，和上面的s2是不一样的


	//string s;
	//cout << "请输入你的姓名：" << endl;
	//cin >> s;//cin读取忽略开头的空白字符（包括空格换行制表符等），读取非空白字符直到再次遇到空白字符
	//cout << s << endl;

	string your_name;
	cout << "请输入你的姓名：" << endl;
	getline(cin, your_name);//读取完整的一行
	cout << your_name << endl;

	return 0;
}