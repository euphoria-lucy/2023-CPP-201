#include <iostream>

using namespace std;

// 함수 오버로딩을 해서 함수이름을 간결하게 할 수 있음.
// 함수 오버로딩을 하면 함수이름은 같지만 매개변수가 다름
int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}

int main(void) {
	cout << sum(2, 9) << endl;
	cout << sum(1.11f, 3.3f) << endl;
	return 0;
}