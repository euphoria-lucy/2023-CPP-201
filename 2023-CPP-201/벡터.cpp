#include <iostream>
#include <vector>

using namespace std;

int main() {
	// 전통적인 배열은 크기가 고정되어 있으나, 
	// 벡터는 크기가 자유롭게 변할 수 있는 동적배열
	vector<int> arr;

	arr.reserve(4); // 벡터의 크기를 4로 함
	arr.push_back(65);
	arr.push_back(51);
	arr.push_back(3);
	arr.push_back(7);

	// int* arr = new int[4];
	// arr[0] = 65, arr[1] = 51, arr[2] = 3, arr[3] = 7;

	// 4개가 꽉 찬 공간에 데이터 하나를 더 집어넣기
	arr.push_back(4);

	// 원소의 주소를 나타내는 반복자 (iterator)
	vector<int>::iterator iter;

	// 4개가 꽉 찬 공간에 데이터 하나 더 집어넣기
	for (iter = arr.begin(); iter != arr.end(); iter++) {
		cout << *iter << " ";
	}

}