#include<iostream>
#include<string>
using namespace std;
class A
{
public:
    void hello()
    {
        cout<<"hello a"<<endl;
    }

};
class B: virtual public A{};
class C:virtual public A{};
class D:public B,public C{};
int main()
{
    D obj;
    obj.hello();
    return 0;
}
