#include <iostream>
using namespace std ;
int main ()
{
    int count , value ;
    for (int i = 2 ; i <= 50 ; i++)
    {
        for (int j = 1 ; j <= 10 ; j++)
        {
            if (i%j == 0)
            {
                value ++ ;
            }

        }
        if (value = 2 )
        {
            cout << i << "\n" ;
            count ++ ;
        }
        if (count = 10 )
        {
            break ;
        }
        
    }
    

    
}