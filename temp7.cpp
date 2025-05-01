#include<iostream>
using namespace std;
class Time
{
    private:
    int hour;
    int minutes;
    int second;
    public:
    Time(int a,int b, int c)
    {
        hour=a;
        minutes=b;
        second=c;
    }
    void show()
    {
        cout<<"Time= "<<hour<<":"<<minutes<<":"<<second<<endl;
    }

   void operator ++ ()
    {
        ++minutes;
        
    }
    void operator ++(int)
    {
        ++minutes;
    }
    void operator --()
    {
        --minutes;
    }
};
int main()
{
    Time t1(2,30,45);
    t1.show();
    ++t1;
    t1.show();
    --t1;
    t1.show();
}