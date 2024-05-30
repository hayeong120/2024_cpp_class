#include <iostream>
#include <string.h>
using namespace std;

class Person {
public:
	Person(string name, int hakbun) : name_(name), hakbun_(hakbun) {
		//cout << "부모 생성자 호출" << endl;
	}
	~Person() {
		//cout << "부모 소멸자 호출" << endl;
	}

	void PrintShow() {
		cout << name_ << "의 학번은 " << hakbun_ << endl;
	}

private:
	string name_;
	int hakbun_;
};

class Student : public Person {
public:
	Student(string name, int age, string university) : Person(name, age), university_(university) {
		//cout << "자식 생성자 호출" << endl;
	}
	~Student() {
		//cout << "자식 소멸자 호출" << endl;
	}

	void PrintShow() {
		cout << university_ << "에 다니는 ";
		Person::PrintShow();	
	}

private:
	string university_;
};

int main(void) {
	Student* stu = new Student("장하영", 2211, "미림마이스터고");
	stu->PrintShow();

	delete stu;

	return 0;
}