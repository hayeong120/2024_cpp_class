#include <iostream>
#include <string>
using namespace std;

class Student
{
private:	// 멤버변수
	int Hakbun;
	string Name;
public:
	Student();
	void show();
};

// 클래스 바깥에서 생성자와 함수를 정의하는 경우
Student::Student()
{
	Hakbun = 1234;
	Name = "홍길동";
	cout << "학번이 등록되었습니다." << endl;
}
void Student::show()
{
	cout << "학번은 " << Hakbun << "입니다." << endl;
	cout << "이름은 " << Name << "입니다." << endl;
}


int main(void)
{
	Student student1;
	student1.show();

	return 0;
}