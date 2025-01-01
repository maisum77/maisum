#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};
                     
    int greatest = arr[0][0];  // Initialize with first element
    int smallest = arr[0][0];  // Initialize with first element

    // Find greatest
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(arr[i][j] > greatest)  // Use > for comparison
                greatest = arr[i][j];
        }
    }

    // Find smallest 
    for(int a=0; a<3; a++) {
        for(int b=0; b<3; b++) {
            if(arr[a][b] < smallest)  // Use < for comparison
                smallest = arr[a][b];
        }
    }

    cout<<"greatest number in the array = "<<greatest<<endl;
    cout<<"smallest number in the array = "<<smallest<<endl;
    
    return 0;
}