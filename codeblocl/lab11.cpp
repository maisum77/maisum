#include<iostream>
using namespace std;
class ATM
{
private:
    int balance;
public:
    ATM()
    {
        balance=10000;
    }
    void withdraw(int amount)
    {
        if(amount<=amount)
        {
            balance-=amount;
            cout<<"cash withdraw = " <<amount<<endl;
            cout<<"remaining balance "<<balance<<endl;
        }
        else
        {
            cout<<"insufficient balance"<<endl;
        }
    }
};
int main()
{
    ATM A1;
    A1.withdraw(1200);
    return 0;
}
