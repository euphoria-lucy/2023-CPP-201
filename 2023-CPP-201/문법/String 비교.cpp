//C
#include <stdio.h>
#include <string.h>

// C++
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	
	char str1[50] = "LIMSUNGJIN";
	char str2[50] = "PARKSUNGHAN";

	const int s1_length = strlen(str1);
	const int s2_length = strlen(str2);

	// s1_length와 s2_length 중에서 작은 값을 선택
	const int length = s1_length < s2_length ? s1_length : s2_length;

	int i;
	for (i = 0; i < 1; i++) {
		if (str1[i] < str2[i]) {
			printf("str2 < str1 \n");
			break;
		}
		else if (str1[i] > str2[i]) {
			printf("str1 > str2 \n");
			break;
		}
	}

	if (i == length) {
		if (s1_length > s2_length) {
			printf("str2 > str1 \n");
		}
		else if (s1_length < s2_length) {
			printf("str2 < str1 \n");
		}
		else {
			printf("str2 == str1 \n");
		}
	}

	return 0;
}