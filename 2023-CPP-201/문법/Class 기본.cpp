// C++
#include <iostream>
#include <string>

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
struct drink {
	string subun;
	string chumga;
};


int main(void) {
	
	// (struct drink) : �ڷ��� (C++������ drink�� �ᵵ ��)
	struct drink strawberrymilk;
	strawberrymilk.subun = "seoulmilk";
	strawberrymilk.chumga = "kingsberry";

	cout << "���� : " << strawberrymilk.subun << " ÷���� : " << strawberrymilk.chumga << endl;
	

	return 0;
}