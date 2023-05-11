#include <iostream>

using namespace std;

int main(void) {

	// ptr1 : int 3개짜리 배열을 동적할당 시킨 후 가리킴
	int* ptr1 = new int[3];
	ptr1[0] = 3, ptr1[1] = 7, ptr1[2] = 65;

	// ptr2 : 별도의 공간을 동적할당한 후 ptr1이 가리키는 값을들 복사함
	// 이러한 복사를 깊은복사(deep copy)
	int* ptr2 = new int[3];
	for (int i = 0; i < 3; i++) {
		ptr2[i] = ptr1[i];
	}

	// 깊은 복사를 하면 고유의 공간을 가지므로 ptr2[1]은 4로 바뀌지 않게 됨
	ptr1[1] = 4;

	for (int i = 0; i < 3; i++) {
		cout << ptr1[i] << " " << ptr2[i] << endl;
	}

	delete[] ptr1;
	delete[] ptr2;

	return 0;
}