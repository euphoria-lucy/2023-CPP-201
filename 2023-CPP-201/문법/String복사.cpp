#include <stdio.h>
#include <string.h> // ���ڿ� ���� �Լ�

int main(void) {

	char str[30] = { 0, };
	char str2[30] = "c_insert";

	strcpy(str, str2); // str���ٰ� str2�� �ִ� ���ڿ��� �ְ���

	printf("%s \n", str);

	return 0;
}