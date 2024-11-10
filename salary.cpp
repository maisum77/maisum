#include <iostream>
using namespace  std ;
int main  ()
{
    double  hour_worked,hourly_wage,overtime,total ;
    cout << "enter hours worked=";
    cin >> hour_worked ;
    cout << "overtime=";
    cin >> overtime ;
    cout << "enter hourly wage = " ;
    cin >> hourly_wage ;
    hour_worked = hour_worked * hourly_wage ;
    overtime = overtime * hourly_wage * 1.5 ;
    total = hour_worked + overtime ;
    cout << "total amount = "<< total ;
    return 0;
}