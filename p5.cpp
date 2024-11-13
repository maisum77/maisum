#include <iostream>
using namespace std;

int main() {
    int store[5];
    int a = 1;
    
    // Input loop
    for (int i = 0; i < 5; i++) {
        cout << "Enter sale for store " << i + 1 << ": ";
        cin >> store[i];
    }
    
    // Switch statement
    switch(a) {
        case 1: {
            cout << "store 1 = ";
            for (int j = 100; j <= store[0]; j += 100) {
                cout << "*";
            }
            cout << endl; 
            break;
        }
    }

    return 0;
}
