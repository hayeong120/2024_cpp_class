#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
	Student(int hakbun, const char* name) : hakbun_(hakbun)
	{
		int length = strlen(name);

		// '/0'�� ���� ���� ���� �ϳ� �� �߰�
		name_ = new char[length + 1];
		strcpy(name_, name);

		cout << "������ ȣ�� �Ϸ�" << endl;
	}

	// ���������(���� ����)
	Student(const Student& rhs) : hakbun_(rhs.hakbun_), name_(rhs.name_)
	{
		cout << "��������� ȣ�� �Ϸ�" << endl;
		int len = strlen(rhs.name_) + 1;
		name_ = new char[len];
		strcpy(name_, rhs.name_);
	}

	// �Ҹ��� : ��ü�� �Ҹ�� ��(�޸𸮿��� ������ ��) ȣ��Ǵ� �Լ�
	~Student(void)
	{
		delete[]name_;
		cout << "�Ҹ��� ȣ�� �Ϸ�" << endl;
	}

	// Ŭ������ ����� ���
	void show(void)
	{
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}
	
private:
	int hakbun_;
	char* name_;
};

int main(void)
{
	// �Ϲ����� ������
	Student stu = Student(2213, "JSB");
	// ���������
	Student stu2 = stu;

	return 0;
}