#include <iostream>

using namespace std;

void multiplication(int n) {
    int total = 10;
    for (int i = 1; i <= total; i++) {
        cout << n << " x " << i << " = " << n*i << endl;
    }
}

int main(int argc, char* argv[]) {
    int n;
    cout << "Input : ";
    cin >> n;
    cout << "Output: " << endl;
    multiplication(n);

    return 0;
}