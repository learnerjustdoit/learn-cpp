#include <iostream>
#include <string>
//#include <ctype.h> //C�����е�д��
#include <cctype> //C++���Ƽ�д��������C�����еı�׼�⺯��

using namespace std;

int main()
{
	string s("Hello, World!");
	string::size_type punct_cnt = 0;//�����ŵĸ���

	for (string::size_type i = 0; i != s.size(); i++)
	{
		if (ispunct(s[i]))//����ַ��Ƿ��Ǳ�����
		{
			++punct_cnt;
		}
	}
	cout << "����ַ������� " << punct_cnt << " ��������." << endl;

	//isalnum(c) ����ַ��Ƿ�����ĸ������
	//isalpha(c) ����ַ��Ƿ�����ĸ
	//iscntrl(c) ����ַ��Ƿ��ǿ����ַ�
	//isdigit(c) ����ַ��Ƿ�������
	//islower(c) ����ַ��Ƿ���Сд
	//isupper(c) ����ַ��Ƿ��Ǵ�д
	//ispunct(c) ����ַ��Ƿ��Ǳ�����
	//isspace(c) ����ַ��Ƿ��ǿո�
	//isxdigit(c) ����ַ��Ƿ���16������
	//tolower(c) �ַ���Сд
	//toupper(c) �ַ����д

	return 0;
}