#include <iostream>
#include <string>
using namespace std;

// Membuat fungsi menyapa seseorang dengan parameter string
void sapaOrang(string a) {
    cout << "Salam kenal, " << a << "!" << endl;
    // Fungsi ini tanpa menggunakan return
}

int main() {
    // Deklarasi variabel string
    string nama;
    // Input dari pengguna
    cout << "Masukkan nama Anda: ";
    getline(cin, nama);
    
    // Menjalankan fungsi tanpa pengembalian nilai
    sapaOrang(nama);
}