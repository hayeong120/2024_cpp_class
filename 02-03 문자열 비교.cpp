#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void)
{
	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	printf("%d\n", strcmp(cI, cJ) == 0);	// ��������
	printf("%d\n", strcmp(cI, cK) < 0);		// ������ aaa < abc
	printf("\n");
	std::string cppI = "aaa", cppJ = "aaa", cppK = "abc";
	cout << (cppI == cppJ) << endl;		// ��������
	cout << (cppI < cppK) << endl;		// ������ aaa < abc
}