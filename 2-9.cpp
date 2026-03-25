#include <iostream>
#include <string>

using std::cout; using std::endl; using std::cin;

int main() {
	double a, b;
	cout << "두 수를 입력하시요: ";
	cin >> a >> b;
	if (a > b) {
		cout << "두 수 중 더 큰 수는 " << a << "입니다.";
		cout << endl;
	}
	else if (a < b) {
		cout << "두 수 중 더 큰 수는 " << b << "입니다.";
		cout << endl;
	}
	else
		cout << "두 수는 같습니다. " << endl;


	
	return 0;
}