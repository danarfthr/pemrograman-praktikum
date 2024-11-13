#include <iostream>
#include <fstream>

using namespace std;

int fibonacci(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    ifstream testFile("test.txt");
    int input, expected_output;
    
    if (!testFile) {
        cout << "Tidak dapat membuka test.txt" << endl;
        return 1;
    }
    
    int test_num = 1;
    while (testFile >> input >> expected_output) {
        int output = fibonacci(input);
        if (output == expected_output) {
            cout << "Test " << test_num << " passed!" << endl;
            cout << "Input: " << input << endl;
            cout << "Output: " << output << endl;
            cout << "Expected output: " << output << endl;
        } else {
            cout << "Test " << test_num << " failed. Expected: \"" << expected_output << "\", Got: \"" << output << "\"" << endl;
            cout << "Input: " << input << endl;
            cout << "Output: " << output << endl;
            cout << "Expected output: " << output << endl;
        }
        cout << "=========" << endl;
        test_num++;
    }
}