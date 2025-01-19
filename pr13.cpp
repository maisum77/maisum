#include<iostream>
using namespace std ;
int main()
{
    int num;
    cout<<"enter the num = ";
    cin>>num;
    for(int i=0;i<=num;i++)
    {
        for(int j=0;j<=num;j++)
        {
            if(i+j==num)
            {
                cout<<num<<"="<<i<<"+"<<j<<endl;
            }
        }
    }    
    return 0;
}
