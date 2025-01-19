#include<iostream>
using namespace std ;
int main()
{
    int num,sum,rem;
    cout<<"enter number = ";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<<"sum of all the indivitual number is = "<<sum;
    return 0;


}
