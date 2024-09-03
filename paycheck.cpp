#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel
    string name;
    int gsal;
    int tax;
    int inst;
    int insu;
    int salary;
    
    // Input name
    cout << "Masukkan Nama: ";
    getline(cin, name);
    
    // Input gross salary
    cout << "Masukkan Gaji Kotor (Rp): ";
    cin >> gsal;

    // Input biaya instalasi dan asuransi
    cout << "Masukkan Biaya Instalasi (Rp): ";
    cin >> inst;
    cout << "Masukkan Biaya Asuransi (Rp): ";
    cin >> insu;
    
    // Menghitung pajak
    tax = gsal * 0.2;
    
    // Gaji kotor dikurangi pajak, instalasi dan asuransi
    salary = gsal - tax - inst - insu;
    
    // Print output hasil perhitungan payslip
    cout << "---------------------" << endl;
    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;
    
    cout << "Name: " << name << endl;
    cout << "Gross Salary: Rp" << gsal << endl;
    cout << "Tax (20%): Rp" << tax << endl;
    cout << "Installment: Rp" << inst << endl;
    cout << "Insurance: Rp" << insu << endl;
    cout << "Net Salary: Rp" << salary << endl;
    
    // Exit program
    return 0;
}
