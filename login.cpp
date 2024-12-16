#include<iostream>
#include<string>
using namespace std ;
void signup ()
{
    string name,password,email ;
    cout << "enter full name = ";
    cin.ignore();
    getline (cin,name) ;
    cout<< endl;
    cout << "create password = ";
    getline(cin,password);
    cout << "enter email = " ;
    getline(cin,email);
}
void login()
{
    string name , password ;
    cout << "enter name = ";
    getline(cin,name);
    cout<< "enter password = ";
    getline(cin,password);
}
int main()
{
    int choice ;
    cout<< "1=signup\n2=login "<<endl;
    cout<< "enter=";
    cin>> choice;
    if (choice==1)
    {
        signup();
    }
    else if (choice==2)
    {
        login();
    }
    else 
    {
        cout << "incorrect choice";
    }
    return 0;
}