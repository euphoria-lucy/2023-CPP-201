#include <iostream>

using namespace std;

int main(void) {
	double arr[4] = { 1.1, 2.2, 3.3, 4.4 };

	// a의 자료형은 너무 명확하게 int란걸 알 수 있다.
	auto a = 4;

	// x의 자료형은 너무 명확하게 double이란걸 알 수 있다.
	for (auto x : arr) {
		cout << x << endl;
	}

	return 0;

}