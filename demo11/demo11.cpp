//C++ ö������
#include <iostream>

int m;
const int n = 8;

//const int input = 0;
//const int output = 1;
//const int append = 2;

enum open_modes
{
	input,
	output,
	append
	//�Զ���0,1,2��ʼ��,Ҳ�����Լ�������û�����ڸ��Ļ��������μ�1
};

int main()
{
	double d;
	open_modes a;//a��ö��open_modes����
	a = append;
	std::cout << a << std::endl;
	std::cout << "Ok!" << std::endl;
	return 0;
}