#include<iostream>
using namespace std;
class Run
{
    private:
    string name;
    double distance;
    public:
    static string maxname;
    static double maxdistance;
    void get()
    {
        cout<<"enter runner name= "<<endl;
        cin>>name;
        cout<<"enter distance= "<<endl;
        cin>>distance;
        if (maxdistance<distance)
        {
            maxdistance=distance;
            maxname=name;
        }
    }
    void display()
    {
        cout<<"name= "<<name<<endl;
        cout<<"distance= "<<distance<<endl;
    }
    void max()
    {
        cout<<"name= "<<maxname<<endl;
        cout<<"distance= "<<maxdistance<<endl;
    }
};
string Run:: maxname="";
double Run:: maxdistance=0;
int main()
{
    Run r1;
    Run r2;
    r1.get();
    r2.get();
    r1.max();
    return 0;
}