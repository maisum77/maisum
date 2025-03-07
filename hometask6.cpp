#include<iostream>
#include<string>
using namespace std;
class Book
{
    private:
    string title;
    float price;
    public:
    Book(string a, float b)
    {
        title=a;
        price=b;
    }
    Book(Book &obj)
    {
        title=obj.title;
        price=obj.price;
    }
    void display()
    {
        cout<<"title= "<<title<<endl;
        cout<<"Price= "<<price<<endl;
    }
};
int main()
{
    Book obj1("Kite Runner",120);
    Book obj2(obj1);
    obj1.display();
    obj2.display();
    return 0;
}