#include <iostream>
#include <string>
using namespace std;

class Student
{
private:	// �������
	int Hakbun;
	string Name;
public:
	Student();
	void show();
};

// Ŭ���� �ٱ����� �����ڿ� �Լ��� �����ϴ� ���
Student::Student()
{
	Hakbun = 1234;
	Name = "ȫ�浿";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}
void Student::show()
{
	cout << "�й��� " << Hakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << Name << "�Դϴ�." << endl;
}


int main(void)
{
	Student student1;
	student1.show();

	return 0;
}