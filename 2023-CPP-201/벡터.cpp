#include <iostream>


using namespace std;

int main() {
	int* arr = new int[4];
	arr[0] = 65, arr[1] = 51, arr[2] = 3, arr[3] = 7;

	// 4���� �� �� ������ ������ �ϳ��� �� ����ֱ�
	// ũ�Ⱑ �� ū �� ���� ����
	int* temp = new int[8];
	// �� ������ ���� ������
	for (int i = 0; i < 4; i++) {
		temp[i] = arr[i];
	}
	// ���� �Ҵ�� ������ ����
	delete[] arr;
	// �� �������� ����Ž
	arr = temp;
	// ���ο� �����͸� ����ֱ�
	arr[4] = 4;

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	// �޸� ������ ���� ���� �����Ҵ�� �޸� ����
	delete[] arr;

}