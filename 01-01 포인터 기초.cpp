#include <iostream>

void main(void)
{
	int num = 3;
	int* ptr = &num;
	*ptr = 4;

	printf("num안의 값  : %d\n", num);		// num 안에 들어있는 값
	printf("&num안의 값 : %d\n", &num);		// num의 메모리 주소값
	printf("ptr안의 값  : %d\n", ptr);		// ptr 안에 들어있는 값
	printf("&ptr안의 값 : %d\n", &ptr);		// ptr의 메로리 주소값
	printf("*ptr안의 값 : %d\n", *ptr);		// ptr이 참조한 변수의 값
}