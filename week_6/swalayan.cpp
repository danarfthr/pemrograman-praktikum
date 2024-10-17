#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

// Konstanta untuk jumlah maksimum barang
const int MAX = 50;

// Struktur untuk menyimpan informasi barang
struct barang{
    int kode;
    string nama;
    int harga;
    int jumlah;
};

// Fungsi untuk memasukkan data barang
vector<barang> listBarang(int n) {
    vector<barang> listBarang(n);
    for (int i = 0; i < n; i++){
        // Meminta input untuk setiap barang
        cout << "Barang ke " << i+1 << endl;
        cout << "====================" << endl;
        cout << "Kode: ";
        cin >> listBarang[i].kode;
        cout << "Nama: ";
        getline(cin >> ws, listBarang[i].nama);
        cout << "Harga: ";
        cin >> listBarang[i].harga;
        cout << "Jumlah: ";
        cin >> listBarang[i].jumlah;
        cout << endl;
    }
    return listBarang;
}

// Fungsi untuk menghitung jumlah total barang
int jumlahtotal(vector<barang> listBarang){
    int jumlahtotal = 0;
    for (int i = 0; i < listBarang.size(); i++){
        jumlahtotal += listBarang[i].jumlah;
    }
    return jumlahtotal;
}

// Fungsi untuk menghitung rata-rata harga barang
double ratatotal(vector<barang> listBarang){
    double ratarata = 0;
    for (int i = 0; i < listBarang.size(); i++){
        ratarata += listBarang[i].harga;
    }
    ratarata = ratarata/listBarang.size();
    return ratarata;
}

int main() {
    int n = 0;
    // Meminta jumlah barang yang akan diinput (1-50)
    while (n <= 0 || n > MAX){
        cout << "Masukkan jumlah barang (maksimal 50): ";
        cin >> n;
    }
    // Memanggil fungsi untuk memasukkan data barang
    vector<barang> swalayan = listBarang(n);
    // Menampilkan hasil perhitungan
    cout << "Jumlah harga barang: " << jumlahtotal(swalayan) << endl;
    cout << "Rata-rata harga barang: Rp" << fixed << setprecision(2) << ratatotal(swalayan) << endl;
    return 0;
}