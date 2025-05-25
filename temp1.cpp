#include <iostream>
#include <string>
using namespace std;

class Appliance {
private:
    string brand;
    int power;
public:
    Appliance(string b, int p) 
    {
        brand=b, power=p; 
        cout << "Brand: " << brand << ", Power: " << power << "W" << endl;
    }
    virtual void start() {
        cout << "Starting basic appliance..." << endl;
    }
};

class SmartOven : public Appliance {
private:
    string mode;
public:
    SmartOven(string b, int p, string m) : Appliance(b, p)
    {
        mode=m; 
    }
    void start()  {
        cout << "Starting Smart Oven in " << mode << " mode..." << endl;
    }
};

int main() {
    SmartOven myOven("Samsung", 1500, "Bake");
    myOven.start();
    return 0;
}