#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;

    cout << "Masukkan angka ke-n dalam fibonacci: ";
    cin >> n;

    cout << "Angka ke-" << n << " dalam fibonacci adalah: ";
    cout << fibonacci(n) << endl;
    return 0;
}