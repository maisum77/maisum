#include<iostream>
using namespace std ;
int main ()
{
    int arr[3][3]={{1,2,3},
                  {4,5,6},
                  {7,8,9}};
     int greatest=arr[0][0];
     int samllest=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(greatest<arr[i][j])
            {
                greatest=arr[i][j];
            }

        }
    } 
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            if(samllest>arr[a][b])
            {
                samllest=arr[a][b];
            }

        }
    } 
    cout<<"greatest number in the array = "<<greatest<<endl;
    cout<<"smallest number in the array = "<<samllest<<endl;
    return 0;
}