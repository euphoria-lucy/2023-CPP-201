#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	
	// key : ���ڿ�, value : ����
	map<string, int> moving;

	moving["�ڼ���"] = 1998;
	moving["������"] = 2002;
	moving["������"] = 2004;

	map<string, int>::iterator iter;

	// map�� ������ ���� ������ iterator�θ� �ݺ����� �ؾ���
	// first : key, second : value
	for (iter = moving.begin(); iter != moving.end(); iter++) {
		cout << iter -> first << iter -> second << endl;
	}

}