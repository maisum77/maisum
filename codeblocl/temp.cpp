#include<iostream>
#include<string>
using namespace std;
class Name
{
public:
    int num;
   // float num1;
    Name(int a)
    {
        num=a;
    }
    Name(float a)
    {
        num=a;
    }

};
int main()
{
    Name obj(12);
    cout<<obj.num;

    return 0;
}
