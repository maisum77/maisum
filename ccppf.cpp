#include<iostream>
using namespace std ;
void layout()
{
   for (int i=1;i<=20;i++)
   {
    cout<<"compartment"<<i<<endl;
    for(int j=1;j<=40;j++)
    {
        cout<<"#";
    }
    cout<<endl;
   }
}