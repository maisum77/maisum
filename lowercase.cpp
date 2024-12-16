#include<iostream>
using namespace std ;
char convert(char c)
{
 char change ;
 change = (char)tolower(c);
 return change ;
}
int main()
{
    char chr ;
    cout << "enter an upper case letter = ";
    cin >> chr ;
    cout << "letter in lowercase = " << convert(chr) ;
    return 0;
}