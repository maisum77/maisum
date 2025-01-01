#include<iostream>
using namespace std ;
int main()
{
    int arr[3][3];
    int arr2[3][3];
    int oneD [9];
    int count=1;
    int temp=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<count<<")";
            cin>>arr[i][j];
            count++;
        }
    }
    for(int c=0;c<3;c++)
    {
        for(int d=0;d<3;d++)
        {
            cout<<arr[c][d]<<" ";
        }
        cout<<endl;
    }
    cout<<"-------------------"<<endl;  
    for(int f=0;f<9;f++)
    {
       for(int g=0;g<9;g++)
       {
        oneD[temp]=arr[f][g];
        temp++;
       }
    }
    int srow=0,endrow=2,scol=0,endcol=2,index=0;
    int e=0;
    do
    {
        arr2[srow][e]=oneD[index];
        index++;
        e++;
    }
    while(e<=endcol);
    int h=srow+1;
    do
    {
        arr2[h][endcol]=oneD[index];
        index++;
        h++;
    }
    while(h<=endrow);
    int k=0;
    do
    {
        arr2[endrow][k]=oneD[index];
        index++;
        k++;
    }
    while(k<=endcol-1);
    int l=1;
    do
    {
        arr2[endrow-1][l]=oneD[index];
        index++;
        l++;
    }
    while(l<=endcol-1);

    for(int m=0;m<3;m++)
    {
        for(int n=0;n<3;n++)
        {
            cout<<arr2[m][n]<<" ";
        }
        cout<<endl;
    }

    return 0;
}