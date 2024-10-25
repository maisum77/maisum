#include <iostream>
using namespace std ;
int main ()
{
    int a,b,c ;
    cout << "enter three sides of the triangle =\n";
    cin >> a >> b >> c ;
    if ( a < b + c )
    {
        if ( a == b == c )
        {
            cout << "its a equilateral triangle " ;
        }
        else if ( a==b || b==c || a==c )
        {
            cout << "its an Isosceles triangle ";
        }
        else 
        {
            cout << "its an Scalene triangle " ;
        }
    }
    else 
    {
        cout << "Not a triangle";
    }
    return 0 ;
}