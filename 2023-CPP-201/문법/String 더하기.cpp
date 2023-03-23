//C
#include <stdio.h>
#include <string.h>

// C++
#include <iostream>
#include <string>

int main(void) {
	char str1[30] = "LIMSUNGJIN ";
	char str2[30] = "PARKSUNGHAN";

	strcat(str1, str2);
	printf("%s \n", str1);

	return 0;
}