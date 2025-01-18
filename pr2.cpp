#include<iostream>
using namespace std ;
int main()
{
    int radius;
    int height;
    cout<<"enter radius of cylinder= ";
    cin>>radius;
    cout<<"enter height of cylinder= ";
    cin>>height;
    int volume=3.14*radius*radius*height ;
    cout<<"volume of the cylinder is = "<<volume;
    return 0;

}