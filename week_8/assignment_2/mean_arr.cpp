#include <iostream>

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
    int n;
    cout << "Masukkan ukuran array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << ": ";
        cin >> arr[i]; 
    }

    cout << "Rata-rata Array: " << meanArray(arr, n) << endl;
}