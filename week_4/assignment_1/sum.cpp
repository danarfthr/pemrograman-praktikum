#include <iostream>

using namespace std;

int sum(int n) {
    int jumlah = 0;
    for (int i = 1; i <= n; i++) {
        jumlah = jumlah + i;
    }
    return jumlah;
}

int main(int argc, char* argv[]) {

    int n;
    cout << "Input n: ";
    cin >> n;
    cout << sum(n) << endl;
    
    return 0;
}