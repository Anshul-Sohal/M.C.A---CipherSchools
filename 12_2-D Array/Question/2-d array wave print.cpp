#include <iostream>
using namespace std;

void printRowForwardThenBackward(int arr[][4],int row,int col){
    for(int i = 0;i<row;i++){
        if(i%2==0){
            for(int j = 0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int j = col-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void printColumDownThenUp(int arr[][4],int row,int col){
    for (int i = 0; i < col; i++){
        if(i%2 == 0){
            for (int j = 0; j < row; j++){
                cout<<arr[j][i]<<" ";
            }
        }else{
            for (int j = row-1; j >= 0; j--){
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    printRowForwardThenBackward(arr,3,4);
    cout<<endl;
    printColumDownThenUp(arr,3,4);
    return 0;
}