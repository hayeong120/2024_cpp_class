#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%d\n", strlen(cI));			// 3
	printf("\n");
	std::string cppI = "aaa";
	cout << cppI.size() << endl;		// 3
	cout << cppI.length() << endl;		// size()와 같은 결과
}