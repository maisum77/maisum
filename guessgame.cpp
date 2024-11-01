#include <iostream>
using namespace std ;
int main ()
{
    int num , guess =1 ;
    again:
    cout << "guess the number from 1 to 100 =";
    cin >> num ;

    if (num == 50)
    {
        cout << "Congratulations! You guessed the number correctly." ;
    }
    else if (guess <= 10)
    {
        guess ++ ;
      goto again ;
      
    }
    else 
    {
        cout << "Sorry, you have exceeded the maximum number of attempts. The correct number is 50." ;
    }
    return 0 ;

}