#include <iostream>

using namespace std;

int main(void) {

	// ptr1 : int 3개짜리 배열을 동적할당 시킨 후 가리킴
	int* ptr1 = new int[3];
	ptr1[0] = 3, ptr1[1] = 7, ptr1[2] = 65;

	// ptr2 : 별도의 동적할당을 하지 않고 ptr1의 주소값만 복사함
	// 이러한 복사를 얕은복사 (shallow copy)
	int* ptr2 = ptr1; // 주소값만 복사함

	// 얕은 복사를 하면 원본 데이터에 종속됨
	// 즉, ptr2[1]도 같이 바뀜
	ptr1[1] = 4;

	for (int i = 0; i < 3; i++) {
		cout << ptr1[i] << " " << ptr2[i] << endl;
	}

	return 0;
}