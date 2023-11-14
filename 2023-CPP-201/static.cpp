#include <iostream>
#include <map>
#include <string>

using namespace std;

class Champ {
public:
	// 함수의 선언
	Champ(const string& name);
	static int get_cnt();
private:
	static int cnt_;
};

// 함수를 바깥에서 정의할 때는 멤버변수나 멤버변수 이름 앞에 클래스 이름 ::
Champ::Champ(const string& name) {
	++cnt_;
}

int Champ::get_cnt() {
	return cnt_;
}

// static 멤버변수는 모주곤 바깥에서 정의 (const는 제외)
int Champ::cnt_ = 0;

int main() {
	Champ* a = new Champ("김정민");
	Champ* b = new Champ("이민준");
	Champ* c = new Champ("박지환");
	// Champ::cnt_의 값은 3
	// cnt_ 변수는 모드가 공유하기 때문에 한 개만 존재하고
	// Champ형 객체는 2개 있다

	// 객체를 생성하지 않아도 static 멤버함수를 호출할 수 있다
	cout << Champ::get_cnt() << endl;
	// cout << a->Champ::get_cnt() << endl;
	// cout << b->Champ::get_cnt() << endl;

}