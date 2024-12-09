#include<iostream>
#include<fstream>
using namespace std ;
int main ()
{
    ifstream file ;
    file.open ("hello.txt") ;
    cout << file.rdbuf () ;
    file.close() ;
    return 0 ;


}