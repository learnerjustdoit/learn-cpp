#include <iostream>
#include <string>
using namespace std;

int main()
{
	string st("hello");
	cout << "�ַ����Ĵ�С���ַ��ĸ�������" << st.size() << endl;

	//int size = st.size();
	string::size_type size = st.size();//int�����Ǹ��ģ��������int����ȫ
	cout << size << endl;

	string s;
	if (s.size() == 0)
	{
		cout << "����һ�����ַ���!\n";
	}
	if (s.empty())
	{
		cout << "����һ�����ַ���!\n";
	}

	string a("�ŷ�");
	string b("����");

	if (a==b)
	{
		cout << "�ŷɺ��������!" << endl;
	}
	else
	{
		if (a>b)
		{
			cout << "�ŷɱ�������!" << endl;
		}
		else
		{
			cout << "�ŷɱ�����С!" << endl;
		}
	}

	string ss1("hello, ");
	string ss2("world");
	string ss3 = ss1 + ss2;
	cout << ss3 << endl;
	ss1 += ss2;
	cout << ss1 << endl;

	//string ss4 = "hello" + ", "; //�����������кϷ���C++�в���
	string ss5 = ss1 + ", " + ss2; //�Ӻ�����������һ����string���;��ǺϷ���
	//string ss6 = "hello" + ", " + ss2;//C++�зǷ�
	cout << ss5 << endl;

	return 0;
}