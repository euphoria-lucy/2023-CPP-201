#include <iostream>
#include <string>

using namespace std;

struct Actor {
	string name;
	string dialog;
};

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
// ����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� �սô�
// class�� ����Ʈ�� private (struct�� ����Ʈ�� public)
class Student {
public:
	// ������(constructor) : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	Student()
	{
		hakbun = 990111;
		name = "�Ӽ���";
		age = 18;
		sex = 0;
		department = "���������а�(�豸)";
	}

	Student(string name, int hakbun, int age, int sex, string department)
	{
		this->hakbun = hakbun;
		this->name = name;
		this->age = age;
		this->sex = sex;
		this->department = department;
	}

	// class�� ��������� ���� �� �ִ�
	void print(void)
	{
		cout << "�̸�: " << name << endl;
		cout << "�й�: " << hakbun << endl;
		cout << "����: " << age << endl;
		cout << "����(0)����, (1)����: " << sex << endl;
		cout << "�а�: " << department << endl;
	}

private:
	string name;

	// ���ɶ����� hakbun�� ���ڿ��� ���� ����
	// �Ϲ������� ���ڿ��� ���������ͺ��� ���� �޸� ������ �䱸�ϸ�
	// ������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ� ��ŭ �ݺ��Ͽ� ���ؾ���
	int hakbun;
	int age;
	// �������� ���������� ���� ������(enum)���� �ϴ°��� ��õ
	// 0: ����, 1: ����
	int sex;
	string department;
};


int main(void)
{
	Student stu1 = Student("�Ӽ���", 990111, 25, 0, "���������а� (�豸)");
	// stu1.print();

	struct Actor KDY;
	KDY.name = "�赵��";
	KDY.dialog = "�������";

	struct Actor* ptr = &KDY;

	// ptr->name, (*ptr).name ���� ���
	cout << "�̸� : " << ptr->name << endl;
	cout << "��� : " << (*ptr).dialog << endl;

	return 0;
}