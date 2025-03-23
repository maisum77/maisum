#include<iostream>
using namespace std;
class calculator
{
    private:
    int a,b;
    public:
    calculator(int i)
    {
        a=i;
    }
    calculator (calculator obj1,calculator obj2)
    {
        cout<<"result of adding= "<<obj1.a+obj2.a<<endl;
    }
};
int main()
{
    calculator obj1(10);
    calculator obj2(20);
    calculator obj3(obj1,obj2);
    return 0;


}
