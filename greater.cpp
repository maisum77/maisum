#include <iostream>
using namespace std ;
int main ()
{
    int a , b ;
    cout << " enter two numbers = \n" ;
    cin >> a >> b ;
    if (a>b)
    {
        if (a>0)
        {
            cout << " a is greatest and positive ";
        }
        else 
        {
            cout << "a is greatest but negative " ;
        }
    }
    else if (b>a)
    {
        if (b>0)
        {
            cout << "b is greatest and positive ";
        }
        else 
        {
            cout << "b is greatest but negative ";
        }
    }
    else 
    cout << "both equal " ;
    return 0 ;
}