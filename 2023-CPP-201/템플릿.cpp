#include <iostream>
#include <string.h>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

float  sum(float a, float b) {
	return a + b;
}

string sum(string a, string b) {
	return a + b;
}

int main(void) {

	cout << sum(65, 2) << endl;
	cout << sum(65.f, 2.f) << endl;
	cout << sum("65", " 2") << endl;

}