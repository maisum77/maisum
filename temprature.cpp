#include <iostream>
using namespace std ;
int main ()
{
	chr temp ;
	int c,f,k,num;
	cout << "enter C for celsius F for fahrenheit and K for kelvin = "
	cin >> temp ;
	if (temp == c || temp == C)
	{
		cout << "enter temperature = "<< endl;
		cin >> c ;
		cout << "1= celcius to fahrenheit \n";
		cout << "2= celcius to kelvin \n";
		cin >> num ;
		switch (num)
		{
			case 1:
					f=(c*9/5)+32 ;
					cout << "result =" << f ;
				break ;
			case 2 :
			        k = c+273 ;
					cout << "result ="<< k ;
			    break ; 
			default :
				cout << "invalid temperature";		
		}
		
	}
	else if ( temp== f || temp == F )
	     {
	     	cout << "enter temperature = "<< endl;
	     		cin >> f
		    cout << "1= fahrenheit to calcius \n";
		    cout << "2= fahrenheit to kelvin \n";
		    cin >> num ;
		    switch (num)
		{
			case 1:
					c=(f-32)*5/9 ;
					cout << "result =" << c ;
				break ;
			case 2 :
			        k = (f-32)/1.8 * 273 ;
					cout << "result ="<< k ;
			    break ; 
			default :
				cout << "invalid temperature";		
		}
		
	     }
	else if ( temp == K || temp == k)
	      {
	      	cout << "enter temperature = "<< endl;
	     		cin >> k
		    cout << "1= kelvin to calcius \n";
		    cout << "2= kelvin to fahrenheit \n";
		    cin >> num ;
		    switch (num)
		{
			case 1:
					c = k-273;
					cout << "result =" << c ;
				break ;
			case 2 :
			        ;
					cout << "result ="<< k ;
			    break ; 
			default :
				cout << "invalid temperature";		
		}
	      }     
}
