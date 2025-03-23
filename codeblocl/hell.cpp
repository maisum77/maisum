#include<iostream>
using namespace std;
class ResearchLab
{
    private :
    string name="shadows";
    int budget=10000000;
    string lead="ali";
    public:
    friend void displayProjectDetails(ResearchLab obj);
    friend class Admin;

};
void displayProjectDetails(ResearchLab obj)
{
 cout<<"Project name= "<<obj.name<<endl;
 cout<<"Total budget= "<<obj.budget<<endl;
 cout<<"Lead researcher= "<<obj.lead<<endl;
}
class Admin
{
    public:
    void edit(ResearchLab &obj)
    {
            cout<<"Project name= "<<endl;
            cin>>obj.name;
            cout<<"Total budget= "<<endl;
            cin>>obj.budget;
            cout<<"Lead researcher= "<<endl;
            cin>>obj.lead;
    }
    void display(ResearchLab obj)
    {
        cout<<"Project name= "<<obj.name<<endl;
 cout<<"Total budget= "<<obj.budget<<endl;
 cout<<"Lead researcher= "<<obj.lead<<endl;
    }

};
int main()
{
    ResearchLab o1;
    displayProjectDetails(o1);
    Admin A2;
    A2.edit(o1);
    A2.display(o1);
    return 0;

}
