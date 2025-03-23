#include<iostream>
using namespace std ;
class Robot
{

    public:
    void PerformTask(string task)
    {
        cout<<"task= "<<task<<endl;
        cout<<"----------"<<endl;
    }
    void PerformTask(string task,int duration)
    {
        cout<<"task= "<<task<<endl;
        cout<<"duration= "<<duration<<endl;
        cout<<"----------"<<endl;
    }
    void PerformTask(string task, int duration, string priority)
    {
        cout<<"task= "<<task<<endl;
        cout<<"duration= "<<duration<<endl;
        cout<<"priority= "<<priority<<endl;
    }
};
int main ()
{
    Robot obj;
    obj.PerformTask("clean");
    obj.PerformTask("market",120);
    obj.PerformTask("call",120,"high");
    return 0;
}
