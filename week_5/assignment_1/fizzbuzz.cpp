#include <iostream>
#include <vector>
#include <string>
#include <string.h>

using namespace std;

int main(int argc, char* argv[]) {

    // Declare a vector that contains 1-100
    vector<int> hundreds(100);
    for (int i = 0; i < 100; i++) {
        hundreds[i] = i+1;
    }

    for (int i = 0; i < 100; i++) {
        if (hundreds[i] % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (hundreds[i] % 5 == 0) {
            cout << "Buzz" << endl;
        }
        else {
            cout << i << endl;
        }

    }

}