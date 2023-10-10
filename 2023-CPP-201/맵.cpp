#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	
	// key : 문자열, value : 정수
	map<string, int> moving;

	moving["박성한"] = 1998;
	moving["이정현"] = 2002;
	moving["김정민"] = 2004;

	map<string, int>::iterator iter;

	// map은 순서가 없기 때문에 iterator로만 반복문을 해야함
	// first : key, second : value
	for (iter = moving.begin(); iter != moving.end(); iter++) {
		cout << iter -> first << iter -> second << endl;
	}

}