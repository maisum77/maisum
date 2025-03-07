#include<iostream>
using namespace std ;
class Calculator
{
    public:
    int result;
    Calculator()
    {
        result=0;
    }
    void add(int a)
    {
        result=result+a;
    }
    void subtract(int a)
    {
        result=result-a;
    }
    void multiply(int a)
    {
        result=result*a;
    }
    void divide(int a)
    {
        if(a!=0)
        {
        result=result/a;
        }
        else
        {
            cout<<"invalid input";
        }
    }
    int getter()
    {
        return result;
    }
}; 
int main()
{
    Calculator obj;
    obj.add(100);
    cout<<"number is= "<<obj.getter()<<endl;
    obj.subtract(20);
    cout<<"number is= "<<obj.getter()<<endl;
    obj.multiply(4);
    cout<<"number is= "<<obj.getter()<<endl;
    obj.divide(2);
    cout<<"number is= "<<obj.getter()<<endl;


}