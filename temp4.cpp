#include<iostream>
using namespace std;
class Bank
{
    private:
    string name;
    int acc_no;
    string type;
    double balance;
    public:
    Bank(string a, int b, string c, double d)
    {
        name=a;
        acc_no=b;
        type=c;
        balance=d;
    }
    void deposit(double a)
    {
        balance=balance+a;
    }
    void withdraw(double a)
    {
        if (balance>a)
        {
            cout<<"successfully withdraw amount"<<endl;
            balance=balance-a;
        }
        else 
        {
            cout<<"insufficient balance"<<endl;
        }
    }
    void display()
    {
        cout<<"Name= "<<name<<endl;
        cout<<"account_number= "<<acc_no<<endl;
        cout<<"Account_type= "<<type<<endl;
        cout<<"Balance= "<<balance<<endl;
    }
};
int main()
{
    Bank b1("ali",12345123,"debit",1000000);
    b1.deposit(200);
    b1.display();
    b1.withdraw(20000);
    b1.display();
}