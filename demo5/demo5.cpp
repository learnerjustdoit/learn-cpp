#include <iostream>
#include <string>

class Sales_item
{
	//���캯��
};

int a, b; //��main()��������Զ���ʼ��Ϊ0
int c = 0;

int main()
{
	int units_sold;
	double sales_price, avg_price;
	std::string title;
	Sales_item curr_book;//�����Ĭ�ϵĹ��캯�����г�ʼ��

	int ival(1024);//ֱ�ӳ�ʼ��
	int ival2 = 1024; //���Ƴ�ʼ��

	std::cout << ival << std::endl;
	std::cout << ival2 << std::endl;
	std::cout << "Ok!" << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}