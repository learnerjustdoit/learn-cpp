#include <iostream>
#include <string>

using namespace std;

int main()
{
	//string���Ͳ���C�����е��ַ����飬����Ȼ�����±�����
	string str("hello");

	cout << str[0] << endl;
	cout << str[4] << endl;

	//����int
	for (string::size_type x = 0; x != str.size(); x++)
	{
		cout << str[x] << ' ';
	}

	cout << endl;

	for (string::size_type i = 2; i != str.size(); ++i)
	{
		str[i] = '*';
	}

	cout << str << endl;

	return 0;
}