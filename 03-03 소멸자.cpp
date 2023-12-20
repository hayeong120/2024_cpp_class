#include <iostream>
#include <string.h>
using namespace std;

class Student {
private:
	int Hakbun;
	char* Name;

public:
	Student(int hakbun, const char* name) : Hakbun(hakbun)
	{
		int length = strlen(name)+1;

		Name = new char[length];
		strcpy(Name, name);

		cout << "생성자 호출 완료" << endl;
	}

	// 소멸자 : 객체가 메모리에서 지워질 때 호출되는 함수
	~Student(void)
	{
		delete[] Name;
		cout << "소멸자 호출 완료" << endl;
	}

	void show(void)
	{
		cout << Hakbun << " ";
		cout << Name << endl;
	}
};

int main(void)
{
	Student* student = new Student(1111, "홍길동");
	student->show();

	delete student;

	return 0;
}