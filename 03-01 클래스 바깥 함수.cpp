#include <iostream>
#include <string>
using namespace std;

class Student
{
private:	// �������
	int Hakbun;
	string Name;

public:
	//Student(){}		// �⺻������, �����Ϸ��� �ڵ� ����
	Student()	// �����ڴ� ��ȯ���� ����. 
	{
		Hakbun = 1234;
		Name = "ȫ�浿";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}

	// ������ �����ε�
	/*
	Student(int hakbun, string name)
	{
		// this ������ : ��ü �ڱ��ڽ��� ����Ű�� ������
		this->Hakbun = hakbun;		// ��������� �ʱ�ȭ �� �Ŀ� ����
		this->Name = name;
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}
	*/

	// ������� �ʱ�ȭ
	Student(int hakbun, string name) : Hakbun(hakbun), Name(name)
	{

	}

	void show()
	{
		cout << "�й��� " << Hakbun << "�Դϴ�." << endl;
		cout << "�̸��� " << Name << "�Դϴ�." << endl;
	}
};

// Ŭ���� �ٱ����� �����ڿ� �Լ��� �����ϴ� ���
/*Student::Student()
{
	Hakbun = 1234;
	Name = "ȫ�浿";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}
void Student::show()
{
	cout << "�й��� " << Hakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << Name << "�Դϴ�." << endl;
}*/


int main(void)
{
	// �����Ҵ� 
	Student student1;
	student1.show();

	cout << endl;

	// �����Ҵ�
	Student* student2 = new Student(5678, "ȫ����");
	(*student2).show();			// student->show();

	return 0;
}