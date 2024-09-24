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
    name = "Fathurahman Hadi";
    cout << "Masukkan Nama: " << name << endl;
    
    // Input gross salary
    gsal = 12450000;
    cout << "Masukkan Gaji Kotor (Rp): " << gsal << endl;

    // Input biaya cicilan dan asuransi
    inst = 22500;
    cout << "Masukkan Biaya Cicilan (Rp): " << inst << endl;
    insu = 178000;
    cout << "Masukkan Biaya Asuransi (Rp): " << insu << endl;
    
    // Menghitung pajak
    tax = gsal * 0.2;
    
    // Gaji kotor dikurangi pajak, cicilan dan asuransi
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
