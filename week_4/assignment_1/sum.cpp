#include <iostream>
#include <fstream>
#include <string>

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

    if (argc > 1) {
        if (string(argv[1]) == "test") {
            ifstream testFile("test.txt");
            string expected_output;
            
            if (!testFile) {
                cerr << "Error: Tidak dapat membuka test.txt" << endl;
                return 1;
            }

            int test_num = 1;
            cout << "------------------------" << endl;
            while (testFile >> n && getline(testFile >> ws, expected_output)) {
                int jumlah = sum(n);
                if (to_string(jumlah) == expected_output) {
                    cout << "Test " << test_num << " passed!" << endl;
                    cout << "Input : " << n << endl;
                    cout << "Output : " << jumlah << endl;
                } else {
                    cout << "Test " << test_num << " failed." << endl;
                    cout << "Input : " << n << endl;
                    cout << "Output : " << jumlah << endl;
                    cout << "/Expected Output : " << expected_output << "/" << endl;
                }
                cout << "------------------------" << endl;
                test_num++;
            }
            testFile.close();
            return 0;
        }
    }
    else {
        cout << "Masukkan angka: ";
        cin >> n;
        cout << sum(n) << endl;
        return 0;
    }
}