#include <iostream>
using namespace std ;
int main ()
{
    int num ;
    cout << "enter number between 10 to 25 = " ;
    cin >> num ;
    while (num < 10 || num > 25 )
    {
        cout << "invalid input enter between 10 to 25 = " ;
        cin >> num ;
    }
    cout << "valid input " ;
    return 0 ;
}