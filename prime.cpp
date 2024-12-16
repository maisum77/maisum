#include<iostream>
using namespace std ;
bool prime (int num)
{
    int count=0 ;
    for (int i=1 ; i<=num ;i++)
    {
      if (num%i==0)
      {
        count++ ;
      }
    }
    if (count > 2)
    {
        return false ;
    }
    else 
    {
        return true ;
    }
}
int main ()
{
    int num ;
    bool check ;
    cout <<"enter num = ";
    cin >> num ;
    check = prime (num);
    if (check==1)
    {
        cout << "number is prime ";
    }
    else 
    {
        cout << "number is not prime " ;
    }
    return 0;

}