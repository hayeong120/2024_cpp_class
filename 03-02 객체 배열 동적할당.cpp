#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int Hakbun;
	string Name;

public:
	Student()
	{
		Hakbun = 1234;
		Name = "ȫ�浿";
	}

	Student(int hakbun, string name)
	{
		this->Hakbun = hakbun;
		this->Name = name;
	}

	void show()
	{
		cout << "�й��� " << Hakbun << "�Դϴ�." << endl;
		cout << "�̸��� " << Name << "�Դϴ�." << endl;
	}
};

int main(void)
{
	Student* student = new Student[3]{
		{1111, "ȫ�浿"},
		{2222, "ȫ����"},
		{3333, "ȫ���"}
	};

	for (int i = 0; i < 3; i++) {
		student[i].show();
	}

	delete[]student;

	return 0;
}