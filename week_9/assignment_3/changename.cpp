#include <iostream>
#include <string>

using namespace std;

// Deklarasi tipe data mahasiswa dengan struct
struct Mahasiswa {
    long int nisn; // NISN2
    string nama;   // Nama
    int nilai;     // Nilai
};

// Function to sort Mahasiswa by nilai using Insertion Sort
void insertionSortNilai(Mahasiswa mhs[], int size_array) {
    for (int j = 1; j < size_array; j++) {
        int i = j - 1;
        Mahasiswa temp = mhs[j];
        while (i >= 0 && mhs[i].nilai > temp.nilai) {
            mhs[i + 1] = mhs[i];
            i--;
        }
        mhs[i + 1] = temp;
    }

    cout << "Insertion Sort berdasarkan Nilai berhasil!" << endl;
}

// Function to perform Sequential Search by nilai
int sequentialSearchNilaitoJoko(Mahasiswa mhs[], int size_array, int query) {
    for (int i = 0; i < size_array; i++) {
        // Skip already modified elements
        if (mhs[i].nilai == query && mhs[i].nama != "Joko") {
            cout << "Nilai " << query << " ditemukan!" << endl;
            cout << "Nama: " << mhs[i].nama << endl;
            cout << "NISN: " << mhs[i].nisn << endl;
            return i; // Return index of the found element
        }
    }

    cout << "Nilai " << query << " tidak ditemukan atau sudah dimodifikasi." << endl;
    return -1; // Return -1 if not found
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

    int cari_nilai = 90;

    // Sort the array by nilai
    insertionSortNilai(mhs, size_array);

    // Modify all entries with nilai == 60
    int index;
    do {
        index = sequentialSearchNilaitoJoko(mhs, size_array, cari_nilai);
        if (index != -1) { // Only modify if index is valid
            mhs[index].nama = "Joko";
            cout << "Nama pada index " << index << " telah diubah menjadi Joko." << endl;
        }
    } while (index != -1); // Continue until no more matches are found

    // Output the final array
    cout << "\nData Mahasiswa setelah perubahan:" << endl;
    for (int i = 0; i < size_array; i++) {
        cout << "NISN: " << mhs[i].nisn << ", Nama: " << mhs[i].nama << ", Nilai: " << mhs[i].nilai << endl;
    }

    return 0;
}