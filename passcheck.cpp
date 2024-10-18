#include <iostream>
using namespace std ;
int main ()
{
    int pin ;
    cout << "enter four digit pin = ";
    cin  >> pin ;
    if (pin == 5470)
    {
        cout << "access granted!";
    }
    else 
    {
        cout << "access denied!";
    }
    return 0;
}