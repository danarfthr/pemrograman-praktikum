#include <iostream>
#include <vector>
#include <string>
using namespace std;

void cetakArray(vector<int> arr) { // Deklarasi fungsi untuk mencetak array
    for (int i = 0; i < arr.size(); i++) { // Looping untuk mencetak array
        cout << arr[i] << " "; // Cetak elemen ke-i
    }
    cout << endl;
}

vector<string> fizzbuzz() {
    vector<string> fizzbuzz(101); // Deklarasi vector dengan 101 elemen, karena dalam deklarasi array 0 tak dihitung
    for (int i = 1; i <= 100; i++) { // Looping dari 1 sampai 100
        if (i % 3 == 0 && i % 5 == 0) { // Jika i habis dibagi 3 dan 5
            fizzbuzz[i] += "FizzBuzz"; // Tambah "FizzBuzz" ke elemen ke-i
        } else if (i % 3 == 0) { // Jika i habis dibagi 3
            fizzbuzz[i] += "Fizz"; // Tambah "Fizz" ke elemen ke-i
        } else if (i % 5 == 0) { // Jika i habis dibagi 5
            fizzbuzz[i] += "Buzz";  // Tambah "Buzz" ke elemen ke-i
        } else // Jika i tidak habis dibagi 3 dan 5
            fizzbuzz[i] += to_string(i); // Ubah i menjadi string dan tambah ke elemen ke-i
    }
    return fizzbuzz;
}

vector<int> reverse(const vector<int>& arr) { // Deklarasi fungsi untuk reverse array
    vector<int> reversed; // Deklarasi vector reversed
    for (int i = arr.size() - 1; i >= 0; i--) { // Looping dari elemen terakhir array arr
        reversed.push_back(arr[i]); // Menambahkan elemen ke-i dari arr ke reversed
    }
    return reversed; // Mengembalikan reversed
}

int main() {
    bool run = true;
    // Membuat menu sehingga pengguna dapat memilih program yang ingin dijalankan
    while (run) {
        int choice;
        cout << endl;
        cout << "========Pilih Menu=========" << endl;
        cout << "1. FizzBuzz (1-100)" << endl;
        cout << "2. Reverse Array" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih: ";
        cin >> choice;

        // Switch case untuk memilih program yang ingin dijalankan
        switch (choice) {
            case 1: { // FizzBuzz
                vector<string> fizzbuzzArr = fizzbuzz();
                for (int i = 1; i < fizzbuzzArr.size(); i++) {
                    cout << fizzbuzzArr[i] << endl;
                }
                break;
            }
            case 2: { // Reverse Array
                int n;
                vector<int> arr; // Deklarasi vector arr
                cout << "Array size: "; // Meminta input ukuran array
                cin >> n;
                cout << "Input: "; // Meminta input elemen array
                for (int i = 0; i < n; i++) {
                    int x;
                    cin >> x;
                    arr.push_back(x);
                }
                cout << "Menggunakan fungsi reverse..." << endl;
                cout << "Array: ";
                cetakArray(arr);
                vector<int> reversed = reverse(arr); // Menggunakan fungsi reverse
                cout << "Output: ";
                cetakArray(reversed);
                break;
            }
            case 3: {
                run = false;
                break;
            }
            default: {
                cout << "Pilihan tidak valid" << endl;
                break;
            }
        }
    }
    return 0;
}