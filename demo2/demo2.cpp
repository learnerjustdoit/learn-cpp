//C++������������
//void���� ���ͣ�bool, char, wchat_t) (short, int, long, long long һ����int�� ���ɷ�Ϊsigned��unsigned
//������(float, double, long double) һ����double
#include <iostream>
#include "Dog.h"

int main()
{
	int a;
	Dog b;
	std::cout << "bool: \t\t" << sizeof(bool) << std::endl;
	std::cout << "char: \t\t" << sizeof(char) << std::endl;
	std::cout << "wchar_t: \t" << sizeof(wchar_t) << std::endl;
	std::cout << "short: \t\t" << sizeof(short) << std::endl;
	std::cout << "int: \t\t" << sizeof(int) << std::endl;
	std::cout << "long: \t\t" << sizeof(long) << std::endl;
	std::cout << "long long: \t" << sizeof(long long) << std::endl;
	std::cout << "float: \t\t" << sizeof(float) << std::endl;
	std::cout << "double: \t" << sizeof(double) << std::endl;
	std::cout << "long double: \t" << sizeof(long double) << std::endl;
	return 0;
}