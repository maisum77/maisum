#include<iostream>
using namespace std ;
int gcd(int a, int b)
{
    while(b!=0)
    {
    int rem=a%b;
    a=b;
    b=rem;
    }
    return a;
}
int main()
{
    int a,b;
    cout<<"enter num = ";
    cin>>a>>b;
    int num= gcd(a,b);
    cout<<num;
}