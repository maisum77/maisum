#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int arr2[3][3] = {0}; // Initialize with 0
    int oneD[9];
    int count = 1, temp = 0;

    // Input the 3x3 matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << count << ") ";
            cin >> arr[i][j];
            count++;
        }
    }

    // Display the input matrix
    cout << "\nInput Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Convert 2D array to 1D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            oneD[temp++] = arr[i][j];
        }
    }

    // Spiral order filling of arr2
    int srow = 0, scol = 0, endrow = 2, endcol = 2, index = 0;

    while (srow <= endrow && scol <= endcol) {
        // Top row (left to right)
        for (int col = scol; col <= endcol; col++) {
            arr2[srow][col] = oneD[index++];
        }
        srow++;

        // Right column (top to bottom)
        for (int row = srow; row <= endrow; row++) {
            arr2[row][endcol] = oneD[index++];
        }
        endcol--;

        // Bottom row (right to left)
        if (srow <= endrow) {
            for (int col = endcol; col >= scol; col--) {
                arr2[endrow][col] = oneD[index++];
            }
            endrow--;
        }

        // Left column (bottom to top)
        if (scol <= endcol) {
            for (int row = endrow; row >= srow; row--) {
                arr2[row][scol] = oneD[index++];
            }
            scol++;
        }
    }

    // Display the spiral matrix
    cout << "\nSpiral Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
