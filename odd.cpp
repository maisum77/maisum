#include<iostream>
using namespace std ;
int main ()
{
    int count = 0 ;
    int i =1 ;
    while (count < 30)
    {
        for(int j = i ; count <30 ; j++)
        if (j%2 != 0 )
        {
            cout << j << "\n" ;
            count++ ;
        }
        i++;
    } 
    return 0  ;
}