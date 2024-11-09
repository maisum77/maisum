# include <iostream>
using namespace std ;
int main ()
{
    for(int hour = 0 ; hour < 1 ; hour++ )
    {
        for (int min = 1; min <= 59 ; min++ )
        {
            for (int sec = 1 ; sec <= 59 ; sec++ )
            {
                cout << hour <<":"<< min << ":" << sec << "\n" ;
            }
        }
    }
    return  0 ; 
}