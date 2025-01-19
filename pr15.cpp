#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main ()
{
    string a ;
    cout<<"enter word = ";
    cin>>a;
    string b=a;
    reverse(a.begin(),a.end());
    if(a==b)
    {
        cout<<"the word is a palindrom ";
    }
    else 
    {
        cout<<"word is not a palindrom ";
    }
    return 0;
}