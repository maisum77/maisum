#include <iostream>
using namespace std ;
int main ()
{
    int n ;
    cout << " enter a number you want to see the table of =";
    cin >> n ;
    for ( int i=1 ; i<=10 ; i++)
    {
        cout << n << "*" << i << "=" << n*i << "\n" ;
    }
    return 0 ;
}