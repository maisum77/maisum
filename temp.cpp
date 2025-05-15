#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

class Employee
{
    protected:
    float totalsales;
    public:
    Employee(float sales)//setter function
    {
        totalsales=sales;
    }
    float getsales()//getter function
    {
        return totalsales;
    }
    void showsales()
    {
        cout<<"toatal sales "<<totalsales<<endl;
    }
};
class Role:public Employee
{
    protected:
    string rolename;
    public:
    Role(float sales,string role):Employee(sales)
    {
        rolename=role;
    }
    void showrole()
    {
        cout<<"Role="<<rolename<<endl;
    }
    void tolowercase(string &str)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    string getrole()
    {
        tolowercase(rolename);
        return rolename;
    }
};

class SalesCommission: public Role

{
    public:
    SalesCommission(float sales,string role):Role(sales,role)
    {

    }
    float calculate_commission()
    {
        string roleLower=getrole();//get role from the user and store in the variable
        if(roleLower=="saleperson")
        {
            return (getsales()*10)/100;
        }
        else if(roleLower=="manger")
        {
            return(getsales()*15)/100;
        }
        else if (roleLower=="senior manager")
        {
            return(getsales()*20)/100;
        }
        else{
            return 0;
        }

    }
    void showcommission()
    {
        float commission=calculate_commission();
        cout<<"commission"<<commission<<endl;
    }
};
int main()
{
    float sale;
    string role;
    cout<<"enter total sales= "<<endl;
    cin>>sale;
    cout<<"enter the employee(salesperson,manager,senior manger)= "<<endl;
    cin.ignore();
    getline(cin,role);
    SalesCommission e(sale,role);
    cout<<"employee details= "<<endl;
    e.showrole();
    e.showsales();
    e.showcommission();
    return 0;
    
}