#include<iostream>
using namespace std ;
int main ()
{
    int a,b ;
    cout << "enter first num = " ;
    cin >> a ;
    cout << "enter second num = ";
    cin >> b ;
    swap (a,b) ;
    cout << "first num =" << a << endl << "second num =" << b ;
    return 0 ;
}