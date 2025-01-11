#include<iostream>
#include<string>
#include<conio.h>
using namespace std ;
void clearscreen() // clear the screen
{
    system("cls");
}
void grid (string moves[3][3]) // grid for the game
{
    
    // grid 
    cout<<"   |   |   \n";
    cout<<" "<<moves[0][0]<<" | "<<moves[0][1]<<" | "<<moves[0][2]<<" "<<endl;
    cout<<"___|___|___\n";
    cout<<"   |   |   \n";
    cout<<" "<<moves[1][0]<<" | "<<moves[1][1]<<" | "<<moves[1][2]<<" "<<endl;
    cout<<"___|___|___\n";
    cout<<"   |   |   \n";
    cout<<" "<<moves[2][0]<<" | "<<moves[2][1]<<" | "<<moves[2][2]<<" "<<endl;
    cout<<"   |   |   \n";
    
}
int winner(string moves[3][3])
{
    //check if the plyer 1 is won 
    if (moves[0][0]=="x"&& moves[0][1]=="x"&&moves[0][2]=="x")
    {
        return 1;
    }
    if (moves[1][0]=="x"&& moves[1][1]=="x"&&moves[1][2]=="x")
    {
       
        return 1;
    }
    if (moves[2][0]=="x"&& moves[2][1]=="x"&&moves[2][2]=="x")
    {
       
        return 1;
    }
    if (moves[0][0]=="x"&& moves[1][0]=="x"&&moves[2][0]=="x")
    {
        return 1;
    }
    if (moves[0][1]=="x"&& moves[1][1]=="x"&&moves[2][1]=="x")
    {
        return 1;
    }
    if (moves[0][2]=="x"&& moves[1][2]=="x"&&moves[2][2]=="x")
    {
        return 1;
    }
    if (moves[0][0]=="x"&& moves[1][1]=="x"&&moves[2][2]=="x")
    {
        return 1;
    }
    if (moves[0][2]=="x"&& moves[1][1]=="x"&&moves[2][0]=="x")
    {
        return 1;
    }


     // check if player 2 is winner 

     if (moves[0][0]=="o"&& moves[0][1]=="o"&&moves[0][2]=="o")
    {
        return 2;
    }
    if (moves[1][0]=="o"&& moves[1][1]=="o"&&moves[1][2]=="o")
    {
       
        return 2;
    }
    if (moves[2][0]=="o"&& moves[2][1]=="o"&&moves[2][2]=="o")
    {
       
        return 2;
    }
    if (moves[0][0]=="o"&& moves[1][0]=="o"&&moves[2][0]=="o")
    {
        return 2;
    }
    if (moves[0][1]=="o"&& moves[1][1]=="o"&&moves[2][1]=="o")
    {
        return 2;
    }
    if (moves[0][2]=="o"&& moves[1][2]=="o"&&moves[2][2]=="o")
    {
        return 2;
    }
    if (moves[0][0]=="o"&& moves[1][1]=="o"&&moves[2][2]=="o")
    {
        return 2;
    }
    if (moves[0][2]=="o"&& moves[1][1]=="o"&&moves[2][0]=="o")
    {
        return 2;
    }



}
int main()
{
    string moves [3][3] = {{" "," "," "},{" "," "," "},{" "," "," "}};
    for(int i=0;i<=2;i++) // loop to run the game 
    {
        grid(moves);
        int win =0; //check if plyer2is the winner 
       win= winner(moves);
       if(win==2)
       {
        cout<<"player 2 is winner";
        return 0;
       }
        cout<<"player1\ncoordinate of the grid = \n";//for player 1
        int a=0 ,b=0 ;
        cout<<"x coordinate= ";
        cin>>a;
        cout<<"y coordinate= ";
        cin>>b;
        moves[a][b]="x";

        clearscreen(); // player 1 enter then it update the grid
        grid(moves);
          int win =0; //check if player1 is the winner 
       win= winner(moves);
       if(win==1)
       {
        cout<<"player 1 is winner";
        return 0;
       }
        
        
        cout<<"player2\ncoordinate of the grid = \n";
         a=0 ,b=0 ;
        cout<<"x coordinate= ";
        cin>>a;
        cout<<"y coordinate= ";
        cin>>b;
        moves[a][b]="o";
        clearscreen();
        

    }

    return 0;
}