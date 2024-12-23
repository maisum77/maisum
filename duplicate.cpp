#include<iostream>
using namespace std;
int main ()
{
    int  arr[5]={1,2,3,4,1};
    for(int i=0;i<=4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
            if (arr[i]==arr[j])
            {
                cout<< "index "<<i<<" is duplicated in index "<<j<<endl;
            }
        }
    }
    return 0;
}