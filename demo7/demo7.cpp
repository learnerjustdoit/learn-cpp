//C++ ���ֵ�������
#include <iostream>
#include <string>

std::string s1 = "hello";//ȫ�ֱ�������ȫ��������

int a = 0;

void test()
{
	int a = 1;//��ñ�д����������
	std::cout << s1 << std::endl;
	//std::cout << s2 << std::endl;
	std::cout << a << std::endl; // �������أ����Σ����ͽ�ԭ��ȡ����������������a
}

int main()
{
	std::string s2 = "world";
	int sum = 0;//�ֲ��������оֲ�������
	int a = 2;
	a++;
	for (int val = 1; val <= 10; ++val) //val���������������������
	{
		sum += val;
	}
	//std::cout << val << std::endl;
	std::cout << sum << std::endl;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << a << std::endl;
	return 0;
}
//�����������������������ռ�������