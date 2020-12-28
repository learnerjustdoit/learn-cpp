//C++������
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//vector�п������±�������е����ݣ����е��������е���������ֻ��һ������������ʹ���±꣬��������һ�����ܵķ�������������ʹ�õ�����
	vector<int> v(10, 8);
	// begin()��������һ����������ָ���һ������Ԫ��
	vector<int>::iterator iter = v.begin();

	//������ʵ������һ��ָ��
	*iter = 9;//�����ã���iterָ������ݸ�Ϊ9��ͨ���������޸�����

	iter++;//ָ��++������ָ���˵ڶ���Ԫ��
	*iter = 10;

	for (vector<int>::size_type ix = 0; ix != v.size(); ix++)
	{
		cout << v[ix] << endl;
	}

	//v.end()�����һ��Ԫ�ص���һ��
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << endl;
	}

	//����������ֻ�����ڶ�ȡ�����ڵ����ݣ������޸����ݣ�Ҫ�޸ľ���ǰ����ͨ�ĵ�����
	for (vector<int>::const_iterator ix = v.begin(); ix != v.end(); ix++)
	{
		cout << "��������" << *ix << endl;//��ͨ���������޸����ݣ�ֻ�Ƕ�����
	}

	return 0;
}