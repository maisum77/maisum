#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10];
    cout <<"enter 10 numbers="<< endl;
    for (int i=0;i<=9;i++)
    {
        cin>> arr[i];
    }
    sort (arr,arr+10);
    cout << "array in ascending order"<< endl;
    for(int j=0;j<=9;j++)
    {
        cout<< arr[j]<<",";

    }
    return 0;


}