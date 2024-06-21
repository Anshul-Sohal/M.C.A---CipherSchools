#include <iostream>
using namespace std;

int unique(int arr[],int size){
    bool seen[size] = {false};
    int count = 0;
    cout<<"Unique elements are :";
    for (int i = 0; i < size; i++){
        if(!seen[arr[i]]){
            seen[arr[i]] = true;
            count++;
            cout<<arr[i]<<" ";
        }
    }
    cout<<"\nThe number of unique elements are = "<<count;
    return 0;
}

int uniqueElements(int arr[],int size){
    int i = 0;
    for (int j = i+1; j < size; j++)
    {
        if(arr[i]!=arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i;
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
    // unique(arr,size);
    int newsize = uniqueElements(arr,size);
    for(int i= 0;i<newsize;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}