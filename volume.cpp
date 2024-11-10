#include <iostream>
using namespace std ;
int main ()
{
    int l,w,h ;
    cout << "lenght=";
    cin >> l ;
    cout << "width=";
    cin >> w ;
    cout << "height=";
    cin >> h ;
    int volume , surface_area ;
    volume = l*w*h ;
    surface_area = 2 * (l*w+w*h+l*h) ;
    cout << "volume= " << volume ;
    cout << "\nsurface area = " << surface_area ;
    return 0 ;
}