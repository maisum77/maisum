#include <iostream>
using namespace std ;
int main ()
{
    int P,DPP,AIR,MIR,n,PA,r,MI,year;
    cout << "enter purchase amount =";
    cin >> PA;
    cout << "enter down payment percentage (1-100)=";
    cin >> DPP ;
    cout << "enter annual interest rate = " ;
    cin >> AIR ;
    cout << "enter years = ";
    cin >> year ;
    r = AIR * 12 ;
    n = year * 12 ;
    P = PA - (PA*DPP/100) ;
    MI = P*r/(1-(1+r)^-n);
    cout << "monthly installment = " << MI ;
    return 0 ;
}