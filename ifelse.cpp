#include <iostream>
using namespace std ;
int main ()
{
	int hours ;
	cout << " enter hours =";
	cin>> hours ;
	if ( hours >= 0 && hours <= 6 )
	{
		cout << "midnight time of am ";
	}
	else if  ( hours > 6 && hours <= 12 )
	{ 
	 cout << "morning time of am " ;
	}
	else if (hours > 12 && hours <= 18)
	{
		cout << "evening of pm " ;
	}
	else if (hours > 18 && hours <= 24 )
	{
		cout << "night of pm";
	}
	else 
	{
		cout << " invalid "; 
	}
	return 0;
}
