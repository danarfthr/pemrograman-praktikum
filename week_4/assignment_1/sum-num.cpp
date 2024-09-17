#include <iostream>

using namespace std;

int main() {
    int n;
    int jumlah;

    cout << "Masukkan angka n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        jumlah = jumlah + i;
    }

    cout << "Hasil: " << jumlah << endl;

    return 0;
}