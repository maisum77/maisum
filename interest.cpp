#include <iostream>
using namespace std ;
int main ()
{
    int year,PA,AIR,CI,IC ;
    cout << "enter principal amount =";
    cin >> PA ;
    cout << "enter annual interest rate = " ;
    cin >> AIR ;
    cout << "enter year= ";
    cin >> year ;
    cout << "enter interest compund = ";
    cin >> IC ;
    CI = PA * (1+ AIR/IC)^(IC*year) ;
    cout << "compound interest = " << CI ;
    return 0 ;
}