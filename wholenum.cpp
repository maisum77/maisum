#include <iostream>
using namespace std ;
int main ()
{
    int a,i=1 ;
    cout << "enter whole number you want to see list of =";
    cin >> a;
    while  (i <= a)
    {
        cout << i << "\n ";
        i++;
    }
    return 0 ;
}