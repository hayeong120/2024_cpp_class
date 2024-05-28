#include <iostream>
#include <string.h>
using namespace std;

class Person {
public:
	Person(string name, int age) : name_(name), age_(age) {
		cout << "�θ� ������ ȣ��" << endl;
	}
	~Person(){ 
		cout << "�θ� �Ҹ��� ȣ��" << endl;
	}

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
		cout << "�ڽ� ������ ȣ��" << endl;
	}
	~Student() {
		cout << "�ڽ� �Ҹ��� ȣ��" << endl;
	}

	void show_Person() {
		cout << id_ << " ";
		Person::show_Person();	// �θ� Ŭ������ ����Լ� ȣ��
	}

private:
	int id_;
};

int main(void) {
	Student* stu = new Student("�Ͽ�0l", 18, 2211);
	stu->show_Person();

	delete stu;

	return 0;
}