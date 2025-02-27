#include<iostream>
#include<string>
using namespace std ;
class Animal
{
    public:
    string name;
    string species;
    void in()
    {
        cout<<"name= ";
        cin>>name;
        cout<<"specie= ";
        cin>>species;
    }
    void speak()
    {
        cout<<"The "<<name<<" is a "<<species<<endl; 
    }

};
int main()
{
    Animal obj1,obj2;
    obj1.in();
    obj2.in();
    obj1.speak();
    obj2.speak();
}