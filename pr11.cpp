#include<iostream>
using namespace std ;
int main ()
{
    int a=0;
    int b=1;
    int c=0;

    int lenght;
    cout<<"enter the lenght of the Fibonacci series = ";
    cin>>lenght;
    cout<<a<<","<<b<<",";
    for(int i=3;i<=lenght;i++)
    {
        c = a + b;  
        cout << "," << c; 
        a=b;
        b=c;
        
    }
    return 0;
}