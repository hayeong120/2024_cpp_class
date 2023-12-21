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

		// '/0'이 들어가기 위해 공간 하나 더 추가
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
	Student* student = new Student(1111, "홍길동");
	student->show();

	delete student;

	return 0;
}