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

	Student student2 = Student();
	student2.show();

	return 0;
}