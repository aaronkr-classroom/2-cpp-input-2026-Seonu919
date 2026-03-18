#include <iostream>
#include <string>
using std::cin; 
using std::cout;
using std::endl; 


// * 네모 만들기
int main() {
	cout << "1. Triangle >>> ";

	cout << "What size ? >>> ";

	int size;
	cin >> size; // 10
	//행 출력
	for (int i = 0; i < size; i++) {
		//열 출력
		for (int j = 0; j < i; j++) {
			cout << " "; // 10 x 10 네모
		}
		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}

