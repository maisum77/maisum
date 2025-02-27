#include<iostream>
#include<string>
using namespace std;
class WeatherStation
{
private:
    int temperature;
    string condition;
public:
    void in()
    {
        cout<<"Temperature = "<<endl;
        cin>>temperature;
        cout<<"Weather condition = "<<endl;
        cin>>condition;
    }
    void out()
    {
        cout<<"Temperature | "<<temperature<<endl;
        cout<<"condition   | "<<condition<<endl;
    }

};
int main()
{
    WeatherStation obj1,obj2;
    obj1.in();
    obj2.in();
    cout<<"--Weather Report--"<<endl;
    obj1.out();
    obj2.out();

}
