#include<iostream>
#include<string>
using namespace std;
int main()
{
    int member,hour,amount ,d_amount,m_amount,s_amount,parking;
    cout<<"enter total number of member going = "<<endl;
    cin>>member;
    cout<<"enter  total  hours stayed ="<<endl;
    cin>>hour;
    string name[member];
    cout<<"enter names of family="<<endl;
    for(int i=0;i<member;i++)
    {
       cout<<i+1<<")";
       cin>>name[i];
    }
    int age[member];
    cout<<"enter age of each  member"<<endl;
    for(int j=0;j<member;j++)
    {
        cout<<name[j]<<"=";
        cin>>age[j];
    }
    //for discovery
    d_amount=100*member; 
    for(int a=0;a<member;a++)
    {
        if (age[a]>=10 && age[a]<=15)
        {
            d_amount=d_amount-10;
        }
        else if(age[a]>15 && age[a]<=20)
        {
            d_amount=d_amount-5;
        }
        else{};
    }
    //for maryland
    m_amount=100*member; 
    for(int a=0;a<member;a++)
    {
        if (age[a]>=1 && age[a]<=5)
        {
            m_amount=m_amount-50;
        }
        else if(age[a]>5 && age[a]<=10)
        {
            m_amount=m_amount-25;
        }
        else{};
    }
    s_amount=d_amount+m_amount;
    parking=10*hour;
    amount=s_amount+parking;
    cout <<"total expence would be="<<amount;
    return 0;
}