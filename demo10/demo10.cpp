#include <iostream>

#define MaxSize 50//���ں꣬C++Ԥ����ʱ���MaxSize���滻Ϊ50

typedef int ���Է���;
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
	���Է��� b;
	exam_score c;

	double k;
	wages m;
	salary hourly, weekly;

	hourly = 20.00;

	std::cout << hourly << std::endl;
	return 0;
}