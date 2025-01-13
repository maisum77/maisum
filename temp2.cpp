#include<iostream>
#include<string>
using namespace std;

void initialize_structure(string layout[][41])
{
    for(int i=0; i<20; i++)
    {
        layout[i][0] = "apartment" + to_string(i+1);  // Set compartment name
    }
    for(int j=0; j<20; j++)
    {
        for(int k=1; k<41; k++)  // Fill the seats (columns 1 to 40)
        {
            layout[j][k] = "#";  // Available seat symbol
        }
    }
}

void layoutdisplay(string layout[][41])
{
    for(int k=0; k<20; k++)  // Corrected loop condition for rows
    {
        for(int l=0; l<41; l++)  // Loop through columns (1 to 40 for seats)
        {
            cout << layout[k][l] << " ";
        }
        cout << endl;
    }
}

int main()
{
    string layout[20][41];
    initialize_structure(layout); // Initialize the structure of the seats
    layoutdisplay(layout); // Display initial seat layout
    
    // Reserving seats
    int a, b;
    cout << "Reserving seats" << endl;
    cout << "Apartment number = ";
    cin >> a;
    cout << endl;
    cout << "Seat number (1-40) = ";
    cin >> b;
    cout << endl;

    // Make sure seat numbers are within valid range
    if (b < 1 || b > 40) {
        cout << "Invalid seat number! Please enter a seat number between 1 and 40." << endl;
    } else {
        // Adjust seat number (1-based input to 0-based index)
        layout[a-1][b] = "*";  // Mark the seat as reserved
        layoutdisplay(layout);  // Display updated layout
    }

    return 0;
}
