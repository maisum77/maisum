#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int oned[9];
    int arr2[3][3] = {0}; // Initialize to zero
    int temp = 0;

    // Flatten 2D array to 1D array
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            oned[temp] = arr[a][b];
            temp++;
        }
    }

    // Populate arr2 in spiral order
    int srow = 0, scol = 0, endrow = 2, endcol = 2, index = 0;

    while (srow <= endrow && scol <= endcol) {
        // Traverse top row
        for (int i = scol; i <= endcol; i++) {
            arr2[srow][i] = oned[index++];
        }
        srow++;

        // Traverse right column
        for (int i = srow; i <= endrow; i++) {
            arr2[i][endcol] = oned[index++];
        }
        endcol--;

        // Traverse bottom row (if needed)
        if (srow <= endrow) {
            for (int i = endcol; i >= scol; i--) {
                arr2[endrow][i] = oned[index++];
            }
            endrow--;
        }

        // Traverse left column (if needed)
        if (scol <= endcol) {
            for (int i = endrow; i >= srow; i--) {
                arr2[i][scol] = oned[index++];
            }
            scol++;
        }
    }

    // Print the resulting 2D array
    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 3; n++) {
            cout << arr2[m][n] << " ";
        }
        cout << endl;
    }
return 0;
}