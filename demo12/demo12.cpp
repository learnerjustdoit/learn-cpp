//C++ 类类型
#include <iostream>
#include <string>

using namespace std;

struct Cat //C语言里就有struct，C++继承了C语言的struct，C++的struct比C语言struct更丰富，它和class基本一样，除了默认访问级别是public
{
	double 体重;
	double 身高;
};


class Dog
{
	//没写默认是私有的，不过最好是写上private
	double 体重;
	double 身高;
};//注意结尾要有分号

class 学生
{
	//类成员：数据成员、成员函数（分为共有的和私有的）
};

class Sale_item
{
public:
	//类的操作，也即成员函数一般是共有的
private:
	//类的数据，也即数据成员一般是私有的
	std::string isbn; //书号
	unsigned units_sold; //销售数量
	double revenue; //金额
};

int main()
{
	double d = 0.0;
	int a;
	Dog b;
	学生 c;

	cout << "Hello, 类!" << endl;
	return 0;
}