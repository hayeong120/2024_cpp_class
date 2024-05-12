#include <iostream>
#include <string>

using namespace std;

class Animal {
    string name;
    int weight;

public:
    // 기본 생성자
    Animal() { // 기본값으로 초기화
        cout << name << "기본생성자" << endl;
    }

    // 매개변수 생성자
    Animal(const string& name, int weight) : name(name), weight(weight) { // 멤버 초기화
   
        cout << name << "의 무게는 " << weight << "입니다 Animal 생성" << endl;
    }

    void PrintMethod() {
        cout << "부모 고양이" << endl;
    }

    ~Animal() {
        cout << "Animal 소멸" << endl;
    }
};

class Cat : public Animal {
public:
    // 기본생성자
    Cat() {

    }

    // 매개변수 생성자
    Cat(const string& name, int weight)
    {
        cout << "Cat 생성" << endl;
    }

    void PrintMethod() {
        Animal::PrintMethod();
        cout << "자식 고먐미" << endl;
    }

    ~Cat() {
        cout << "Cat 소멸" << endl;
    }
};

// `main` 함수 정의
int main() {
    Cat cat;
    cat.PrintMethod();  // 올바르게 오버라이딩된 메소드가 호출됨
    return 0;
}
