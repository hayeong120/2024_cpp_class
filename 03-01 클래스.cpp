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

	Student student2 = Student();
	student2.show();

	return 0;
}