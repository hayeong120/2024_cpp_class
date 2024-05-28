#include <iostream>
#include <string>

using namespace std;

class Animal {
    string name;
    int weight;

public:
    // �⺻ ������
    Animal() { // �⺻������ �ʱ�ȭ
        cout << name << "�⺻������" << endl;
    }

    // �Ű����� ������
    Animal(const string& name, int weight) : name(name), weight(weight) { // ��� �ʱ�ȭ
   
        cout << name << "�� ���Դ� " << weight << "�Դϴ� Animal ����" << endl;
    }

    void PrintMethod() {
        cout << "�θ� �����" << endl;
    }

    ~Animal() {
        cout << "Animal �Ҹ�" << endl;
    }
};

class Cat : public Animal {
public:
    // �⺻������
    Cat() {

    }

    // �Ű����� ������
    Cat(const string& name, int weight)
    {
        cout << "Cat ����" << endl;
    }

    void PrintMethod() {
        Animal::PrintMethod();
        cout << "�ڽ� ��ι�" << endl;
    }

    ~Cat() {
        cout << "Cat �Ҹ�" << endl;
    }
};

// `main` �Լ� ����
int main() {
    Cat cat;
    cat.PrintMethod();  // �ùٸ��� �������̵��� �޼ҵ尡 ȣ���
    return 0;
}
