#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int c;
    int terbesar = 0;

    cout << "Inputkan bilangan 1: ";
    cin >> a;

    cout << "Inputkan bilangan 2: ";
    cin >> b;

    if (a > b) {
        terbesar = a;
    }
    else if (a < b) {
        terbesar = b;
    }

    cout << "Inputkan bilangan 3: ";
    cin >> c;

    if (terbesar < c) {
        terbesar = c;
    }

    cout << "Bilangan terbesar adalah: " << terbesar << endl;


    return 0;
}