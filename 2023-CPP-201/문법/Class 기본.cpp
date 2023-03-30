// C++
#include <iostream>
#include <string>

using namespace std;

// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 한다.
// class는 default가 private (struct는 default : public)
class Student {
public:
	string name;
	// 문자열로 하지 않는 이유는 성능때문에
	// 일반적으로 문자열은 정수데이터보다 많은 메모리 공간을 요구하며 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수만큼 반복하여 비교해야함
	int grade;
	int age;
	// 열거형(enum)으로 하는 것을 추천 → 가독성과 유지보수를 위해
	// 남자 : 0, 여자 : 1
	int gender;
	string department;
};


int main(void) {
	
	// (struct Student) : 자료형 (C++에서는 Student만 써도 됨)
	class Student information;
	information.name = "임성진";
	information.grade = 990111;
	information.age = 25;
	information.gender = 0;
	information.department = "스포츠과학과 (배구)";

	cout << "이름 : " << information.name << ", 학번 : " << information.grade << ", 나이 : " << information.age << ", 성별 : " << information.gender << ", 학과 : " << information.department << endl;


	return 0;
}