#include <iostream>
#include <string> // std::string�� ������� (.h X)

int main(void) {

	std::string str1;
	std::string str2 = "C++_insert";

	str1 = str2; // ���࿬���ڷ� ���ڿ� ���簡 ����
	std::cout << str1 << std::endl;

	return 0;
}