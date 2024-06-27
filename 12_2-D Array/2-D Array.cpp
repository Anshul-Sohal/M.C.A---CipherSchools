#include <iostream>
using namespace std;

int main() {
    //Creating 2-D Array
    int arr[3][4];
    //Taking user Input column wise
    // for(int row = 0; row < 3; row++){
    //     for (int column = 0; column < 4; column++){
    //         cin>>arr[row][column];
    //     }
    //     cout<<endl;
    // }    
    //Taking user Input Row wise
    for (int col = 0; col < 4; col++){
        for (int row = 0; row < 3; row++){
            cin>>arr[row][col];
        } 
    }
    //Priting the 2-D array column wise
    for(int row = 0; row < 3; row++){
        for (int column = 0; column < 4; column++){
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }    
    return 0;
}