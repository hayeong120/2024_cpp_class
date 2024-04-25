#include <iostream>
using namespace std;

// 같은 이름, 다른 매개변수(매개변수가 같으면 오버로딩 불가)
int sum(int a, int b);
double sum(double a, double b);

int main()
{
	cout << sum(1, 2) << endl;
	cout << sum(1.1, 2.2) << endl;

	return 0;
}

int sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }