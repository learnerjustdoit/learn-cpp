//C++ ����
#include <iostream>

int main()
{
	int �ŷ� = 1024;
	int &����� = �ŷ�;//ʹ��&����,���þ��Ǳ���

	�ŷ�++;
	std::cout << �ŷ� << std::endl;
	std::cout << ����� << std::endl;

	int ival = 1024;
	int &refval = ival;
	//int &refval2; ���ñ�������ʱ�����ʼ����
	//int &refval3 = 10; �������ñ���������������ֵ�����ı���
	int i = 1024, i2 = 2048;
	int &r = i, &r2 = i2;
	std::cout << "Ok!" << std::endl;

	//const����
	const int const_ival = 1024;
	const int &refconst_val = const_ival;
	//int &rref = const_ival; ��const���ò�������const����

	const int &rrr = 42;//const���ÿ�����������ֵ����
	double pi = 3.14;
	const double &ppi = pi; 
	//const int &ppi = pi;  ppi����3�ˣ�С�����ֱ�����

	std::cout << ppi << std::endl;

	return 0;
}