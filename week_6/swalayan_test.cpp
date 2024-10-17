#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAX = 50;

// Struktur untuk menyimpan informasi barang
struct barang {
    int kode;
    string nama;
    int harga;
    int jumlah;
};

// Fungsi untuk membaca data barang dari file
vector<barang> listBarang(ifstream& input, int n) {
    vector<barang> listBarang(n);
    for (int i = 0; i < n; i++) {
        // Membaca data untuk setiap barang
        input >> listBarang[i].kode;
        input.ignore();
        getline(input, listBarang[i].nama);
        input >> listBarang[i].harga;
        input >> listBarang[i].jumlah;
    }
    return listBarang;
}

// Fungsi untuk menghitung jumlah total barang
int jumlahtotal(const vector<barang>& listBarang) {
    int jumlahtotal = 0;
    for (const auto& item : listBarang) {
        jumlahtotal += item.jumlah;
    }
    return jumlahtotal;
}

// Fungsi untuk menghitung rata-rata harga barang
double ratatotal(const vector<barang>& listBarang) {
    double ratarata = 0;
    for (const auto& item : listBarang) {
        ratarata += item.harga;
    }
    ratarata = ratarata / listBarang.size();
    return ratarata;
}

int main() {
    int pilihan;
    string namaFile;

    // Meminta pengguna memilih file test
    cout << "Pilih file test yang akan digunakan:" << endl;
    cout << "1. test_1.txt" << endl;
    cout << "2. test_2.txt" << endl;
    cout << "3. test_3.txt" << endl;
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;
    
    // Menentukan nama file berdasarkan pilihan pengguna
    switch(pilihan) {
        case 1:
            namaFile = "test_1.txt";
            break;
        case 2:
            namaFile = "test_2.txt";
            break;
        case 3:
            namaFile = "test_3.txt";
            break;
        default:
            cout << "Pilihan tidak valid. Program berhenti." << endl;
            return 1;
    }

    // Membaca jumlah barang
    ifstream input(namaFile);
    if (!input.is_open()) {
        cout << "Error: Tidak dapat membuka file." << endl;
        return 1;
    }

    int n;
    input >> n;

    // Memeriksa apakah jumlah barang valid
    if (n <= 0 || n > MAX) {
        cout << "Error: Jumlah barang tidak valid." << endl;
        return 1;
    }

    // Membaca data barang dari file
    vector<barang> swalayan = listBarang(input, n);

    // Menghitung jumlah total dan rata-rata harga
    int calculatedJumlahTotal = jumlahtotal(swalayan);
    double calculatedRataTotal = ratatotal(swalayan);

    // Membaca nilai yang diharapkan dari file
    int expectedJumlahTotal;
    double expectedRataTotal;
    input >> expectedJumlahTotal >> expectedRataTotal;

    for (int i = 0; i < n; i++) {
        cout << "Barang ke " << i + 1 << endl;
        cout << "====================" << endl;
        cout << "Kode: " << swalayan[i].kode << endl;
        cout << "Nama: " << swalayan[i].nama << endl;
        cout << "Harga: " << swalayan[i].harga << endl;
        cout << "Jumlah: " << swalayan[i].jumlah << endl;
        cout << endl;
    }

    // Menampilkan hasil perhitungan dan nilai yang diharapkan
    cout << "Jumlah Total Terhitung: " << calculatedJumlahTotal << endl;
    cout << "Jumlah Total Diharapkan: " << expectedJumlahTotal << endl;
    cout << "Rata-rata Harga Terhitung: " << fixed << setprecision(2) << calculatedRataTotal << endl;
    cout << "Rata-rata Harga Diharapkan: " << fixed << setprecision(2) << expectedRataTotal << endl;

    // Memeriksa apakah hasil perhitungan sesuai dengan yang diharapkan
    bool isValid = (calculatedJumlahTotal == expectedJumlahTotal) && 
                   (abs(calculatedRataTotal - expectedRataTotal) < 0.01);

    // Menampilkan hasil validasi
    cout << "\nHasil Tes: " << (isValid ? "Valid" : "Tidak Valid") << endl;

    return 0;
}