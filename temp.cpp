#include<iostream>
#include<string>
using namespace std;
void initialize_structure(string layout[][41])
{
    for(int i=0;i<20;i++)
    {
        layout[i][0]="apartment"+to_string(i+1);
    }
    for(int j=0;j<20;j++)
    {
        for(int k=1;k<41;k++)
        {
            layout[j][k]="#";
        }
    }
}
void layoutdisplay(string layout[][41])
{
    
    for(int k=0;k<20;k++)
    {
        for(int l=0;l<41;l++)
        {
            cout<<layout[k][l]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    string layout[20][41];
    int price [20];
    int choice;
    int a,b;
    int exit=0;
    initialize_structure(layout); //initialize the structure of the seats
    layoutdisplay(layout);// display seats layout
    //for entering prices for each compartments 
    cout << "---enter price for each apartment---" << endl;
    for(int i = 0; i < 20; i++)  
    {
        cout << "enter price for " << layout[i][0] << " = ";
        cin >> price[i];
    }

    while (exit==0)
    {
       cout<<"---Train reservation platform---"<<endl;
       cout<<"1=show layout of the seats "<<endl;//show layout of the seats in the train
       cout<<"2=reserve seat"<<endl;//allow to reserve seats
       cout<<"3=total sales"<<endl;//show total sales
       cout<<"4=Quit"<<endl;//end the program
       rewrite://take the flow fo goto here to take the choice again
       cout<<"enter 1-4 to perform the action="<<endl;
       cin>>choice;
       if(choice>4 || choice<=0)
       {
           cout<<"Error please select from the given option"<<endl;
           goto rewrite;//redirect the flow to reselect the number
       }
       
       
       switch(choice)
       {
           case 1://for layout
           {
               layoutdisplay(layout);// display seats layout
               break;
           }
           case 2://for reservation
           {
               a=0;
               b=0;
               again:
               cout<<"--reserving seats--"<<endl;
               cout<<"apartment number=";
               cin>>a;
               cout<<endl;
               cout<<"seat number =";
               cin>>b;
               cout<<endl;
               if(layout[a-1][b]=="*")
               {
                   cout<< "seat already reserved.Please select another one";
                   goto again;
               }
               else
               {
                   layout[a-1][b]='*';
                   cout<<"reservation successful"<<endl;
               }
               layoutdisplay(layout);
               break;
           }
           case 3://for total sales 
           {
            int totalSale = 0;
            for(int i = 0; i < 20; i++)  
            {
              int reservedSeats = 0;
              for(int j = 1; j < 41; j++)  
              {
                if(layout[i][j] == "*") //check if the current apparment have reversed seats 
                {
                  reservedSeats++;
                }
              }
                totalSale += reservedSeats * price[i]; //take the all prices into total price variable 
                
            }
              cout << "Total sales across all apartments= $" << totalSale << endl;
              break;
   
           }
           case 4: //for exiting the loop
           {
               exit++;
               break;
           }
   
   
       }
    }
    
    return 0;
}