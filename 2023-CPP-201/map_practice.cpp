#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {

	map<string, int> id;

	id["������"] = 2002;
	id["������"] = 2002;
	id["������"] = 2000;

	map<string, int>::iterator iter;

	// map�� ������ ���� ������ iterator�θ� �ݺ����� �ؾ���
	// first : key, second : value
	for (iter = id.begin(); iter != id.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

}