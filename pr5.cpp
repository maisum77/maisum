#include<iostream>
using namespace std;
int main()
{
    int num[4];
    cout<<"enter number that need to be sorted\n";
    for(int i=0;i<=3;i++)
    {
        cout<<i+1<<") ";
        cin>>num[i];
    }
    
    for(int j=0;j<=3;j++)
    {
        for(int l=0;l<=3;l++)
        {
         if(num[j]>num[l])
         {
             swap(num[j],num[l]);
         }
        } 
    }
    for(int k=0;k<=3;k++)
    {
        cout<<k+1<<") ";
        cout<<num[k]<<endl;;
    }
    return 0;
}