#include <iostream>

using namespace std;

// �Լ� �����ε��� �ؼ� �Լ��̸��� �����ϰ� �� �� ����.
// �Լ� �����ε��� �ϸ� �Լ��̸��� ������ �Ű������� �ٸ�
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