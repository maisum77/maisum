#include<iostream>
#include<string>
using namespace std ;
class Satellite
{
    public:
    string name;
    string status;
    double frequency;
    Satellite()
    {
        name="Unknown";
        status="Inactive";
        frequency=0.0;
    }
    Satellite(string a, string b, double c)
    {
        name=a;
        status=b;
        frequency=c;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Status: "<<status<<endl;
        cout<<"Frequency: "<<frequency<<" MHz"<<endl;
    }
};
int main()
{
    Satellite defaultSatellite;
    Satellite obj1("huble","Active",2.5);
    Satellite obj2("Kepler","Inactive",1.9);
    defaultSatellite.display();
    obj1.display();
    obj2.display();
    return 0;
}