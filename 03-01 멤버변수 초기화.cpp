#include <iostream>
#include <string>
using namespace std;

class Student
{
private:	// 멤버변수
	int Hakbun;
	string Name;

public:
	Student()
	{
		Hakbun = 1234;
		Name = "홍길동";
		cout << "학번이 등록되었습니다." << endl;
	}

	// 멤버변수를 초기화 한 후에 대입
	/*Student(int hakbun, string name)
	{
		this->Hakbun = hakbun;
		this->Name = name;
		cout << "학번이 등록되었습니다." << endl;
	}*/

	// 멤버변수 바로 초기화
	Student(int hakbun, string name) : Hakbun(hakbun), Name(name)
	{
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
	Student student1;
	student1.show();

	cout << endl;

	Student student2 = Student(5678, "홍길자");
	student2.show();

	return 0;
}