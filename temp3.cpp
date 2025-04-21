#include<iostream>
#include<string>
using namespace std;
class Player
{
    private:
    string name;
    double average;
    string team;
    public:
    Player(string a, double b, string c)
    {
        name=a;
        average=b;
        team=c;
    }
    void input()
    {
        cout<<"name of player= "<<endl;
        cin>>name;
        cout<<"Average score= "<<endl;
        cin>>average;
        cout<<"name of team= "<<endl;
        cin>>team;
    }
    void display()
    {
        cout<<"name of player= "<<name<<endl;
        cout<<"Average score= "<<average<<endl;
        cout<<"name of team= "<<team;
    }
};
int main()
{
    Player p1("maisum",10.0,"team a");
    Player p2("aon",10.0,"team b");
    Player p3("hashir",10.0,"team c");
    p2.display();
}