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
	}

	Student(string _name, int _grade, int _age, int _gender, string _department) {
		name = _name;
		grade = _grade;
		age = _age;
		gender = _gender;
		department = _department;
	}

	// class�� ��������� ���� �� ����
	void print(void) {
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << grade << endl;
		cout << "���� : " << age << endl;
		cout << "���� : " << gender << endl;
		cout << "�а� : " << department<< endl;
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
	Student information = Student("�Ӽ���", 990111, 25, 0, "���������а�(�豸)"); // CLASS�� �� class �����ϰ� �ڵ� �ۼ�

	information.print();

	return 0;
}