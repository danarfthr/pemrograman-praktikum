#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
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
    while (run) {
        int choice;
        cout << endl;
        cout << "========Test Case=========" << endl;
        cout << "1. FizzBuzz (1-100)" << endl;
        cout << "2. Reverse Array" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                ifstream file("test_fizzbuzz.txt");
                if (!file) {
                    cout << "File tidak dapat dibuka" << endl;
                    return 1;
                }

                int test_num = 1;
                string input;
                string expected_output;

                while (file >> input && getline(file >> ws, expected_output)) {
                    vector<string> output = fizzbuzz();

                    // Convert output vector to a single string without leading space
                    ostringstream oss;
                    for (const auto& str : output) {
                        if (!oss.str().empty()) {
                            oss << " ";
                        }
                        oss << str;
                    }
                    string output_str = oss.str();

                    if (output_str == expected_output) {
                        cout << "Test " << test_num << " passed!" << endl
                            << "Got: \"" << output_str << "\"" << endl;
                    } else {
                        cout << "Test " << test_num << " failed." << endl
                            << "Expected: \"" << expected_output << "\"," << endl 
                            << "Got: \"" << output_str << "\"" << endl;
                    }
                    test_num++;
                }
                file.close();
                break;
            }
            case 2: {
                ifstream file("test_reverse.txt");
                int test_num = 1;
                vector<int> input;
                string expected_output;

                if (!file) {
                    cerr << "File tidak dapat dibuka" << endl;
                    return 2;
                }

                string line;
                while (getline(file, line)) {
                    istringstream iss(line);
                    vector<int> input;
                    int num;
                    while (iss >> num) {
                        input.push_back(num);
                    }

                    getline(file, line);
                    istringstream iss_expected(line);
                    vector<int> expected_output;
                    while (iss_expected >> num) {
                        expected_output.push_back(num);
                    }

                    vector<int> output = reverse(input);
                    if (output == expected_output) {
                        cout << "Test " << test_num << " passed!" << endl;
                        cout << "Input: ";
                        for (const auto& val : input) {
                            cout << val << " ";
                        }
                        cout << "Got: ";
                        for (const auto& val : output) {
                            cout << val << " ";
                        }
                        cout << endl;
                    } else {
                        cout << "Test " << test_num << " failed." << endl
                            << "Expected: ";
                        for (const auto& val : expected_output) {
                            cout << val << " ";
                        }
                        cout << endl << "Got: ";
                        for (const auto& val : output) {
                            cout << val << " ";
                        }
                        cout << endl;
                    }
                    test_num++;
                }
                file.close();
                break;
            }
            case 3: {
                run = false;
                break;
            }
        }
    }
}