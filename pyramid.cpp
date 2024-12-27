#include<iostream>
using namespace std ;
int main()
{
    float l,w,h,v_pyramid,v_block,block;
    cout<<"lenght of one  side of pyramid in feet =";
    cin>>l;
    w=l;
    h=l/2.0;
    cout<<"dimenstions of a pyramid are ="<<endl;
    cout<<"lenght is = "<<l<<endl;
    cout<<"width is = "<<w<<endl;
    cout<<"height is = "<<h<<endl;
    v_pyramid=1.0/3.0*l*l*h;
    v_block=5*5*5;
    block=v_pyramid/v_block ;
    cout<<"total blocks in the pyramid approx. are = "<<block<<endl;
    return 0;
    
}