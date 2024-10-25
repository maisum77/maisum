#include <iostream>
using namespace std ;
int main ()
{
    int num ;
    cout << "enter marks =";
    cin >> num ;
    if (num == 100)
    {
        if (num >= 90)
        {
            cout << "Grade is A";
        }
    }
    else if (num >= 80 )
    {
        if (num <= 89 )
        {
            cout << "Grade is B";
        }
    }
    else if (num >= 70 )
    {
        if (num <= 79 )
        {
            cout << "Grade is C";
        }
    }
    else if (num >= 60 )
    {
        if (num <= 69 )
        {
            cout << "Grade is D";
        }
    }
    else 
    {
        cout << "Grade is F";
    }
    return 0;
}