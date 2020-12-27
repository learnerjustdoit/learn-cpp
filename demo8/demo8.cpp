//C++ const限定符
#include <iostream>

extern const int i = 120, j = 0; //常量定义时必须加extern才能被外部使用，变量则不需要

int main()
{
	const int bufSize = 512;//缓冲区的大小，buffer size
	//bufSize = 1024;常量不能被修改,必须定义时初始化
	const std::string hi = "Hello!";

	return 0;
}