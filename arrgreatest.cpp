#include<iostream>
using namespace std ;
int main ()
{
    int arr [10];
    for (int i=0;i<=9;i++)
    {
        cout << "enter number =";
        cin >> arr[i];
    }
    int great = arr[0];
    for (int j=1;j<=9;j++)
    {
        if (great<arr[j])
        {
            great=arr[j];
        }
    }
    cout << "greatest is = " << great ;
    return 0 ;
}