#include<iostream>
using namespace std;
class Library{
    public:
    static string catagory;
    static void show()
    {
        cout<<"book cat "<<catagory<<endl;

    }
};
string Library::show="opp";
int main ()
{
    string Library::show();
    return 0;

}
