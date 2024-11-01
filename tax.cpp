#include <iostream>
using namespace std ;
int main ()
{
	float salary = 2000 ;
	float tax ;
	tax = (5/100.0)*salary ;
	salary = salary - tax ;
	cout << "salary after tax = " << salary ;
	return 0 ;
}
