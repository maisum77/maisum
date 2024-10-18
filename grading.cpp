#include <iostream>
using namespace std ;
int main ()
{
    int number ;
    cout << "enter total number = ";
    cin >> number ;
    if ( number == 100 || number >= 90 )
    {
        cout << "GRADE = A";
    }
    else if ( number == 80 || number >= 89 )
    {
        cout << "GRADE = B";
    }
    else if ( number == 70 || number >= 79 )
    {
        cout << "GRADE = C";
    }
    else if ( number == 60 || number >= 69 )
    {
        cout << "GRADE = D";
    }
    else 
    {
        cout << "GRADE = F";
    }
    
}