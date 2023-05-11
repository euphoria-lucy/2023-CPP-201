#include <iostream>

using namespace std;

int main(void) {

	// ptr1 : int 3��¥�� �迭�� �����Ҵ� ��Ų �� ����Ŵ
	int* ptr1 = new int[3];
	ptr1[0] = 3, ptr1[1] = 7, ptr1[2] = 65;

	// ptr2 : ������ �����Ҵ��� ���� �ʰ� ptr1�� �ּҰ��� ������
	// �̷��� ���縦 �������� (shallow copy)
	int* ptr2 = ptr1; // �ּҰ��� ������

	// ���� ���縦 �ϸ� ���� �����Ϳ� ���ӵ�
	// ��, ptr2[1]�� ���� �ٲ�
	ptr1[1] = 4;

	for (int i = 0; i < 3; i++) {
		cout << ptr1[i] << " " << ptr2[i] << endl;
	}

	return 0;
}