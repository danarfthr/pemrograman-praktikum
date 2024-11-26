#include <iostream>

using namespace std;

int main() {

    // Meminta input dari pengguna untuk difaktorialkan
    int n;
    cout << "Masukkan angka yang ingin difaktorialkan: ";
    cin >> n;

    // Deklarasi base case faktorial, yakni 1
    int faktorial = 1;

    // Looping untuk menghitung faktorial
    for (int i = 1; i <= n; i++) {
        // Setiap i hingga n, dikalikan pada faktorial
        faktorial *= i;
    }

    // Output hasil faktorial
    cout << "Hasil faktorial: " << faktorial << endl;

    return 0;
}