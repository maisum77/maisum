#include<iostream>
#include<string>
using namespace std ;
void greet_user (string name)
{
    cout << "Hey there " << name << " Hope you are doing great!" ;
   
}
int main()
{
    string name ;
    cout << "enter your name = " ;
    getline(cin,name) ;
    greet_user (name);
    return 0;
}
