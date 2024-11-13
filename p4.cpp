#include <iostream>
using namespace std ;
int main ()
{
    int store [5] ;
    int a=1;
    for (int i=0 ; i < 5 ; i++)
    {
        cout << "enter sale for store "<< i<<":"<< endl ;
        cin >> store[i] ;
    }
    
    

    switch(a)
    {
        case 1:
        {
            cout << "store 1 = " ;
            for  (int j = 100 ; j <= store [0] ; j += 100 )
            {
                cout << "*";
            }

        }

    }
   return 0 ;
}