#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;


int main()
{
	char name[10]="�ŷ�"; //C���Ե�����
	string name2("����"); //C++������
	
	cout << name << endl;
	cout << name2 << endl;

	//4�ֳ�ʼ������
	string s1;//Ĭ�ϳ�ʼ��Ϊ���ַ���,ûдС���ţ�����string��Ĭ�Ϲ��캯��
	string s2("hello");//С���ž��ǵ���string����Ĺ��캯��
	string s3(s2);
	string s4(10, 'a');
	string s5 = "hello";//���ǲ��õķ��������ַ����ȵ�2����������Ĭ�ϳ�ʼ�����ٸ�ֵ

	cout << "��1�֣�" << s1 << endl;
	cout << "��2�֣�" << s2 << endl;
	cout << "��3�֣�" << s3 << endl;
	cout << "��4�֣�" << s4 << endl;
	cout << "��5�֣�" << s5 << endl;

	cout << s2 << endl; //����string���ͣ�C++����string�ַ���
	cout << "hello" << endl; //�����ַ����飬C�����ַ������������s2�ǲ�һ����


	//string s;
	//cout << "���������������" << endl;
	//cin >> s;//cin��ȡ���Կ�ͷ�Ŀհ��ַ��������ո����Ʊ���ȣ�����ȡ�ǿհ��ַ�ֱ���ٴ������հ��ַ�
	//cout << s << endl;

	string your_name;
	cout << "���������������" << endl;
	getline(cin, your_name);//��ȡ������һ��
	cout << your_name << endl;

	return 0;
}