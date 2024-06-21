#include <iostream>
using namespace std;

float sumArray(int arr[],int size){
    float sum=0;
    for (int i = 0; i < 5; i++){
        sum+=arr[i];
    }
    return sum;
}

int maxValueArray(int arr[], int size){
    int max = arr[0];
    for (int i = 0; i < size; i++){
        if (max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}   
int minValueArray(int arr[], int size){
    int min = arr[0];
    for (int i = 0; i < size; i++){
        if (min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}   

int main() {
    int arr[5] = {1,2,3,4,5};
    cout<<"Enter 5 numbers = ";
    for (int i = 0; i < 5; i++){
        cin>>arr[i];
    }
    cout<<"The sum of array is "<<sumArray(arr,5)<<endl;
    cout<<"The average of array is "<<sumArray(arr,5)/5<<endl;
    cout<<"Maximum element of the array is "<<maxValueArray(arr,5)<<endl;
    cout<<"Minimum element of the array is "<<minValueArray(arr,5);
    return 0;
}