#include <iostream>
#include <fstream>
using namespace std ;
int main ()
{
    char arr [100] ;
    cout << "enter name and age :";
    cin.getline(arr,100) ;
    ofstream myfile ("xyz.txt") ;
    myfile <<arr;
    myfile.close();
    cout<< "operation successfull!!";
    return 0 ;
}