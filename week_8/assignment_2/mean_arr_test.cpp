#include <iostream>
#include <fstream>

using namespace std;

float sumArray(int arr[], int size) {
    if (size <= 0) {
        return 0;
    }

    return arr[size-1] + sumArray(arr, size-1);
}

float meanArray(int arr[], int size) {
    float sum = sumArray(arr, size);
    return sum / size;
}

int main() {
    ifstream testFile("test.txt");
    if (!testFile) {
        cout << "Tidak dapat membuka test.txt" << endl;
        return 1;
    }

    int arr[100];
    float output, expected_output;
    int size;

    int test_num = 1;

    while(testFile >> size) {
        for (int i = 0; i < size; i++) {
            testFile >> arr[i];
        }

        testFile >> expected_output;

        output = meanArray(arr, size);

        if (output == expected_output) {
            cout << "==========" << endl;
            cout << "Test " << test_num << " has passed!" << endl;
            cout << "Output: " << output << endl;

        } else { 
            cout << "==========" << endl;
            cout << "Test " << test_num << " has failed :(" << endl;
            cout << "Output: " << output << endl;
            cout << "Expected Output: " << expected_output << endl;
        }

        test_num++;
    }
}