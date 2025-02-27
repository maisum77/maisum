#include<iostream>
#include<string>
using namespace std;
class Game
{
public:
    string name;
    int rating;
    void in()
    {
        cout<<"rating for game is = "<<endl;
        cin>>rating;
    }
    void out(string name)
    {
        cout<<"name of the game is = "<<name<<endl;
        cout<<"rating of the game is = "<<rating<<endl;
    }
};

int main()
{
    Game obj;
    obj.in();
    obj.out("Valorant");

}
