#include <iostream>
#include <string>

using namespace std;

template <typename T>

class Hero {
public:

    string name;
    T health;
    T attack;
    T defense;

    Hero (std::string name, T health, T attack, T defense) {
        this -> name = name;
        this -> health = health;
        this -> attack = attack;
        this -> defense = defense;
    }


    void Print() {
        cout << "�̸� : " << name << endl;
        cout << "ü�� : " << health << endl;
        cout << "���� : " << attack << endl;
        cout << "��� : " << defense << endl;
    }
};

int main() {
    Hero <int>* Hero_Object = new Hero <int>("����", 437, 65, 37);

    Hero_Object -> Print();

    delete Hero_Object;

    return 0;
}
