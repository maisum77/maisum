#include <iostream>
using namespace std ;
int main ()
{
    int a,b,c ;
    cout << "Enter three numbers : " << endl;
    cin >> a >> b >> c ;
    if (a>b)
    {
        if (a>c)
        {
            cout << "a is greatest";
        }
        else 
        {
            cout << "a is greater then b";
        }
    }
    else if (b>a)
    {
        if (b>c)
        {
            cout << "b is greatest";
        }
        else
        {
            cout << "b is greater than a";
        }

    }
    else 
    {
        cout << "c is greatest ";
    }
    return 0 ;
}