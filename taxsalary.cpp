#include <iostream>
using namespace std ;
int main ()
{
    int salary,tax,deduction,net_salary ;
    cout << "enter salary = " ;
    cin >> salary ;
    cout << "enter tax (1-100) = " ;
    cin >> tax ;
    tax = salary * tax / 100 ;
    cout << "enter any deduction = " ;
    cin >> deduction ;
    net_salary = salary - (tax + deduction) ;
    cout << "net_salary = " << net_salary ;
    return 0 ;
    
}