#include <iostream>
#include <string>

using namespace std;

// Deklarasi tipe data mahasiswa dengan struct
struct Mahasiswa {
    long int nisn; // NISN2
    string nama; // Nama
    int nilai; // Nilai
};

void insertionSortNISN(Mahasiswa mhs[], int size_array) {
    for (int j = 1; j < size_array; j++) {
        int i = j-1;
        Mahasiswa temp = mhs[j];
        while (i >= 0 && mhs[i].nisn > temp.nisn) {
            mhs[i+1] = mhs[i];
            i--;
        }
        mhs[i+1] = temp;
    }
}

void insertionSortNilai(Mahasiswa mhs[], int size_array) {
    for (int j = 1; j < size_array; j++) {
        int i = j-1;
        Mahasiswa temp = mhs[j];
        while (i >= 0 && mhs[i].nilai > temp.nilai) {
            mhs[i+1] = mhs[i];
            i--;
        }
        mhs[i+1] = temp;
    }
}

void selectionSortNISN(Mahasiswa mhs[], int size_array) {
    int min;
    Mahasiswa temp;
    for (int i = 0; i < size_array; i++) {
        min = i;
        for (int j = i+1; j < size_array; j++) {
            if (mhs[j].nisn < mhs[min].nisn) {
                min = j;
            }
        }
        temp = mhs[i];
        mhs[i] = mhs[min];
        mhs[min] = temp;
    }
}

void selectionSortNilai(Mahasiswa mhs[], int size_array) {
    int min;
    Mahasiswa temp;
    for (int i = 0; i < size_array; i++) {
        min = i;
        for (int j = i+1; j < size_array; j++) {
            if (mhs[j].nilai < mhs[min].nilai) {
                min = j;
            }
        }
        temp = mhs[i];
        mhs[i] = mhs[min];
        mhs[min] = temp;
    }
}

void bubbleSortNISN(Mahasiswa mhs[], int size_array) {
    Mahasiswa temp;
    for (int i = 0; i < size_array-1; i++) {
        for (int j = 0; j < size_array-1; j++) {
            if (mhs[j].nisn > mhs[j+1].nisn) {
                temp = mhs[j];
                mhs[j] = mhs[j+1];
                mhs[j+1] = temp;
            }
        }
    }
}

void bubbleSortNilai(Mahasiswa mhs[], int size_array) {
    Mahasiswa temp;
    for (int i = 0; i < size_array-1; i++) {
        for (int j = 0; j < size_array-1; j++) {
            if (mhs[j].nilai > mhs[j+1].nilai) {
                temp = mhs[j];
                mhs[j] = mhs[j+1];
                mhs[j+1] = temp;
            }
        }
    }
}

int main() {
    // Deklarasi data mahasiswa
    Mahasiswa mhs[7] = {    
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    int size_array = sizeof(mhs) / sizeof(mhs[0]);

    int pilihan_data;
    int pilihan_sort;
    cout << "Pilih data apa yang akan diurutkan" << endl;
    cout << "1. NISN" << endl;
    cout << "2. Nilai" << endl;
    cout << "Masukkan pilihan (1-2): ";
    cin >> pilihan_data;

    switch (pilihan_data)
    {
        case 1: // NISN
            cout << "==========================" << endl;
            cout << "Pilih cara sorting yang diinginkan" << endl;
            cout << "1. Insertion Sort" << endl;
            cout << "2. Selection Sort" << endl;
            cout << "3. Bubble Sort" << endl;
            cout << "Masukkan pilihan (1-3): ";
            cin >> pilihan_sort;

            switch (pilihan_sort)
            {
                case 1: // Insertion Sort
                cout << "==========================" << endl;
                
                cout << "Before: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nisn << endl;
                }

                insertionSortNISN(mhs, size_array);

                cout << "After: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nisn << endl;
                }

                break;



                case 2: // Selection Sort
                cout << "==========================" << endl;
                
                cout << "Before: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nisn << endl;
                }

                selectionSortNISN(mhs, size_array);

                cout << "After: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nisn << endl;
                }

                break;



                case 3: // Bubble Sort
                cout << "==========================" << endl;
                
                cout << "Before: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nisn << endl;
                }

                bubbleSortNISN(mhs, size_array);

                cout << "After: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nisn << endl;
                }


                break;
            }
            break;
        
        case 2: // Nilai
            cout << "==========================" << endl;
            cout << "Pilih cara sorting yang diinginkan" << endl;
            cout << "1. Insertion Sort" << endl;
            cout << "2. Selection Sort" << endl;
            cout << "3. Bubble Sort" << endl;
            cout << "Masukkan pilihan (1-3): ";
            cin >> pilihan_sort;

            switch (pilihan_sort)
            {
                case 1: // Insertion Sort
                cout << "==========================" << endl;
                
                cout << "Before: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nilai << endl;
                }

                insertionSortNilai(mhs, size_array);

                cout << "After: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nilai << endl;
                }



                break;

                

                case 2: // Selection Sort
                cout << "==========================" << endl;
                
                cout << "Before: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nilai << endl;
                }

                selectionSortNilai(mhs, size_array);

                cout << "After: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nilai << endl;
                }


                break;



                case 3: // Bubble Sort
                cout << "==========================" << endl;
                
                cout << "Before: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nilai << endl;
                }

                bubbleSortNilai(mhs, size_array);

                cout << "After: " << endl;
                for (int i = 0; i < size_array; i++) {
                    cout << i << ": " << mhs[i].nilai << endl;
                }


                break;
            }
            break;

    }
}