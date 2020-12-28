//C++迭代器
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//vector中可以用下标操作其中的数据，所有的容器都有迭代器，但只有一部分容器可以使用下标，迭代器是一个万能的方法，更倾向于使用迭代器
	vector<int> v(10, 8);
	// begin()操作返回一个迭代器，指向第一个数据元素
	vector<int>::iterator iter = v.begin();

	//迭代器实际上是一个指针
	*iter = 9;//解引用，把iter指向的数据改为9，通过迭代器修改数据

	iter++;//指针++，现在指向了第二个元素
	*iter = 10;

	for (vector<int>::size_type ix = 0; ix != v.size(); ix++)
	{
		cout << v[ix] << endl;
	}

	//v.end()是最后一个元素的下一个
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << endl;
	}

	//常迭代器，只能用于读取容器内的数据，不能修改数据，要修改就用前面普通的迭代器
	for (vector<int>::const_iterator ix = v.begin(); ix != v.end(); ix++)
	{
		cout << "迭代器：" << *ix << endl;//不通过迭代器修改数据，只是读数据
	}

	return 0;
}