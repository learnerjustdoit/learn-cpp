//C++ ������
#include <iostream>
#include <string>

using namespace std;

struct Cat //C���������struct��C++�̳���C���Ե�struct��C++��struct��C����struct���ḻ������class����һ��������Ĭ�Ϸ��ʼ�����public
{
	double ����;
	double ���;
};


class Dog
{
	//ûдĬ����˽�еģ����������д��private
	double ����;
	double ���;
};//ע���βҪ�зֺ�

class ѧ��
{
	//���Ա�����ݳ�Ա����Ա��������Ϊ���еĺ�˽�еģ�
};

class Sale_item
{
public:
	//��Ĳ�����Ҳ����Ա����һ���ǹ��е�
private:
	//������ݣ�Ҳ�����ݳ�Աһ����˽�е�
	std::string isbn; //���
	unsigned units_sold; //��������
	double revenue; //���
};

int main()
{
	double d = 0.0;
	int a;
	Dog b;
	ѧ�� c;

	cout << "Hello, ��!" << endl;
	return 0;
}