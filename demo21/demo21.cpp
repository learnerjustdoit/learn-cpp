#include <cstdio>//stdio.h是C语言的I/O标准库，iostream是C++的I/O类
int main()
{
	int a;//这是十进制

	a = 12;

	printf("%d\n", a);

	a = 0x1f; //这是16进制
	printf("%d\n", a);//以10进制显示

	return 0;
}