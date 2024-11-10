#include <iostream>
#include <cmath>
using namespace std ;
int main ()
{
   int a,b,c;
   cout << "enter coefficient a then b then c = " ;
   cin >> a >> b >> c ;
   double root_1 , root_2 ;
   root_1 = (-b+sqrt(b*b-4*a*c))/2*a ;
   root_2 = (-b-sqrt(b*b-4*a*c))/2*a ;
   cout << "first root = " << root_1 << "\nsecond root = " << root_2 << "\n" ;
   int dis = b^2 - 4*a*c ;
   {
       if (dis<0)
           {
        cout << "roots are imaginary";
       }
       else if (dis == 0 )
       {
        cout << "roots are real and equal " ;
       }
       else 
       {
            cout << "roots are real";
       }
    }
   return 0 ;
}