#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");		// C��� ����� ���ڿ� ����
	printf("%s\n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";		// C++ ����� ���ڿ� ����
	cout << cppMunja << endl;
}