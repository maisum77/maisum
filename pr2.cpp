#include <iostream>
#include<string>
using namespace std;
class parent
{
    public:
  virtual void display()
  {
    cout<<"parent class"<<endl;
  }
};
class child:public parent
{
    public:
    void display() override
    {
        cout<<"child class"<<endl;
    }
};
int main()
{
    parent *p1;
    child c1;
    p1=&c1;
    p1->display();
    return 0;
}