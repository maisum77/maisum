#include<iostream>
using namespace std;
class Course
{
    public:
    string name;
    int rating[3];
    string review[3];
    int average=0;
    void average_rating()
    {
        for(int i=0;i<=2;i++)
        {
            average=average+rating[i];
        }
        average=average/3;
    }
    void display()
    {
        cout<<"course name= "<<name<<endl;
        cout<<"average rating= "<<average<<endl;
        cout<<"---reviews---\n"<<review[0]<<endl<<review[1]<<endl<<review[2]<<endl;
    }
    bool operator <(Course o1)
    {
        average<o1.average;
    }
};
int main()
{
    Course c1;
    Course c2;
    c1.name="C++";
    c1.rating[0]=2;
    c1.rating[1]=4;
    c1.rating[2]=3;
    c1.average_rating();
    c1.review[0]="good";
    c1.review[1]="can be improved";
    c1.review[2]="fantastic";
    c1.display();
    //course 2
    c2.name="python";
    c2.rating[0]=4;
    c2.rating[1]=5;
    c2.rating[2]=6;
    c2.average_rating();
    c2.review[0]="better";
    c2.review[1]="need improvement";
    c2.review[2]="good";
    c2.display();
    //display which is high rated
    cout<<"---high rated course---"<<endl;
    if(c1<c2)
    {
        c2.display();
    }
    else{
        c1.display();
    }

    return 0;

}
