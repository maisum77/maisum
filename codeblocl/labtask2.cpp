#include<iostream>
using namespace std;
class Rides
{
private:
    string name;
    string ride;
    string driver;
    int fare;
public:
    Rides(string a, string b, string c, int d)
    {
        name=a;
        ride=b;
        driver=c;
        fare=d;
    }
    bool operator <(Rides o1)
    {
        return fare< o1.fare;
    }
    Rides operator +(Rides o1)
    {
        name=name+" and "+o1.name;
        fare=fare+o1.fare;
    }
    void show()
    {
        cout<<"name= "<<name<<endl;
        cout<<"ride= "<<ride<<endl;
        cout<<"driver= "<<driver<<endl;
        cout<<"fare= "<<fare;
    }
};
int main()
{
    Rides r1("ali","ferris wheel","punjab",120);
    Rides r2("ahmed","dragon","ashfaq",130);
    Rides r3("maisum","ferris wheel","akhan",140);
    Rides r4("usairum","ferris wheel","basit",120);
    if (r1<r2)//compare fare
    {
        cout<<"r2 fare is greater"<<endl;
    }
    else{
        cout<<"r1 fare is greater"<<endl;
    }
    r1+r3;//merge rides
    r1.show();
}
