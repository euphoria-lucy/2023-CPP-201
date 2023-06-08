#include <iostream>

using namespace std;

// 부모 생성자가 먼저 호출한 뒤 자식 생성자가 호출됨 → 자식 소멸자가 먼저 호출된 뒤 부모 소멸자가 호출됨

class Animal {
public:
	Animal() { cout << "Animal 생성자()" << endl; }
	~Animal() { cout << "Animal 소멸자()" << endl; }
};

class Rabbit : public Animal {
public:
	// ★ 매개변수가 없는 부모 생성자가 자동으로 먼저 호출됨
	Rabbit() { cout << "Rabbit 생성자()" << endl; }
	~Rabbit() { cout << "Rabbit 소멸자()" << endl; }
};

int main(void) {

	Rabbit* rabbit = new Rabbit();
	delete rabbit;

}