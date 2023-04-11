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
		/*hakbun = 990111;
		name = "�Ӽ���";
		age = 18;
		sex = 0;
		department = "���������а�(�豸)"; */
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

	void set_name(string _name) { name =_name; }
	void set_hakbun(int _hakbun) { hakbun = _hakbun; }
	void set_age(int _age) { age = _age; }
	void set_sex(int _sex) { sex = _sex; }
	void set_department(string _department) { department = _department; }


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
	// Student stu1 = Student("�Ӽ���", 990111, 24, 0, "���������а� (�豸)");
	// stu1.print();

	/* Student stu3[2];
	for (int i = 0; i < 2; i++) {
		stu3[i].print();
		printf("\n");
	} */

	// �����Ҵ� : �޸��� ũ�Ⱑ ������ ��(runtime) ������ heap ����
	// C++�� �����Ҵ��� �ݵ�� delete�� �����Ͽ� �޸� ������ ���� �� ����
	/*Student* stu2 = new Student("�ڼ���", 980330, 25, 0, "���������а� (�߱�)");
	stu2->print();

	delete stu2;*/
	
	// ���� ��ü�� ����� "��" �� ����
	// �迭�� ��ҿ� �ش��ϴ� ��ü�� ����� "." ���� ����
	Student* stu4 = new Student[6];
	stu4[0].set_age(24);
	stu4[0].set_name("�Ӽ���");
	stu4[0].set_hakbun(990111);
	stu4[0].set_sex(1);
	stu4[0].set_department("���������а� (�豸)");

	stu4[1].set_age(25);
	stu4[1].set_name("�ڼ���");
	stu4[1].set_hakbun(980330);
	stu4[1].set_sex(0);
	stu4[1].set_department("���������а� (�߱�)");

	for (int i = 0; i < 2; i++) {
		stu4[i].print();
		printf("\n");
	}
	delete[] stu4;

	return 0;
}