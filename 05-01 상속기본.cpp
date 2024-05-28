#include <iostream>
#include <string.h>
using namespace std;

class Person {
public:
	Person(string name, int age)
		: name_(name), age_(age) {}

	void ShowPerson() {
		cout << name_ << "�� ���̴� " << age_ << "�Դϴ�." << endl;
	}

private:
	string name_;
	int age_;
};

class Student : public Person {
public:
	// �θ� �����ڰ� ���� ȣ��
	Student(string name, int age, int id) : Person(name, age) {

	}

private:
	int id_;
};

int main(void) {
	Student* stu = new Student("�Ͽ�0l", 18, 2211);
	stu->ShowPerson();

	return 0;
}