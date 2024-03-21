#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void)
{
	char cMunja[9];
	strcpy(cMunja, "c_insert");		
	strcat(cMunja, "++");			// C언어 방식의 문자열 추가
	printf("%s\n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";		
	cppMunja = cppMunja + "++";		// C++ 방식의 문자열 추가
	cout << cppMunja << endl;
}