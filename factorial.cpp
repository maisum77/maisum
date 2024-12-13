#include<iostream>
using namespace std ;
int fact (int a)
{
    int x = 1 ;
    int i = 1 ;
    do 
    {
      x=i*x ;
      i++ ;
    }
    while (i<=a);
    return x ;
}
int main ()
{
    int a ;
    int result ;
 cout << "enter number = " ;
 cin >> a ;
 result = fact(a) ;
 cout << "factorial of a number is = " << result << endl;
 return 0 ;
}