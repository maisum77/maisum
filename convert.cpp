#include <iostream>
using namespace std ;
int main ()
{
    int fren , cel ;
    cout  << "enter temperature in farenheit  = \n"  ;
    cin >> fren ;
    cel  = ( fren - 32 ) * 5/9  ;
    cout << "temperature in celcius is = " <<  cel ;
    return 0 ;
} 