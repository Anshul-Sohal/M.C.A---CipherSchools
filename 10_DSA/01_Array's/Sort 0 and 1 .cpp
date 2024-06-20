#include <iostream>
#include<algorithm>
using namespace std;

void sortZeroOne(int arr[],int size){
    int i = 0 , j = size-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

int main() {
    int size;
    cout<<"Enter the size of the elements = ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array = ";
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }
    sortZeroOne(arr,size);
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}