#include <iostream>

using namespace std;

void add_2(int* num) {
	*num += 2;
}

int main(void) {
	int a = 3;
	add_2(&a);

	cout << a << endl;

	return 0;
}