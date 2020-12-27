#include <iostream>

#define MaxSize 50//属于宏，C++预处理时会把MaxSize都替换为50

typedef int 考试分数;
typedef int exam_score;
typedef double wages;
typedef wages salary;

typedef int KeyType;
typedef double ValueType;

typedef struct
{
	KeyType key;
	ValueType value;
} DataType;

typedef struct
{
	DataType data[MaxSize];
	int length;
} Sqlist;


int main()
{
	int a;
	考试分数 b;
	exam_score c;

	double k;
	wages m;
	salary hourly, weekly;

	hourly = 20.00;

	std::cout << hourly << std::endl;
	return 0;
}