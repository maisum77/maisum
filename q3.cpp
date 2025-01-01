#include <iostream>
using namespace std;

int main() 
{
    
    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols] = 
    {{1, 2, 3},
     {4, 5, 6},
     {7, 8, 9}};

    cout << "Using for loop:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nUsing while loop:" << endl;
    int i = 0, j = 0;
    while (i < rows) 
    {
        j = 0; 
        while (j < cols) 
        {
            cout << arr[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << "\nUsing do-while loop:" << endl;
    i = 0;
    do 
    {
        j = 0; 
        do 
        {
            cout << arr[i][j] << " ";
            j++;
        }
        while (j < cols);
        cout << endl;
        i++;
    } 
    while (i < rows);

    return 0;
}
