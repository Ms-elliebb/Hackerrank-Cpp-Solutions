
#include <iostream>
using namespace std;

int a, b, c, d;

int mostNumber() {
    int greaterNumber1, greaterNumber2;

    if (d > a) {
        greaterNumber1 = d;
    } else {
        greaterNumber1 = a;
    }
    
    if (b > c) {
        greaterNumber2 = b;
    } else {
        greaterNumber2 = c;
    }

    if (greaterNumber1 < greaterNumber2) {
        cout << greaterNumber2 << endl;
    } else {
        cout << greaterNumber1 << endl;
    }

    return 0;
}

int main() {
    cin >> a >> b >> c >> d;  
    mostNumber();

    return 0;
}
