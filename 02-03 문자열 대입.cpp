#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");		// C언어 방식의 문자열 대입
	printf("%s\n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";		// C++ 방식의 문자열 대입
	cout << cppMunja << endl;
}