#include <iostream>
#include <vector>

using namespace std;

int main() {
	// �������� �迭�� ũ�Ⱑ �����Ǿ� ������, 
	// ���ʹ� ũ�Ⱑ �����Ӱ� ���� �� �ִ� �����迭
	vector<int> arr;

	arr.reserve(4); // ������ ũ�⸦ 4�� ��
	arr.push_back(65);
	arr.push_back(51);
	arr.push_back(3);
	arr.push_back(7);

	// int* arr = new int[4];
	// arr[0] = 65, arr[1] = 51, arr[2] = 3, arr[3] = 7;

	// 4���� �� �� ������ ������ �ϳ��� �� ����ֱ�
	arr.push_back(4);

	// ������ �ּҸ� ��Ÿ���� �ݺ��� (iterator)
	vector<int>::iterator iter;

	// 4���� �� �� ������ ������ �ϳ� �� ����ֱ�
	for (iter = arr.begin(); iter != arr.end(); iter++) {
		cout << *iter << " ";
	}

}