#include <iostream>
using  namespace std ;
int main ()
{
    int a , area ;
    cout << " 1.area of circle \n 2.area of rectangle \n 3.area of triangle \n enter choice from 1 to 3 = ";
    cin >> a ;
    switch (a)
    {
        case 1 :
        {
            int radius ;
            cout  << "enter radius =";
            cin  >> radius ;
            area = 3.14 * radius * radius ;
            cout << "area of a circle is = " << area ;
            break ;

        }
        case 2 :
        {
            int l,w ;
            cout << "enter lenght = ";
            cin >> l ;
            cout << "enter width  = ";
            cin >> w ;
            area =  l*w ;
            cout << "area of rectangle = " << area ;
            break ;

        }
        case 3 :
        {
            int h,b ;
            cout << "enter height =  " ;
            cin >> h ;
            cout << "enter base = " ;
            cin  >> b ;
            area = 1.5 * b * h ;
            cout << "area of triangle = " << area ;
            break ;
        }
        default :
        {
            cout << "invalid input " ;
        }

    }
    return   0 ;

}