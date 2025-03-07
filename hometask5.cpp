#include<iostream>
using namespace std ;
class Spaceship
{
    private:
    int fuel;
    public:
    Spaceship();
    void petrol(int a);
    void consume(int a);
    void display();
};
int main()
{
    Spaceship ship1;
    ship1.petrol(2000);
    ship1.consume(1500);
    ship1.display();
    return 0;
}
Spaceship::Spaceship()
{
    fuel=1000;
}
void Spaceship::petrol(int a)
{
    if(a<=5000)
    {
        fuel=a+fuel;
    }
    else 
    {
        cout<<"gas tank limit reached";
    }
}
void Spaceship::consume(int a)
{
    if (a<fuel)
    {
        fuel=fuel-a;
    }
    else
    {
        cout<<"not enough fuel to consume";
    }
}
void Spaceship::display()
{
    cout<<"Final fuel= "<<fuel;
}
