//C++ bitset���ͣ���Ҫ���ڴ��������
#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	bitset<32> a;//a��32λ�����ƣ���ʼ��ȫ��0
	cout << a << endl;
	a[5] = 1;//�Ӻ���ǰ���ģ���0��ʼ
	cout << a << endl;
	a.set(3);//�ȼ���a[3]=1;,a.set()���Ӳ�������ȫ��Ϊ1��a.reset()���Ǳ�Ϊ0���÷���a.set()һ��
	cout << a << endl;
	//a.flip();��ת��0��Ϊ1��1��Ϊ0�����ԼӲ�������ת�ض�λ�ã�Ҳ���Բ��Ӳ�������ת����
	a.reset();
	a.set(8);
	a.flip();
	unsigned long bb = a.to_ulong();
	cout << bb << endl;

	bitset<16> b(0xffff);// 1111 1111 1111 1111
	cout << b << endl;

	bitset<32> c(0xffff);
	cout << c << endl;//ǰ�治���λ�ò����Զ���0��ʼ��

	bitset<32> e(156);
	cout << e << endl;

	string str("11111110000000000000000");
	bitset<32> f(str, 5, 4);//��str[5]��ʼ����4λ��ʼ����ǰ�治���λ�ò����Զ���0��ʼ��
	cout << f << endl;

	bitset<32> g(str, str.size() - 4);//��str[str.size() - 4]һֱ��str������ʼ����ǰ�治���λ�ò����Զ���0��ʼ��
	cout << g << endl;

	bool is_set = e.any();//����Ƿ���һλ��1
	if (is_set)
	{
		cout << "e��������һ��1!" << endl;
	}
	// e.none()//����Ƿ�һ��1��û��

	size_t bits_set = e.count();//size_t�Ǳ�׼C���ж���ģ���64λϵͳ��Ϊlong long unsigned int����64λϵͳ��Ϊlong unsigned int
	cout << "e��һ���У�" << bits_set << "��1!" << endl;
	cout << "e�Ĵ�С��" << e.size() << endl;
	cout << "e��һ���У�" << e.size() - bits_set << "��0!" << endl;

	//λ����
	bitset<8> eightBits;
	cout << "Enter a 8-bit sequence: ";
	cin >> eightBits;
	cout << endl;
	cout << eightBits << endl;

	bitset<8> eightBits2;
	cout << "Enter a 8-bit sequence: ";
	cin >> eightBits2;
	cout << endl;
	cout << eightBits2 << endl;

	cout << (eightBits & eightBits2) << endl; //λ��
	cout << (eightBits | eightBits2) << endl; //λ��
	cout << (eightBits ^ eightBits2) << endl; //λ���

	return 0;
}