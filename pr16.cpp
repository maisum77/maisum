#include<iostream>
using namespace std;
int main()
{
    int arr[5]={3,5,7,2,4};
    int largest =arr[0];
    int second =arr[0];
    int third =arr[0];
    for(int i=0;i<=5;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    for(int j=0;j<=5;j++)
    {
    if(arr[j] > second && arr[j] < largest)
        {
            second=arr[j];
        }
    }
    for(int k=0;k<=5;k++)
    {
        if(arr[k] > third && arr[k] < second)
        {
            third=arr[k];
        }
    }
    cout<<largest<<endl<<second<<endl<<third;
    return 0;
}