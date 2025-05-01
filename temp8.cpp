#include<iostream>
using namespace std;
class Array
{
    private:
    int array[5];
    public:
    Array ()
    {
        for(int i=0;i<=4;i++)
        {
            array[i]=-1;
        }
    }
    void input()
    {
        for(int x=0; x<=4; x++)
        {
            cout<<x+1<<")";
            cin>>array[x];
        }
    }
    void display()
    {
        for(int i=0;i<=4;i++)
        {
            cout<<i+1<<")"<<array[i];
        }
    }
    bool operator == (Array obj)
    {
        for(int i=0;i<=4;i++)
        {
            if(array[i]!=obj.array[i])
            {
                return 0;
            }

        }
        return 1;
    }
};
int main()
{
    Array a1;
    Array a2;
    if(a1==a2)
    {
        cout<<"they are equal in values"<<endl;
    }
    else 
    {
        cout<<"they are not equal"<<endl;
    }
    a1.input();
    a2.input();
    if(a1==a2)
    {
        cout<<"they are equal in values"<<endl;
    }
    else 
    {
        cout<<"they are not equal"<<endl;
    }
}