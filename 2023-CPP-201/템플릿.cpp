#include <iostream>
#include <string.h>

using namespace std;

template <typename T>
T sum(T a, T b) {
	return a + b;
}


int main(void) {

	cout << sum <int> (65, 2) << endl;
	cout << sum <float> (65.f, 2.f) << endl;
	cout << sum <string> ("65", " 2") << endl;

}