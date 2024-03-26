#include <stdio.h>

int main() {
	int arr[4] = { 1, 2, 3, 4 };
	// 주소값 4바이트 만큼의 차이
	printf("%d %d\n", &arr[0], &arr[1]);

	char str[4] = "abc";
	// 주소값 1바이트 만큼의 차이
	printf("%d %d\n", &str[0], &str[1]);

	return 0;
}