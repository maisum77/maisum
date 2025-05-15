#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    void display()
    {
        cout<<"this is cs student";
    }
};
class eng:public student
{
    public:
    void display() {
        cout<<"this is adv cs "<<endl;
    }
};
int main()
{
    student* obj;
    eng obj1;
    obj->display();
    obj=&obj1;
    obj->display();

    return 0;
}