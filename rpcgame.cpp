#include<iostream>
#include<cstdlib>
#include<ctime>
#include<random>
#include<string>
using namespace std;
int compchoice()
{
    //random number between 1to3
    srand(time(0));
    here:
    int i = rand()%4;
    if( i == 0)
    {
        goto here;
    }
    return i;

}
void winner(int i , int j)
{
    if (i==1 && j==1)
    {
        cout<<"computer=Rock \n user=Rock\n";
        cout<<"draw";
    }
    else if (i==1 && j==2)
    {
        cout<<"computer=Rock \n user=Paper\n";
        cout<<"user won";
    }
    else if (i==1 && j==3)
    {
        cout<<"computer=Rock \n user=Scissor\n";
        cout<<"computer won";
    }
    if (i==2 && j==1)
    {
        cout<<"computer=Paper \n user=Rock\n";
        cout<<"computer won";
    }
    else if (i==2 && j==2)
    {
        cout<<"computer=Paper \n user=Paper\n";
        cout<<"draw";
    }
    else if (i==2 && j==3)
    {
        cout<<"computer=Paper \n user=Scissor\n";
        cout<<"user won";
    }
    if (i==3 && j==1)
    {
        cout<<"computer=Scissor \n user=Rock\n";
        cout<<"user won";
    }
    else if (i==3 && j==2)
    {
        cout<<"computer=Scissor \n user=Paper\n";
        cout<<"computer won";
    }
    else if (i==3 && j==3)
    {
        cout<<"computer=Scissor \n user=Scissor\n";
        cout<<"draw";
    }

}
int main ()
{
    int user;
    cout<<"------Rock Paper Scissor Game------"<<endl;
    cout<<"Choices"<<endl;
    cout<<"1.ROCK \n2.PAPER \n3.SCISSOR\n";
    cout<<"enter your choice ="<<endl;
    cin>>user;
    int computer = compchoice();
    winner(computer,user);
    return 0;
}