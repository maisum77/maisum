#include<iostream>
#include<string>
using namespace std ;
const int NUM_COMPARTMENTS = 20;
const int SEATS_PER_COMPARTMENT = 40;
string name [20]={"compartment1","compartment2","compartment3","compartment4","compartment5","compartment6","compartment7","compartment8",
 "compartment9","compartment10","compartment11","compartment12","compartment13","compartment14","compartment15","compartment16","compartment17",
 "compartment18","compartment19","compartment20"};
void layout()
{
    int arr[20][40];
    for(int i=0;i<=20;i++)
    {
        cout<<name[i] ;
        for(int j=0;j<=41;j++)
        {
            arr[i][j]='#';
        }
        cout<<endl;
    }
    for(int k=0;k<=20;k++)
    {
       
        for(int l=0;l<=41;l++)
        {
            cout<<arr[k][l];
        }

        cout<<endl;
    }

}
int main()
{
 
 int prices[20];
 for(int i=0;i<=19;i++)
 {
    cout<<"Price for seat in "<<name[i]<< " is = ";
    cin>>prices[i];
 }
 layout();
   return 0;
}