#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void)
{
	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	printf("%d\n", strcmp(cI, cJ) == 0);	// 같은글자
	printf("%d\n", strcmp(cI, cK) < 0);		// 사전순 aaa < abc
	printf("\n");
	std::string cppI = "aaa", cppJ = "aaa", cppK = "abc";
	cout << (cppI == cppJ) << endl;		// 같은글자
	cout << (cppI < cppK) << endl;		// 사전순 aaa < abc
}