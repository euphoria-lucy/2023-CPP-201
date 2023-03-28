//C
#include <stdio.h>
#include <string.h>

// C++
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	
	// C++ String → 편리함
	// str2가 str1보다 사전(dictionary)에 더 늦게 나옴
	string str1 = "LIMSUNGJIN";
	string str2 = "PARKSUNGHAN";

	if (str2 > str1) {
		cout << "str2 > str1";
	} else if (str1 > str2){
		cout << "str1 > str2";
	}
	else {
		cout << "str1 == str2";
	}

	return 0;
}