#include <iostream>

// 이름공간. std::를 안해도 된다.
using namespace std;

void call_by_value(int val) 
{
	// 새로운 지역변수 val을 만들고 거기에 10을 넣는다. 
	val = 10;
}

int main() {
	int num = 4;
	// num의 값은 바뀌지 않는다. 
	call_by_value(num);
	cout << num;

	return 0;
}