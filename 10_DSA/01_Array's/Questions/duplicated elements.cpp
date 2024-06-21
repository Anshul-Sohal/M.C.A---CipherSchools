#include <iostream>
using namespace std;

int unique(int arr[],int size){
    
}

int main() {
    int size;
    cout<<"Enter the size of the array = ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array = ";
    for(int i= 0;i<size;i++){
        cin>>arr[i];
    }
    unique(arr,size);
    return 0;
}