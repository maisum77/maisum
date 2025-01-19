#include<iostream>
using namespace std ;
int main()
{
    int arr1[5]={1,3,6,2,11};
    int arr2[5]={3,5,11,9,7};
    int arr3[5]={3,11,4,0,0};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(arr1[i]==arr2[j]&&arr1[i]==arr3[k]&&arr2[j]==arr3[k])
                {
                    cout<<arr1[i]<<endl;
                }
            }
        }
    }
}