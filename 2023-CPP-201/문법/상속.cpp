#include <iostream>

using namespace std;

// �θ� �����ڰ� ���� ȣ���� �� �ڽ� �����ڰ� ȣ��� �� �ڽ� �Ҹ��ڰ� ���� ȣ��� �� �θ� �Ҹ��ڰ� ȣ���

class Animal {
public:
	Animal() { cout << "Animal ������()" << endl; }
	~Animal() { cout << "Animal �Ҹ���()" << endl; }
};

class Rabbit : public Animal {
public:
	// �� �Ű������� ���� �θ� �����ڰ� �ڵ����� ���� ȣ���
	Rabbit() { cout << "Rabbit ������()" << endl; }
	~Rabbit() { cout << "Rabbit �Ҹ���()" << endl; }
};

int main(void) {

	Rabbit* rabbit = new Rabbit();
	delete rabbit;

}