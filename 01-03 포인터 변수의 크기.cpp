#include <iostream>

void main(void)
{
	int i;
	char c;
	double b;

	int* pi = &i;
	char* pc = &c;
	double* pb = &b;

	printf("%d %d %d\n", sizeof(i), sizeof(c), sizeof(b));
	printf("%d %d %d\n", sizeof(pi), sizeof(pc), sizeof(pb));
}