#include <iostream>
using namespace std ;
int  main  ()
{
    int number = 5 ; 
    int guess ;
    again:
    cout << "guess number between 0 to 10 = ";
    cin  >> guess ;
    if (number == guess )
     {
        cout << "congrats you won !\n" ;
     }
     else 
     {
        cout << "wrong guess\n";
     goto again ;
     }
     return 0 ;
}