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
		int length = strlen(name)+1;

		Name = new char[length];
		strcpy(Name, name);

		cout << "������ ȣ�� �Ϸ�" << endl;
	}

	// �Ҹ��� : ��ü�� �޸𸮿��� ������ �� ȣ��Ǵ� �Լ�
	~Student(void)
	{
		delete[] Name;
		cout << "�Ҹ��� ȣ�� �Ϸ�" << endl;
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