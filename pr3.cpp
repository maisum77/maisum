#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first and second side of the triangle =\n";
    cin>>a>>b;
    int c;
    int temp=a+b;
    c=180-temp;
    cout<<"the lenght of third side is ="<<c;
    return 0;

}