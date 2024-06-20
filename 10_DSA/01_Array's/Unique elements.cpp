#include <iostream>
using namespace std;

int unique(int arr[],int size){
    bool seen[size] = {false};
    
    cout<<"Unique elements are :";
    for (int i = 0; i < size; i++){
        if(!seen[arr[i]]){
            seen[arr[i]] = true;
            cout<<arr[i]<<" ";
        }
    }
    return 0;
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