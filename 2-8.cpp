#include <iostream>	
using namespace std;

int main() {
	int j = 1;
	for (int i = 1; i < 10; i++) {
		j *= i;
	}
	cout << j << endl;
	return 0;
}