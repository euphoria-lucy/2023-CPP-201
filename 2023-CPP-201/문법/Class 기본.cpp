// C++
#include <iostream>
#include <string>

using namespace std;

// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
struct drink {
	string subun;
	string chumga;
};


int main(void) {
	
	// (struct drink) : 자료형 (C++에서는 drink만 써도 됨)
	struct drink strawberrymilk;
	strawberrymilk.subun = "seoulmilk";
	strawberrymilk.chumga = "kingsberry";

	cout << "수분 : " << strawberrymilk.subun << " 첨가물 : " << strawberrymilk.chumga << endl;
	

	return 0;
}