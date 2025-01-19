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
    int a,b ;
    cout<<"enter first number= ";
    cin>>a;
    cout<<"enter second number= ";
    cin>>b;
    int num = gcd(a,b);
    cout<<"gcd of the number are = "<< num <<endl ;
    int lcm = a*b/num ;
    cout<<"lcm of the number is = "<<lcm;
    return 0;
}