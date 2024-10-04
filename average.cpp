#include <iostream>
using namespace std ;
int main ()
{
    int a , b , c ;
    int avg , sum ;
    cout <<   "enter three intergers to find there average = " <<endl ;
    cin >> a >> b >> c ;
    sum = a + b + c ;
    avg = sum / 3 ;
    cout <<  "average of integers are = " << avg << endl ;
    return 0;
}