#include <iostream>
using namespace std ;
int main ()
{
    char ch ;
    cout << "enter an alphabet = " ;
    cin >> ch ;
    switch (ch)
    {
        case 'a' :
        cout << "vovel";
        break ;
        case 'e' :
        cout << "vovel";
        break ;
        case 'i' :
        cout << "vovel";
        break ;
        case 'o' :
        cout << "vovel";
        break ;
        case 'u' :
        cout << "vovel";
        break ;
        default :
        cout << "consonant";
    }
    return 0 ;
}