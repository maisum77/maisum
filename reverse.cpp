#include<iostream>
using namespace std;
int main ()
{
    int  arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int reverse[10];
    int temp=9;
    for (int i=0;i<=9;i++)
    {
      reverse[i]=arr[temp];
      temp--;
    }
    cout<< "reversed array is ="<<endl;
    for (int j=0;j<=9;j++)
    {
        
        cout<< reverse[j]<<endl;
    }
    return 0;
}