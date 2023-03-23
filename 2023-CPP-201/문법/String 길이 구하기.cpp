#include <iostream>
#include <string>

int main(void) {

	char str[30] = "LimSungJin";
	int size = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		size++;
	}

	printf("문자열의 길이 : %d \n", size);
	return 0;
}