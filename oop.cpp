#include <iostream>
using namespace std ;
class name
{
    public:
    void greet();
};
int main()
{
    name obj1;
    obj1.greet();
    return 0;
}
void name::greet()
{
    cout<<"hello whats up ";
};