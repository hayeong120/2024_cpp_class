#include <iostream>
#include <string.h>
using namespace std;

class Person {
public:
	Person(string name, int hakbun) : name_(name), hakbun_(hakbun) {
		//cout << "�θ� ������ ȣ��" << endl;
	}
	~Person() {
		//cout << "�θ� �Ҹ��� ȣ��" << endl;
	}

	void PrintShow() {
		cout << name_ << "�� �й��� " << hakbun_ << endl;
	}

private:
	string name_;
	int hakbun_;
};

class Student : public Person {
public:
	Student(string name, int age, string university) : Person(name, age), university_(university) {
		//cout << "�ڽ� ������ ȣ��" << endl;
	}
	~Student() {
		//cout << "�ڽ� �Ҹ��� ȣ��" << endl;
	}

	void PrintShow() {
		cout << university_ << "�� �ٴϴ� ";
		Person::PrintShow();	
	}

private:
	string university_;
};

int main(void) {
	Student* stu = new Student("���Ͽ�", 2211, "�̸����̽��Ͱ�");
	stu->PrintShow();

	delete stu;

	return 0;
}