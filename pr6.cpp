#include <iostream>
using namespace std;
int main()
{
    int num[4];
    cout<<"enter number that need to be sorted\n";
    for(int i=0;i<=3;i++)
    {
        cout<<i+1<<") ";
        cin>>num[i];
    }
    cout<<max(num);
}