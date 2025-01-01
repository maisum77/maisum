#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int count=1;
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<count<<")";
            cin>>arr[i][j];
            count++;
        }
    }
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            sum=sum+arr[a][b];
            cout<<arr[a][b]<<" ";
        }
        cout<<endl;
    }
    int greatest=arr[0][0];
    for(int k=0;k<3;k++)
    {
        for(int l=0;l<3;l++)
        {
            if(greatest<arr[k][l])
            {
                greatest=arr[k][l];
            }

        }
    } 
    cout <<"greatest number in the 2D array="<<greatest<<endl;
    cout<<"summ of all the elements in the 2D = "<<sum<<endl;
    return 0;


}