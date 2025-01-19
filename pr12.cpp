#include<iostream>
using namespace std;
int main()
{
    // 1234 convert it to 4321
    int num;
    int rem;
    cout<<"enter num= ";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        cout<<rem;
        num=num/10;
    }
    return 0;
}