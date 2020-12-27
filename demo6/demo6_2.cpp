#include <iostream>
int j;

extern int i;

void foo()
{
	i++;
	j++;
	std::cout << j << std::endl;
}