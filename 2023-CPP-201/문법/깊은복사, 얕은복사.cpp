#include <iostream>

using namespace std;

int main(void) {

	// ptr1 : int 3��¥�� �迭�� �����Ҵ� ��Ų �� ����Ŵ
	int* ptr1 = new int[3];
	ptr1[0] = 3, ptr1[1] = 7, ptr1[2] = 65;

	// ptr2 : ������ ������ �����Ҵ��� �� ptr1�� ����Ű�� ������ ������
	// �̷��� ���縦 ��������(deep copy)
	int* ptr2 = new int[3];
	for (int i = 0; i < 3; i++) {
		ptr2[i] = ptr1[i];
	}

	// ���� ���縦 �ϸ� ������ ������ �����Ƿ� ptr2[1]�� 4�� �ٲ��� �ʰ� ��
	ptr1[1] = 4;

	for (int i = 0; i < 3; i++) {
		cout << ptr1[i] << " " << ptr2[i] << endl;
	}

	delete[] ptr1;
	delete[] ptr2;

	return 0;
}