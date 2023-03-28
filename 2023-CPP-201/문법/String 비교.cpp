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

	// 함수 인자 위치와 결과값(-1, 1)이 헷갈려
	int result = strcmp(str1, str2);
	if (result == -1) {
		printf("str2 > str1");
	} else if (result == 1){
		printf("str1 > str2");
	}
	else if (result == 0) {
		printf("str1 == str2");
	}

	return 0;
}