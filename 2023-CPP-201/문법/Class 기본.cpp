// C++
#include <iostream>
#include <string>

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �Ѵ�.
// class�� default�� private (struct�� default : public)
class Student {
public:
	string name;
	// ���ڿ��� ���� �ʴ� ������ ���ɶ�����
	// �Ϲ������� ���ڿ��� ���������ͺ��� ���� �޸� ������ �䱸�ϸ� ������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ���ŭ �ݺ��Ͽ� ���ؾ���
	int grade;
	int age;
	// ������(enum)���� �ϴ� ���� ��õ �� �������� ���������� ����
	// ���� : 0, ���� : 1
	int gender;
	string department;
};


int main(void) {
	
	// (struct Student) : �ڷ��� (C++������ Student�� �ᵵ ��)
	class Student information;
	information.name = "�Ӽ���";
	information.grade = 990111;
	information.age = 25;
	information.gender = 0;
	information.department = "���������а� (�豸)";

	cout << "�̸� : " << information.name << ", �й� : " << information.grade << ", ���� : " << information.age << ", ���� : " << information.gender << ", �а� : " << information.department << endl;


	return 0;
}