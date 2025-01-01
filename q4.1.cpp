#include<iostream>
using namespace std ;
int main ()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int oned [9];
    int arr2[3][3];
    int num=0;
    int temp=0;
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            oned[temp]=arr[a][b];
            temp++;
        }
    }
    int srow=0,scol=0,endcol=2,endrow=2,index=0;
    for(int i=0;i<=endcol;i++)
    {
        arr2[srow][i]=oned[index];
        index++;
    }
    for(int j=srow=1;j<=endrow;j++)
    {
        arr2[j][endcol]=oned[index];
        index++;
    }
    for(int k=scol+1;k<scol;k++)
    {
        arr2[endrow][k]=oned[index];
        index++;
    }
    for(int l=scol;l<=endcol-1;l++)
    {
        arr2[srow+1][l]=oned[index];
        index++;
    }


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