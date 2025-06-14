#include <iostream>
using namespace std;
class doctor
{
 public:
  string name="ali";
};
class ward
{
    public:
   void use_doctor(doctor &obj)
   {
     cout<<"name of doctor ="<<obj.name<<endl;
   }
};
class hospital
{
 public:
 ward w1;
 hospital(ward &obj)
 {
    w1=obj;
 }
 void callDoctor(doctor &d)
 {
    w1.use_doctor(d);
 }
};

int main()
{
  doctor d1;
  ward w2;
  w2.use_doctor(d1);
  hospital h1(w2);
  h1.callDoctor(d1);

 return 0;
}