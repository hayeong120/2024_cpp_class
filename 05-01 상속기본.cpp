#include <iostream>
#include <string.h>
using namespace std;

class Person {
public:
	Person(string name, int age)
		: name_(name), age_(age) {}

	void ShowPerson() {
		cout << name_ << "의 나이는 " << age_ << "입니다." << endl;
	}

private:
	string name_;
	int age_;
};

class Student : public Person {
public:
	// 부모 생성자가 먼저 호출
	Student(string name, int age, int id) : Person(name, age) {

	}

private:
	int id_;
};

int main(void) {
	Student* stu = new Student("하영0l", 18, 2211);
	stu->ShowPerson();

	return 0;
}