#include<iostream>
#include<string>
using namespace std ;
int nameindex (string name[10] , int data , string find)
{
    for (int i=0;i<=data;i++)
    {
        if (name[i]==find)
        {
            return i ;
        }
    }
    return -1 ;
}
int main ()
{
    string names[10] = {"ali","ahmed","abbas","aon","habib","hassan","maisum","basit","qasim","karam"};
    string user;
    cout << "enter a name =";
    cin >> user ;
    int index = nameindex (names,10,user);
    if (index!=-1)
    {
        cout << "name is present in the array at index =" << index ;
    }
    else 
    {
        cout << "not present in the array!";
    }
    
}