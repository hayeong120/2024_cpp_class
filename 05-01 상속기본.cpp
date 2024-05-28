#include <iostream>
#include <string.h>
using namespace std;

class Person {
public:
	Person(string name, int age)
		: name_(name), age_(age) {}

	void show_Person() {
		cout << name_ << "�� ���̴� " << age_ << "�Դϴ�." << endl;
	}

private:
	string name_;
	int age_;
};

class Student : public Person {
public:
	// �θ� �����ڰ� ���� ȣ��
	Student(string name, int age, int id) : Person(name, age), id_(id) {

	}
	void show_Person() {
		Person::show_Person();	// �θ� Ŭ������ ����Լ� ȣ��
		cout << id_ << endl;
	}

private:
	int id_;
};

int main(void) {
	Student* stu = new Student("�Ͽ�0l", 18, 2211);
	stu->show_Person();

	return 0;
}