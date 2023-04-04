// C++
#include <iostream>
#include <string>

using namespace std;

struct Person {
	int weight;
	int* height;
};

// 여러 data들을 하나의 의미있는 구조체로 묶어서 관리
// 구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 한다.
// class는 default가 private (struct는 default : public)
class Student {
public:

	// 생성자 (constructor) : 객체가 생성될 때 호출되는 함수
	// 생성자를 정의하지 않으면 default(자동)로 매개변수가 없는 생성자가 정의됨
	// Student(){} → 생성자

	Student(string _name, int _grade, int _age, int _gender, string _department) {
		name = _name;
		grade = _grade;
		age = _age;
		gender = _gender;
		department = _department;
	}

	// class는 멤버변수를 가질 수 있음
	void print(void) {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << grade << endl;
		cout << "나이 : " << age << endl;
		cout << "성별 : " << gender << endl;
		cout << "학과 : " << department<< endl;
	}

private:
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
	// Student information = Student infromation = Student();
	Student information = Student("임성진", 990111, 25, 0, "스포츠과학과(배구)");

	int h = 195;

	struct Person LSJ;
	LSJ.height = &h;
	LSJ.weight = 85;

	cout << "키 : " << LSJ.height << endl; // height가 포인터라 주소값이 출력됨
	cout << "몸무게 : " << LSJ.weight << endl;

	information.print();

	return 0;
}