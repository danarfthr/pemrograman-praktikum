#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int c;
    int terbesar = 0;

    a = 4;
    cout << "Inputkan bilangan 1: " << a << endl;

    b = 8;
    cout << "Inputkan bilangan 2: " << b << endl;

    if (a > b) {
        terbesar = a;
    }
    else if (a < b) {
        terbesar = b;
    }

    c = 20;
    cout << "Inputkan bilangan 3: " << c << endl;

    if (terbesar < c) {
        terbesar = c;
    }

    cout << "Bilangan terbesar adalah: " << terbesar << endl;


    return 0;
}