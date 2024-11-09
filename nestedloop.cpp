#include <iostream>
using namespace  std ;
int main ()
{
    int i = 1 ;  
    while (i < 30)
    {
        for (int j=1 ; j<=i ; j++ )
        {
            if ( j%2 > 0 )
            {
                cout << j << "\n";
                i++ ;
            }
        }
    }
    return 0 ;
}