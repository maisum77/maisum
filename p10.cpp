#include<iostream>
using namespace std;

int main()
{
 int count ;
 for (int i = 1 ; i <= 100 ; i++)
 {
    for (int j = 2 ; j <= 100 ; j++)
    {
        if (i%j==0)
        {
            count++;
        }
    }
    if (count == 2 )
     {
        cout << i << "\n" ;
     }
 }
  
}