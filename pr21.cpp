#include<iostream>
using namespace std ;
int main()
{
    string a="pakistan";
    string* ref=&a;
    cout<<ref<<endl;
    cout<<*ref;
    *ref="india";
    cout<<ref<<endl;
    cout<<*ref<<endl;

    return 0;
}