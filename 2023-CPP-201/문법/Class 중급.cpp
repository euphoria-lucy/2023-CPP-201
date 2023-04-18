#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class MString {
public:

	MString(const char* str) {
		unsigned int str_length = strlen(str);
		// �ʿ��� ���̸�ŭ ���ڿ� �����Ҵ�
		c_str_ = new char[str_length + 1]; // '\0'(�ι���) ���� + 1
		strcpy(c_str_, str);
	}

	unsigned int size() { return size_; }
	char* c_str() { return c_str_; }
private:
	unsigned int size_; // ���ڿ��� ����
	char* c_str_; // ���ڿ��� ����Ű�� �ּ�
};

int main(void) {
	MString str = MString("LIM SUNG-JIN");
	cout << str.c_str() << endl;
	return 0;

}