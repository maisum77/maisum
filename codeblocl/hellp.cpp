#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string brand;
    string model;
public:
    Vehicle(string b, string m){
        brand=b;
        model=m ;
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
    void startEngine() {
        cout << "Starting a generic vehicle..." << endl;
    }
};

class Car : public Vehicle
{
private:
    string fuelType;
public:
    Car(string b, string m, string f) : Vehicle(b, m)
    {
        fuelType=f;
    }
    void startEngine() {
        cout << "Starting a " << fuelType << " car..." << endl;
    }
};

int main() {
    Car myCar("Toyota", "Camry", "gasoline");
    myCar.startEngine();
    return 0;
}
