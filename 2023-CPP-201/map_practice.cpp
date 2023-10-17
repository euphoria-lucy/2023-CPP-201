#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {

	map<string, int> id;

	id["이정현"] = 2002;
	id["박지성"] = 2002;
	id["이제노"] = 2000;

	map<string, int>::iterator iter;

	// map은 순서가 없기 때문에 iterator로만 반복문을 해야함
	// first : key, second : value
	for (iter = id.begin(); iter != id.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

}