#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%s\n", cI);			// aaa

	std::string cppI = "aaa";
	//printf("%s\n", cppI);			// �߸��� �ڵ�
	printf("%s\n", cppI.c_str());		// aaa
}