#include <iostream>
using namespace std ;
int main ()
{
    int value,sum ;
    cout << "enter the positive interger = " ;
    cin >> value ;
    for (int i=1 ; i <= value ; i++ )
    {
        sum = sum + i ;  
    }
    cout  << "sum to that num is " << sum ;
    return 0 ;
}