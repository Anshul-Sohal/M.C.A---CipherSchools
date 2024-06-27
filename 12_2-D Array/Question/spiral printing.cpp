#include <iostream>
using namespace std;

void spiralPrint(int arr[][5], int row, int col){
    int topRow = 0;
    int bottomRow = row - 1;
    int leftCol = 0;
    int rightCol = col - 1;

    while(topRow <= bottomRow && leftCol <= rightCol){
        //print top row
        for(int i = leftCol; i <= rightCol; i++){
            cout << arr[topRow][i] << " ";
        }
        topRow++;
        cout<<endl;
        //print right col
        for(int i = topRow; i <= bottomRow; i++){
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;
        cout<<endl;

        //print bottom row
        for(int i =rightCol; i >= leftCol; i--){
            cout << arr[bottomRow][i] << " ";
        }
        bottomRow--;
        cout<<endl;

        //print left column
        for(int i = bottomRow; i >= topRow; i--){
            cout << arr[i][leftCol] << " ";
        }
        leftCol++;
        cout<<endl;
    }
}

int main() {
    int arr[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    spiralPrint(arr,5,5);
    return 0;
}