#include<iostream>
using namespace std;
class Rocket{
public:

 void output()
 {
     cout<<"rocket launched";
 }
 ~Rocket()
 {
     cout<<"rocket destroyed";
 }
};
int main()
{
   for(int i=1;i<=5;i++)
   {
       Rocket obj[i];
       obj[i].output();

       cout<<endl;
   }
   return 0;
}

