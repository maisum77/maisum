#include <iostream>
using namespace std ;
int main ()
{
	int i =1 ;
	start:
		if (i<=31)
		{
			cout << i << "\n" ;
			i++ ;
			goto start ;
		}
		return 0 ;
}
