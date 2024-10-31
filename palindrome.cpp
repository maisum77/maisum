#include <iostream>
using namespace std ;
int main ()
{
    char word [4];
    cout << "enter a word = ";
    cin >> word ;
    if (word [0]== word [4] && word [1] == word [3] )
    {
        cout << "the word is a palindrome";
    }
    else 
    {
        cout << "the word is not a palindrome";
    }
    return 0;
}