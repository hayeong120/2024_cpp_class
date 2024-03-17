#include <iostream>		// 표준입출력 라이브러리 C언어의 stdio.h

using namespace std;		// 이름공간 축약 std::cout -> cout

int main(void)
{
	int a;

	//printf("숫자를 입력하세요 : ");
	cout << "숫자를 입력하세요 : ";		// cout: 출력객체

	//scanf("%d", &a);
	cin >> a;				// cin: 입력객체

	//printf("%d이(가) 입력되었습니다.\n");
	cout << a << "이(가) 입력되었습니다." << endl;		// endl: 개행객체

	return 0;
}