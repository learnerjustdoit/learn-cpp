//C++ ����ֵ����
#include <iostream>
#include <locale>
#include <wchar.h>
#include <stdlib.h>

int main()
{
	int a, b;
	a = 1;
	b = 2;
	std::cout << a + b << std::endl;
	std::cout << 2 + 3 << std::endl;

	//��������ֵĬ����int��long 10L����long,10LL����long long,10uLL����unsigned long long
	std::cout << 20 << std::endl;
	std::cout << 024 << std::endl; //8����
	std::cout << 0x14 << std::endl; //16����

	//����������ֵĬ����double 3.14159f����float, 3.14159L����long double
	std::cout << 3.14159 << std::endl;

	//��ѧ������ 3.14159E2f����float,3.14159E2L����long double
	std::cout << 3.14159E2 << std::endl;
	std::cout << 3.14159e-2 << std::endl;

	//��������ֵ��ֻ��true��false
	bool test = false;
	std::cout << true << std::endl;
	std::cout << false << std::endl;
	//�߼�����
	std::cout << (true && false) << std::endl;
	std::cout << (true || false) << std::endl;

	//�ַ�����ֵ
	char x = 'a';//char�ַ���һ���ֽ�
	wchar_t y = L'��';//���ַ��������ֽ�

	printf("%c\n", 'A');//�����ǿ��ַ�
	setlocale(LC_ALL, "chs");
	wprintf(L"%lc\n", L'��');

	//ת��
	std::cout << "��˵: \"����ѧϰC++!\"" << std::endl;
	std::cout << "�ҵ��ļ����ǣ�c:\\bit\\test" << std::endl;
	std::cout << "hello\n";
	std::cout << "hello\r\n";
	std::cout << "2\nM" << std::endl;
	std::cout << "\062\012\115" << std::endl; //\012 012��8����10����Ӧ\n��ascii��
	std::cout << "\x032\x00a\x04d" << std::endl; //\x032 x032��16����50����Ӧ2��ascii��

	//�ַ�������ֵ
	std::cout << "hello world!" << std::endl;
	// �ַ�����һ���ֽ�
	std::cout << 'A' << std::endl;
	// �ַ��� "A"='A','\0'���ں����һ��'\0'�����������ַ�)
	std::cout << "A" << std::endl;

	std::cout << "������ͨ�ַ���" << std::endl;
	wprintf(L"%ls\n", L"���ǿ��ַ���");

	//�ַ���ƴ��
	std::cout << "a multi-line "
		"string literal "
		"using concatenation" << std::endl;

	std::cout << "a multi-line \
string literal \
using concatenation" << std::endl;

	return 0;
}