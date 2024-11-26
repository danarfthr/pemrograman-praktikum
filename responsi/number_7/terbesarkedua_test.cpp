#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Deklarasi array untuk menyimpan angka
    vector<int> bil = {312, 153, 641, 612, 622, 165, 856, 745, 718, 783}; // HARDCODE UNTUK TEST CASE

    // Input angka ke dalam array
    int n = 10;     // HARDCODE UNTUK TEST CASE
    // cout << "Masukkan ukuran array angka: ";
    // cin >> n;

    // Input elemen array
    // int num;
    for (int i = 0; i < n; i++) {
        cout << "Angka ke-" << i + 1 << " : " << bil[i] << endl;
        // cin >> num;
        // bil.push_back(num);
    }

    // Meng-assign untuk angka terbesar adalah angka pertama pada array
    int terbesar = bil[0];
    // Mendeklarasikan variabel angka terbesar kedua
    int terbesarKedua;
    // Loop untuk setiap elemen pada array
    for (int i = 0; i < n; i++) {
        // Apabila elemen ke-i lebih besar daripada variabel terbesar
        if (bil[i] > terbesar) {
            terbesarKedua = terbesar; // Assign variabel terbesarkedua menjadi terbesar saat ini
            terbesar = bil[i]; // Mengganti angka terbesar dengan elemen ke=i dalam array
        // Apabila elemen ke-i lebih besar daripada variabel terbesar kedua namun bukan merupakan variabel terbesar
        } if (bil[i] > terbesarKedua && bil[i] != terbesar) {
            terbesarKedua = bil[i]; // Mengganti variabel terbesarkedua dengan elemen ke-i dalam array
        }
    }

    // Output hasil dari program
    cout << "Bilangan terbesar kedua adalah: " << terbesarKedua << endl;

    return 0;
}