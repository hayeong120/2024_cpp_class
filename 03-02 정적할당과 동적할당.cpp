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
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}

	Student(int hakbun, string name)
	{
		this->Hakbun = hakbun;
		this->Name = name;
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}

	void show()
	{
		cout << "�й��� " << Hakbun << "�Դϴ�." << endl;
		cout << "�̸��� " << Name << "�Դϴ�." << endl;
	}
};

int main(void)
{
	// �����Ҵ�
	Student student1;
	student1.show();

	cout << endl;

	// �����Ҵ�
	Student* student2 = new Student(5678, "ȫ����");
	(*student2).show();				// student->show();

	delete student2;

	return 0; 
}