#include <iostream>
#include <string>

int main(void) {

	char str[30] = "LimSungJin";
	int size = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		size++;
	}

	printf("���ڿ��� ���� : %d \n", size);
	return 0;
}