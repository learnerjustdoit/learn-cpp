//C++ const�޶���
#include <iostream>

extern const int i = 120, j = 0; //��������ʱ�����extern���ܱ��ⲿʹ�ã���������Ҫ

int main()
{
	const int bufSize = 512;//�������Ĵ�С��buffer size
	//bufSize = 1024;�������ܱ��޸�,���붨��ʱ��ʼ��
	const std::string hi = "Hello!";

	return 0;
}