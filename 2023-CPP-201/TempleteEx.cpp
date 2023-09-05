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
        cout << "이름 : " << name << endl;
        cout << "체력 : " << health << endl;
        cout << "공격 : " << attack << endl;
        cout << "방어 : " << defense << endl;
    }
};

int main() {
    Hero <int>* Hero_Object = new Hero <int>("정민", 437, 65, 37);

    Hero_Object -> Print();

    delete Hero_Object;

    return 0;
}
