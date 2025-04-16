#include<iostream>
using namespace std;
class Player
{
private:
    string name;
    int score;
    int ranking;
    int match;
public:
    Player(string a, int b, int c, int d)
    {
        name=a;
        score=b;
        ranking=c;
        match=d;
    }
    Player operator +=(int points)
    {
        score+=points;
    }
    Player operator ++(int a)
    {
        match++;
    }
    bool operator <(Player o1)
    {
        return ranking<o1.ranking;
    }
    void show()
    {
        cout<<"name= "<<name<<endl;
        cout<<"score= "<<score<<endl;
        cout<<"ranking= "<<ranking<<endl;
        cout<<"match= "<<match<<endl;
    }

};
int main()
{
    Player p1("mess",20,2,23);
    Player p2("ali",23,4,40);
    p1+=10;
    p1++;
    p1.show();//show state of player 1
    p2+=20;
    p2++;
    p2.show();//show states of player 2
    if (p1<p2)//compare two player ranking
    {
        cout<<"player 2 ranking is higher";
    }
    else
    {
        cout<<"player 1 ranking is higher";
    }
    return 0;

}
