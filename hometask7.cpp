#include<iostream>
#include<string>
using namespace std ;
class Spaceship
{
    public:
    string name;
    string destination;
    int fuel;
    Spaceship()
    {
        name="Unnamed";
        fuel=100;
    }
    Spaceship(string a)
    {
        name=a;
        fuel=100;
    }
    Spaceship(string a, int b)
    {
        name=a;
        fuel=b;
    }
    void display()
    {
        cout<<"Name= "<<name<<endl;
        cout<<"Fuel= "<<fuel<<endl;
    }
};
int main()
{
    Spaceship obj1;
    Spaceship obj2("chandriayan");
    Spaceship obj3("Keychain",50);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;

}