#include<iostream>
#include<string>
using namespace std ;
class Computerscience
{
 private:
  string algorithm;
 public:
  string language;
  void in()
  {
    cout<<"algorithm= ";
    cin>>algorithm;
    cout<<"language= ";
    cin>>language;
  }
  void display_info()
  {
    cout<<"algorithm= "<<algorithm<<endl;
    cout<<"language= "<<language<<endl;
  }
};
int main()
{
    Computerscience obj1,obj2;
    obj1.in();
    obj2.in();
    cout<<"-----------";
    obj1.display_info();
    obj2.display_info();
}