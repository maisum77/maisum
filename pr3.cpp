#include<iostream>
using namespace std;
class Payment
{
    public:
    virtual void processPayment()
    {
        cout<<"payent is processing"<<endl;
    }
};
class CreditCard:public Payment
{
  public:
  void processPayment() override
  {
    cout<<"Credit card processing"<<endl;
  }

};

class UPI:public Payment
{
  public:
  void processPayment() override
  {
    cout<<"UPI processing"<<endl;
  }

};

class Cash:public Payment
{
  public:
  void processPayment() override
  {
    cout<<"cash processing"<<endl;
  }

};
int main()
{
    Payment *p1;
    CreditCard c1;
    UPI u1;
    Cash z1;
    p1=&c1;
    p1->processPayment();
    p1=&u1;
    p1->processPayment();
    p1=&z1;
    p1->processPayment();
    return 0;
}
