#include <iostream>
using namespace std ;
int main ()
{
    int mass , velocity ;
    cout << "enter mass = ";
    cin >> mass ;
    cout << "enter velocity = " ;
    cin >> velocity ;
    float KE ;
    KE = 0.5 * mass * velocity * velocity ; 
    cout <<"kinetic energy= " << KE ;
    return 0 ;
}