#include <iostream>
using namespace std ;
int main ()
{
    int sum=0 ;
    for (int i ; i <= 100 ; i++ )
    {
        sum = sum + i ;
    }
    cout << "sum of first 100 natural numbers = " << sum ;
    return 0 ;
}