#include <iostream>

void main(void)
{
	int num = 3;
	int* ptr = &num;
	*ptr = 4;

	printf("num���� ��  : %d\n", num);		// num �ȿ� ����ִ� ��
	printf("&num���� �� : %d\n", &num);		// num�� �޸� �ּҰ�
	printf("ptr���� ��  : %d\n", ptr);		// ptr �ȿ� ����ִ� ��
	printf("&ptr���� �� : %d\n", &ptr);		// ptr�� �޷θ� �ּҰ�
	printf("*ptr���� �� : %d\n", *ptr);		// ptr�� ������ ������ ��
}