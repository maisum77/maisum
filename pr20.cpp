#include<iostream>
using namespace std ;
int main ()
{
    int a[5]={1,2,3,4,5};
    int* b[5];
    for(int i=0;i<=4;i++)
    {
        cout<<*b[i]<<endl;
    }
    return 0;
}