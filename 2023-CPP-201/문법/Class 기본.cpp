#include <iostream>
#include <string>

using namespace std;


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

	// : ������� �ʱ�ȭ�� �ϸ� const ��������� �ʱ�ȭ �� �� ����
	Student(string _name, int _hakbun, int _age, int _sex, string _department)
		:name(_name), hakbun(_hakbun), age(_age), sex(_sex), department(_department)
	{
	}

	// class�� ��������� ���� �� �ִ�
	void print(void)
	{
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << hakbun << endl;
		cout << "���� : " << age << endl;
		cout << "���� (0)����, (1)���� : " << sex << endl;
		cout << "�а� : " << department << endl;
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
	// �����Ҵ� : �޸��� ũ�Ⱑ �������� �� ������
	Student stu1 = Student("�Ӽ���", 990111, 24, 0, "���������а� (�豸)");
	// stu1.print();

	// �����Ҵ� : �޸��� ũ�Ⱑ ������ ��(runtime) ������ heap ����
	Student* stu2 = new Student("�ڼ���", 980330, 25, 0, "���������а� (�߱�)");
	stu2->print();

	delete stu2;

	return 0;
}