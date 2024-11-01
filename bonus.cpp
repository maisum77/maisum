#include <iostream>
using namespace std ;
int main ()
{
	int year , score ;
	cout << "enter years you work = " ;
	cin >> year ;
	cout << "enter your score = " ;
	cin >> score ;
	if (year > 3 && score > 85 )
	{
		float bonus = 10000 *(5/100.0)*(3/100.0) ;
		cout << "final bonus amount = " << 10000+bonus;
		
	}
	else 
	{
		cout << "basic salary no bonus";
	}
}
