#include <iostream>


using namespace std;

int main() {
	int* arr = new int[4];
	arr[0] = 65, arr[1] = 51, arr[2] = 3, arr[3] = 7;

	// 4개가 꽉 찬 공간에 데이터 하나를 더 집어넣기
	// 크기가 더 큰 새 공간 만듬
	int* temp = new int[8];
	// 새 공간에 값을 복사함
	for (int i = 0; i < 4; i++) {
		temp[i] = arr[i];
	}
	// 기존 할당된 공간을 지움
	delete[] arr;
	// 새 공간으로 갈아탐
	arr = temp;
	// 새로운 데이터를 집어넣기
	arr[4] = 4;

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	// 메모리 누수를 막기 위해 동적할당된 메모리 제거
	delete[] arr;

}