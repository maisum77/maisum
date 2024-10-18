#include <iostream>
using namespace std;
int main ()
{
    int a,b ;
    char op ;
    cout << " Enter first number = ";
    cin >> a ;
    cout << " enter second number = ";
    cin >> b ;
    cout << " enter operation you want to apply (+,-,*,/)= ";
    cin >> op ;
    if (op ==  '+')
    {
        cout << " sum is " << a+b ;
    } 
    else if (op == '-')
    {
        cout << " substract is " <<  a-b ;
    }
    else if (op == '*')
    {
        cout <<  " multiplication is "  << a*b ;
    }
    else if (op == '/')
    {
        cout << " division is " << a/b ;
    }
    else 
    {
        cout << "invalid operation!";
    }
    return 0;


}