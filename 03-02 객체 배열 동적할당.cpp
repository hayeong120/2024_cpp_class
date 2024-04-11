#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int Hakbun;
	string Name;

public:
	Student()
	{
		Hakbun = 1234;
		Name = "홍길동";
	}

	Student(int hakbun, string name)
	{
		this->Hakbun = hakbun;
		this->Name = name;
	}

	void show()
	{
		cout << "학번은 " << Hakbun << "입니다." << endl;
		cout << "이름은 " << Name << "입니다." << endl;
	}
};

int main(void)
{
	Student* student = new Student[3]{
		{1111, "홍길동"},
		{2222, "홍길자"},
		{3333, "홍길범"}
	};

	for (int i = 0; i < 3; i++) {
		student[i].show();
	}

	delete[]student;

	return 0;
}