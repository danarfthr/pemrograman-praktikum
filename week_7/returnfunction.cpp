#include <iostream>
using namespace std;

// Membuat fungsi menambahkan angka lima
int tambahLima(int a) {
    // Menggunakan return untuk mengembalikan hasil tambah lima;
    return a + 5;
}

int main() {
    // Deklarasi variabel
    int a;
    // Input pengguna
    cout << "Masukkan angka: ";
    cin >> a;

    // Print hasil fungsi
    cout << "Hasil: " << tambahLima(a) << endl;
    
    return 0;
}