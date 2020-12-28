#include <iostream>
#include <vector>
#include <string>
#include "Dog.h"

using namespace std;

int main()
{
	int arr[100]; //数组a可以放100个数
	//vector是一个动态数组，可变长度
	vector<int> ivec; //保存int类型数据的一个vector,ivec是空的，里面一个数都没有
	cout << ivec.size() << endl;
	vector<double> dvec;//vector是一个类模板(class template)，<>里面的是模板参数，可以是我们自定义的类型/Class
	vector<string> svec;
	vector<Dog> dogvec;//保存Dog类型数据的一个vector


	vector<int> a;//a是一个空的容器
	vector<int> b(10, 2);//b是一个容器，里面有10个2

	a.push_back(100);//push_back就是append
	a.push_back(200);
	a.push_back(300);

	b.push_back(10);
	b.push_back(11);

	cout << a.size() << endl;
	cout << b.size() << endl;

	//不要用int类型的循环变量
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

	vector<int> v2(v1);//v2和v1类型一样才可以这样写
	//vector<string> v3(v1);不可以这样写
	vector<int> v4(10, -1);
	vector<int> v6(10);//10个0

	vector<string> v5(10, "hi!"); //'a'是字符char类型字面值常量，"a"才是字符串
	vector<string> v7(10);//10个空字符串

	cout << v1[0] << endl;
	v1[0] = 100;
	cout << v1[0] << endl;

	int k;
	for (vector<int>::size_type ix = 0; ix != 5; ix++)
	{
		cin >> k;
		ivec.push_back(k);
	}

	cout << "显示vector里面的数据：" << endl;
	for (vector<int>::size_type i = 0; i != ivec.size(); i++)
	{
		cout << ivec[i] << endl;
	}

	return 0;
}