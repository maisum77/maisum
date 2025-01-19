#include<iostream>
using namespace std ;
int main()
{
    string a="pakisitan";
    string* ref=&a;
    cout<<ref<<endl;
    cout<<*ref<<endl;
    *ref="afghanistan";
    cout<<ref<<endl;
    cout<<*ref;
    return 0;
}