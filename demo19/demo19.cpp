#include <iostream>
#include <vector>
#include <string>
#include "Dog.h"

using namespace std;

int main()
{
	int arr[100]; //����a���Է�100����
	//vector��һ����̬���飬�ɱ䳤��
	vector<int> ivec; //����int�������ݵ�һ��vector,ivec�ǿյģ�����һ������û��
	cout << ivec.size() << endl;
	vector<double> dvec;//vector��һ����ģ��(class template)��<>�������ģ������������������Զ��������/Class
	vector<string> svec;
	vector<Dog> dogvec;//����Dog�������ݵ�һ��vector


	vector<int> a;//a��һ���յ�����
	vector<int> b(10, 2);//b��һ��������������10��2

	a.push_back(100);//push_back����append
	a.push_back(200);
	a.push_back(300);

	b.push_back(10);
	b.push_back(11);

	cout << a.size() << endl;
	cout << b.size() << endl;

	//��Ҫ��int���͵�ѭ������
	for (vector<int>::size_type i = 0; i != a.size(); i++)
	{
		cout << a[i] << endl;
	}

	for (vector<int>::size_type i = 0; i != b.size(); i++)
	{
		cout << b[i] << endl;
	}

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(12);

	vector<int> v2(v1);//v2��v1����һ���ſ�������д
	//vector<string> v3(v1);����������д
	vector<int> v4(10, -1);
	vector<int> v6(10);//10��0

	vector<string> v5(10, "hi!"); //'a'���ַ�char��������ֵ������"a"�����ַ���
	vector<string> v7(10);//10�����ַ���

	cout << v1[0] << endl;
	v1[0] = 100;
	cout << v1[0] << endl;

	int k;
	for (vector<int>::size_type ix = 0; ix != 5; ix++)
	{
		cin >> k;
		ivec.push_back(k);
	}

	cout << "��ʾvector��������ݣ�" << endl;
	for (vector<int>::size_type i = 0; i != ivec.size(); i++)
	{
		cout << ivec[i] << endl;
	}

	return 0;
}