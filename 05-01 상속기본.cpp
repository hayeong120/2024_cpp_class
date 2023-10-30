#include <iostream>
#include <string.h>
using namespace std;

class Person {
public:
	Person(string name, int age)
		: name_(name), age_(age) {}

	void show_Person() {
		cout << name_ << "의 나이는 " << age_ << "입니다." << endl;
	}

private:
	string name_;
	int age_;
};

class Student : public Person {
public:
	// 부모 생성자가 먼저 호출
	Student(string name, int age, int id) : Person(name, age), id_(id) {

	}
	void show_Person() {
		Person::show_Person();	// 부모 클래스의 멤버함수 호출
		cout << id_ << endl;
	}

private:
	int id_;
};

int main(void) {
	Student* stu = new Student("하영0l", 18, 2211);
	stu->show_Person();

	return 0;
}