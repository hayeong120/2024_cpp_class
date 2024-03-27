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
		cout << "학번이 등록되었습니다." << endl;
	}

	Student(int hakbun, string name)
	{
		this->Hakbun = hakbun;
		this->Name = name;
		cout << "학번이 등록되었습니다." << endl;
	}

	void show()
	{
		cout << "학번은 " << Hakbun << "입니다." << endl;
		cout << "이름은 " << Name << "입니다." << endl;
	}
};

int main(void)
{
	// 정적할당
	Student student1;
	student1.show();

	cout << endl;

	// 동적할당
	Student* student2 = new Student(5678, "홍길자");
	(*student2).show();				// student->show();

	delete student2;

	return 0; 
}