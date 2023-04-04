// C++
#include <iostream>
#include <string>

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �Ѵ�.
// class�� default�� private (struct�� default : public)
class Student {
public:

	// ������ (constructor) : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	// �����ڸ� �������� ������ default(�ڵ�)�� �Ű������� ���� �����ڰ� ���ǵ�
	// Student(){} �� ������

	Student() {
		name = "�Ӽ���";
		grade = 990111;
		age = 25;
		gender = 0;
		department = "���������а� (�豸)";
	}

	// class�� ��������� ���� �� ����
	void print(void) {
		cout << "�̸� : " << name << ", �й� : " << grade << ", ���� : " << age << ", ���� : " << gender << ", �а� : " << department << endl;
	}

private:
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
	// Student information = Student infromation = Student();
	Student information = Student(); // CLASS�� �� class �����ϰ� �ڵ� �ۼ�

	information.print();

	return 0;
}