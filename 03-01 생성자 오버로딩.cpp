#include <iostream>
#include <string>
using namespace std;

class Student
{
private:	// 멤버변수
	int Hakbun;
	string Name;

public:
	//Student(){}		// 기본생성자, 컴파일러가 자동 생성
	Student()	// 생성자는 반환형이 없다. 
	{
		Hakbun = 1234;
		Name = "홍길동";
		cout << "학번이 등록되었습니다." << endl;
	}

	// 생성자 오버로딩
	/*
	Student(int hakbun, string name)
	{
		// this 포인터 : 객체 자기자신을 가리키는 포인터
		this->Hakbun = hakbun;		// 멤버변수를 초기화 한 후에 대입
		this->Name = name;
		cout << "학번이 등록되었습니다." << endl;
	}
	*/

	// 멤버변수 초기화
	Student(int hakbun, string name) : Hakbun(hakbun), Name(name)
	{

	}

	void show()
	{
		cout << "학번은 " << Hakbun << "입니다." << endl;
		cout << "이름은 " << Name << "입니다." << endl;
	}
};

// 클래스 바깥에서 생성자와 함수를 정의하는 경우
/*Student::Student()
{
	Hakbun = 1234;
	Name = "홍길동";
	cout << "학번이 등록되었습니다." << endl;
}
void Student::show()
{
	cout << "학번은 " << Hakbun << "입니다." << endl;
	cout << "이름은 " << Name << "입니다." << endl;
}*/


int main(void)
{
	// 정적할당 
	Student student1;
	student1.show();

	cout << endl;

	// 동적할당
	Student* student2 = new Student(5678, "홍길자");
	(*student2).show();			// student->show();

	return 0;
}