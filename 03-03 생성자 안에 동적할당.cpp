#include <iostream>
#include <string.h>
using namespace std;

class Student {
private:
	int Hakbun;
	char* Name;

public:
	Student(int hakbun, const char* name) : Hakbun(hakbun)
	{
		int length = strlen(name);

		// '/0'�� ���� ���� ���� �ϳ� �� �߰�
		Name = new char[length + 1];

		strcpy(Name, name);
	}

	void show(void)
	{
		cout << Hakbun << " ";
		cout << Name << endl;
	}
};

int main(void)
{
	Student* student = new Student(1111, "ȫ�浿");
	student->show();

	delete student;

	return 0;
}