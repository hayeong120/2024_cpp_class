#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void)
{
	char cMunja[9];
	strcpy(cMunja, "c_insert");		
	strcat(cMunja, "++");			// C��� ����� ���ڿ� �߰�
	printf("%s\n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";		
	cppMunja = cppMunja + "++";		// C++ ����� ���ڿ� �߰�
	cout << cppMunja << endl;
}