#include <iostream>
#include <string>
using namespace std;

class Student
{
private:	
	int Hakbun;
	string Name;

public:
	Student()	// 생성자는 반환형이 없다. 
	{
		Hakbun = 1234;
		Name = "홍길동";
		cout << "학번이 등록되었습니다." << endl;
	}

	// 생성자 오버로딩
	Student(int hakbun, string name)
	{
		// this 포인터 : 객체 자기자신을 가리키는 포인터
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
	Student student1;
	student1.show();

	cout << endl;

	Student student2 = Student(5678, "홍길자");
	student2.show();			

	return 0;
}