#include<iostream>
using namespace std;
class DM //store distance in meters and centimeter
{
    private:
    int a=120;
    int b=20;
    public:
    friend class DB;

};
class DB
{
    private:
    int a=20;
    int b=30;
    public:
    void adding(DM obj)
    {
        cout<<"adding a= "<<obj.a+a<<endl;
        cout<<"adding b= "<<obj.b+b<<endl;
    }
};

int main()
{
    DB obj;
    DM obj1;
    obj.adding(obj1);
}