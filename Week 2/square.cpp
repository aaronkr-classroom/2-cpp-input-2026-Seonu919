#include <iostream>
#include <string>
using namespace std;


// * 네모 만들기
int main() {
	cout << "1. Square OR 2. Rect? >>> ";

	int option;
	cin >> option;

	if (option != 1 || option != 2) {
		cout << "Error : Only choose 1 or 2!";
		return 0x34AF; // 16진법
	}
	cout << "What size ? >>> ";

	int size;
	cin >> size; // 10
	//행 출력
	for (int i = 0; i < size; i++) {
		//열 출력
		for (int j = 0; j < size; j++) {
			if (option == 1) {
				cout << "*"; // 10 x 10 네모
			}
			else if (option == 2) {
				cout << "**"; // 20 x 10 직사각형
			}
		//행 끝 줄 바꿈
		cout << endl;
	}








	return 0;
}

