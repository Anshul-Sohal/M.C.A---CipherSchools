#include <iostream>
using namespace std;

int sumOfAllElements(int arr[][4],int row,int col){
    int sum = 0;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            sum+=arr[i][j];
        }
    }
    return sum;
}
void rowWithMaximunSum(int arr[][4],int row,int col){
    int maxRowSum = 0,indexOfRow,i;
    for(i = 0;i<row;i++){
        int sum = 0;
        for(int j = 0;j<col;j++){
            sum+=arr[i][j];
        }
        if(maxRowSum<sum){
            maxRowSum = sum;
        }
    }
    cout<<"\nThe index of the row is "<<i<<" with the sum = "<<maxRowSum;
}
// bool findElement(int arr[][4],int row,int col,int key){
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if(arr[i][j] == key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // if(findElement(arr,3,4,10)){
    //     cout<<"Element is Present";
    // }else{
    //     cout<<"Element not found";
    // }
    cout<<endl<<"The sum of All the elements in the array is = "<<sumOfAllElements(arr,3,4);
    rowWithMaximunSum(arr,3,4);
    return 0;
}