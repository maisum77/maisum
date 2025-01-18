#include<iostream>
using namespace std;
int main()
{
    int num=1;
    while(true)
    {
        ++num;
        if(num%3==0)
        {
            continue;
        }
        if(num==50)
        {
            break;
        }
        if(num%2==0)
        {
            num+=3;
        }
        else{
            num+=2;
        }
        cout<<num<<" ";
    }
    return 0;
}