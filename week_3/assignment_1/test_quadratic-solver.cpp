#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Deklarasi variabel
    float a;
    float b;
    float c;
    float discriminant;
    float x1; // Variabel apabila ada dua penyelesaian
    float x2; // Variabel apabila ada dua penyelesaian
    float x; // Variabel apabila hanya satu penyelesaian
    bool solution; // Variabel apabila ada penyelesaian
    int sumsolution; // Variabel jumlah solusi
    
    // Input koefisien a, b, dan c
    a = 25;
    cout << "Masukkan koefisien a: " << a << endl;

    b = -30;
    cout << "Masukkan koefisien b: " << b << endl;

    c = 9;
    cout << "Masukkan koefisien c: " << c << endl;
    
    // Hitung diskriminan
    discriminant = b*b - 4*a*c;
    
    // Hitung solusi dari persamaan kuadrat
    // Apabila diskriminan > 0 sehingga memiliki 2 penyelesaian
    if (discriminant > 0) {
        solution = true;
        sumsolution = 2;
        x1 = (-1*b + sqrt(discriminant)) / (2*a);
        x2 = (-1*b - sqrt(discriminant)) / (2*a);
    }
    // Apabila diskriminan = 0 sehingga tepat memiliki 1 penyelesaian
    else if (discriminant == 0) {
        solution = true;
        sumsolution = 1;
        x = (-1*b) / (2*a);
    } 
    // Apabila diskriminan < 0 sehingga tidak memiliki penyelesaian
    else {
        solution = false;
        sumsolution = 0;
    }
    
    // Print hasil solusi
    cout << "------------------" << endl;
    // Apabila solusi ditemukan
    if (solution == true) {
        cout << "Solusi ditemukan!" << endl;
        // Apabila ada 2 solusi
        if (sumsolution == 2) {
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        // Apabila ada 1 solusi
        } else if (sumsolution == 1) {
            cout << "x = " << x << endl;
        }
    }
    // Apabila tidak ada penyelesaian
    else {
        cout << "Solusi tak ditemukan! (D < 0)" << endl;
    }
    
    // Exit program
    return 0;
}