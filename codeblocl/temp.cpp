#include<iostream>
#include<string>
using namespace std;
class Login
{
public:
    bool login()
    {
        string username,password;
        cout<<"LMS SYSTEMS\n";
        cout<<"enter username= "<<endl;
        cin>>username;
        cout<<"enter password= "<<endl;
        cin>>password;

    if(username=="abc"&& password=="abc123")
    {
        cout<<"login successfull! welcome "<<username<<endl;
        return true;
    }
    else
    {
        cout<<"incorrect input"<<endl;
        return false;
    }
    }
};

class course
{
public:
    void viewcources()
    {
        cout<<"your cources"<<endl;
        cout<<"OOP"<<endl;
        cout<<"Database"<<endl;
        cout<<"DLD"<<endl;
    }
    void notification()
    {
        cout<<"notification:"<<endl;
        cout<<"mid term exams datesheet"<<endl;
        cout<<"oop lab will be on 17"<<endl;
        cout<<"holiday of tommorow"<<endl;

    }
};

class LMSportal : public Login, public course
{

};

int main()
{
    LMSportal st;
    int choice;
    if (!st.login())
    {
        return 0;
    }
    do
    {
        cout<<"LMS dashboard"<<endl;
        cout<<"1.view cources"<<endl;
        cout<<"2.view notification"<<endl;
        cout<<"0.logout"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
                st.viewcources();
                break;
            }
        case 2:
            {
                st.notification();
                break;
            }
        case 0:
            {
                cout<<"loging out"<<endl;
                return 0;
            }
        default:
        {
        cout<<"invalid options"<<endl;
        }

        }
    } while (choice!=0);

    return 0;
}
