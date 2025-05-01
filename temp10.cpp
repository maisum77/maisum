#include<iostream>
using namespace std;
class LocalPhone
{
    private:
    int telephone;
    public:
    void input()
    {
        cout<<"input telephone = "<<endl;
        cin>>telephone;
    }
    void display()
    {
        cout<<"Telephone= "<<telephone<<endl;
    }
};
class NatPhone:public LocalPhone
{
    private:
    int code;
    public:
    void input()
    {
        cout<<"enter code= "<<endl;
        cin>>code;
        LocalPhone::input(); 
    }
    void display()
    {
        cout<<"city code= "<<code<<endl;
        LocalPhone::display();
    }
};
class IntPhone:public NatPhone
{
    private:
    int country_code;
    public:
    void input()
    {
        cout<<"Enter country code= "<<endl;
        cin>>country_code;
        NatPhone::input();
    }
    void display()
    {
        cout<<"country code= "<<country_code<<endl;
        NatPhone::display();
    }
};

int main()
{
    IntPhone p1;
    p1.input();
    p1.display();
}