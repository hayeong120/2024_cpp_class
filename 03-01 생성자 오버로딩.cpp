#include <iostream>
#include <string>
using namespace std;

class Student
{
private:	
	int Hakbun;
	string Name;

public:
	Student()	// �����ڴ� ��ȯ���� ����. 
	{
		Hakbun = 1234;
		Name = "ȫ�浿";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}

	// ������ �����ε�
	Student(int hakbun, string name)
	{
		// this ������ : ��ü �ڱ��ڽ��� ����Ű�� ������
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
	Student student1;
	student1.show();

	cout << endl;

	Student student2 = Student(5678, "ȫ����");
	student2.show();			

	return 0;
}