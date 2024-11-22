#include <iostream>
#include <string>

using namespace std;

// Deklarasi tipe data mahasiswa dengan struct
struct Mahasiswa {
    long int nisn; // NISN2
    string nama; // Nama
    int nilai; // Nilai
};


void insertionSortNISN(Mahasiswa mhs[], int size_array) {
    for (int j = 1; j < size_array; j++) {
        int i = j-1;
        Mahasiswa temp = mhs[j];
        while (i >= 0 && mhs[i].nisn > temp.nisn) {
            mhs[i+1] = mhs[i];
            i--;
        }
        mhs[i+1] = temp;
    }

    cout << "Insertion Sort berdasarkan NISN berhasil!" << endl;
}

void binarySearchNISN(Mahasiswa mhs[], int size_array, long int query) {
    bool found = false;
    int i = 0;
    int j = size_array - 1;
    int k = 0;

    while (!found && i <= j) {
        k = (i + j) / 2; // Find the middle index

        if (mhs[k].nisn < query) {
            i = k + 1; // Move the lower bound up
        } else if (mhs[k].nisn == query) {
            found = true; // Match found
            cout << "Ditemukan! NISN: " << mhs[k].nisn << endl;
            cout << "Nama: " << mhs[k].nama << endl;
            cout << "Nilai: " << mhs[k].nilai << endl;
        } else {
            j = k - 1; // Move the upper bound down
        }
    }

    if (!found) {
        cout << "Tidak ditemukan." << endl;
    }
}


int main() {
    // Deklarasi data mahasiswa
    Mahasiswa mhs[7] = {    
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    int size_array = sizeof(mhs) / sizeof(mhs[0]);

    long int cari_nisn = 9965653989;

    insertionSortNISN(mhs, size_array);

    binarySearchNISN(mhs, size_array, cari_nisn);


}