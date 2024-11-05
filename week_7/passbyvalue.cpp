#include <iostream>
using namespace std;

// Deklarasi fungsi pass by value
void tambahLima(int a) {
    a = a + 5;
    cout << "Angka dalam fungsi: " << a << endl;
}

int main() {
    cout << "Mendeklarasikan angka 5..." << endl;
    int a = 5;
    cout << "Angka sebelum masuk fungsi: " << a << endl;
    tambahLima(a);
    cout << "Angka setelah masuk fungsi: " << a << endl;
    
    return 0;
}