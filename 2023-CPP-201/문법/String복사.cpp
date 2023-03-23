#include <iostream>
#include <string> // std::string이 들어있음 (.h X)

int main(void) {

	std::string str1;
	std::string str2 = "C++_insert";

	str1 = str2; // 대행연산자로 문자열 복사가 가능
	std::cout << str1 << std::endl;

	return 0;
}