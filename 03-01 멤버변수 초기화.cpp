#include <iostream>
#include <string>
using namespace std;

class Student
{
private:	// �������
	int Hakbun;
	string Name;

public:
	Student()
	{
		Hakbun = 1234;
		Name = "ȫ�浿";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}

	// ��������� �ʱ�ȭ �� �Ŀ� ����
	/*Student(int hakbun, string name)
	{
		this->Hakbun = hakbun;
		this->Name = name;
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}*/

	// ������� �ٷ� �ʱ�ȭ
	Student(int hakbun, string name) : Hakbun(hakbun), Name(name)
	{
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
	Student student1;
	student1.show();

	cout << endl;

	Student student2 = Student(5678, "ȫ����");
	student2.show();

	return 0;
}