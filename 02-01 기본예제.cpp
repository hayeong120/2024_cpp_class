#include <iostream>		// ǥ������� ���̺귯�� C����� stdio.h

using namespace std;		// �̸����� ��� std::cout -> cout

int main(void)
{
	int a;

	//printf("���ڸ� �Է��ϼ��� : ");
	cout << "���ڸ� �Է��ϼ��� : ";		// cout: ��°�ü

	//scanf("%d", &a);
	cin >> a;				// cin: �Է°�ü

	//printf("%d��(��) �ԷµǾ����ϴ�.\n");
	cout << a << "��(��) �ԷµǾ����ϴ�." << endl;		// endl: ���ఴü

	return 0;
}