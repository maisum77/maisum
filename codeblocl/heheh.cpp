#include<iostream>
using namespace std ;
class computer
{
private:
    string use="a";
    int id=100;

    friend void show (computer o1);
};
    void show(computer o1)
    {
        cout<<o1.id<<endl;
        cout<<o1.use<<endl;
    }
int main ()
{
    computer o1;
    show(o1);
    return 0;
}
