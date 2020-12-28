//C++ bitset类型，主要用于处理二进制
#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	bitset<32> a;//a是32位二进制，初始化全是0
	cout << a << endl;
	a[5] = 1;//从后往前数的，从0开始
	cout << a << endl;
	a.set(3);//等价于a[3]=1;,a.set()不加参数，则全变为1，a.reset()则是变为0，用法和a.set()一样
	cout << a << endl;
	//a.flip();反转，0变为1，1变为0，可以加参数，反转特定位置，也可以不加参数，反转所有
	a.reset();
	a.set(8);
	a.flip();
	unsigned long bb = a.to_ulong();
	cout << bb << endl;

	bitset<16> b(0xffff);// 1111 1111 1111 1111
	cout << b << endl;

	bitset<32> c(0xffff);
	cout << c << endl;//前面不足的位置部分自动补0初始化

	bitset<32> e(156);
	cout << e << endl;

	string str("11111110000000000000000");
	bitset<32> f(str, 5, 4);//从str[5]开始往后4位初始化，前面不足的位置部分自动补0初始化
	cout << f << endl;

	bitset<32> g(str, str.size() - 4);//从str[str.size() - 4]一直到str结束初始化，前面不足的位置部分自动补0初始化
	cout << g << endl;

	bool is_set = e.any();//检查是否有一位是1
	if (is_set)
	{
		cout << "e里至少有一个1!" << endl;
	}
	// e.none()//检查是否一个1都没有

	size_t bits_set = e.count();//size_t是标准C库中定义的，在64位系统中为long long unsigned int，非64位系统中为long unsigned int
	cout << "e里一共有：" << bits_set << "个1!" << endl;
	cout << "e的大小：" << e.size() << endl;
	cout << "e里一共有：" << e.size() - bits_set << "个0!" << endl;

	//位运算
	bitset<8> eightBits;
	cout << "Enter a 8-bit sequence: ";
	cin >> eightBits;
	cout << endl;
	cout << eightBits << endl;

	bitset<8> eightBits2;
	cout << "Enter a 8-bit sequence: ";
	cin >> eightBits2;
	cout << endl;
	cout << eightBits2 << endl;

	cout << (eightBits & eightBits2) << endl; //位与
	cout << (eightBits | eightBits2) << endl; //位或
	cout << (eightBits ^ eightBits2) << endl; //位异或

	return 0;
}