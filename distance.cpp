#include <iostream>
#include <cmath>
using namespace std ;
int main ()
{
    int x1,y1,x2,y2 ;
    cout << "enter x,y coordinates of first point =\n";
    cin >> x1 >> y1 ;
    cout << "enter x,y coordinates of second point = \n" ;
    cin >> x2 >> y2 ;
    int distance = sqrt ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    cout << "distance between them is = " << distance ;
    return 0 ;
}