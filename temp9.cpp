#include<iostream>
using namespace std;
class Employee
{
    private:
    int emp_id;
    int scale;
    public:
    void input()
    {
        cout<<"enter employee id= "<<endl;
        cin>>emp_id;
        cout<<"enter scale= "<<endl;
        cin>>scale;
    }
    void show()
    {
        cout<<"employee id= "<<emp_id<<endl;
        cout<<"scale ="<<scale<<endl;
    }

};
class Manager:public Employee
{
    private:
    int manger_id;
    string department;
    public:
    void input()
    {
        cout<<"enter manager id= "<<endl;
        cin>>manger_id;
        cout<<"enter department= "<<endl;
        cin>>department;
    }
    void show()
    {
        cout<<"manger id= "<<manger_id<<endl;
        cout<<"department ="<<department<<endl;
    }

};
int main()
{
}
