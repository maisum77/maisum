#include <iostream>
using namespace std ;
int main ()
{
    int item , cost  , discount , total ;
    cout << "no of item =";
    cin >> item ;
    cout << "cost per item = " ;
    cin >> cost ;
    cout <<  "discount = " ;
    cin >> discount ;
    float DP ;
    total = item * cost ;
    DP = total - (total*discount/100) ;
    total = total - DP ;
    cout << "total after discount = " << total ;
    return 0 ;
}