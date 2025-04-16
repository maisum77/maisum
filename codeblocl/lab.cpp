#include<iostream>
using namespace std;
class NetworkDevice
{
protected:
    string devicename;
    string IPaddress;
    string MACaddress;
public:
    NetworkDevice(string a, string b, string c)
    {
        devicename=a;
        IPaddress=b;
        MACaddress=c;
    }
    ~NetworkDevice()
    {
        cout<<"object destroyed"<<endl;
    }
    void display()
    {
        cout<<"Device name= "<<devicename<<endl;
        cout<<"IP address= "<<IPaddress<<endl;
        cout<<"MAC address= "<<MACaddress<<endl;
    }
};
class router:public NetworkDevice
{
private:
    int bandwidth;
    int numPorts;
public:
    router(int a, int b,string c,string d,string e):NetworkDevice(c,d,e)
    {
        bandwidth=a;
        numPorts=b;
    }
    ~router()
    {
        cout<<"router obj destroyed"<<endl;
    }
};
int main()
{
    router r1(12,23,"asus","123:xc4:234:6t52","111:3e33:245w");
    r1.display();
    return 0;


}
