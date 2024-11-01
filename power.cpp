#include <iostream>
using namespace std ;
int main ()
{
    int n , i , total , a=1;
    cout << "enter number =";
    cin >> n ;
    total = 1 ;
    cout << "enter its power =";
    cin >> i ;
    while (a <= i)
    {
     total = total * n ;
     a++;
    }
    cout << "result ="<< total ;
    return 0;
}