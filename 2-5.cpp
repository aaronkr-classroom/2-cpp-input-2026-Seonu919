#include <iostream>
using std::cout; using std::endl;

int main() {
    // 1. 정사각형
    int a = 5;
    cout << "정사각형 (5x5)" << endl;
    for (int i = 0; i < a; i++) {         
        for (int j = 0; j < a; j++) {    
            cout << "* ";
        }
        cout << endl;                             
    }
    cout << endl;

    // 2. 직사각형
    int width = 7;
    int height = 4;
    cout << "직사각형 (가로 7, 세로 4)" << endl;
    for (int i = 0; i < height; i++) {         
        for (int j = 0; j < width; j++) {    
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // 3. 삼각형
    int triangle = 5;
    cout << "직각 삼각형 (높이 5)" << endl;
    for (int i = 1; i <= triangle; i++) {
        for (int j = 0; j < i; j++) {          
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}