#include <iostream>
#include<algorithm>
using namespace std;

bool findtarget(int arr[],int size,int target){
    for(int i = 0;i<size;i++){
        for (int j = i+1; j < size; j++){
            if(arr[i] + arr[j] == target){
                return true;
            }
        }
    }
    return false;
}

bool findTarget(int arr[],int size,int target){
    int start = 0, end= size-1;
    sort(arr,arr + size);
    for(int i = 0; i<size;i++){
        if(arr[start] + arr[end] !=target){
            end--;
        }else{
            return true;
        }
    }
    return false;
}

int main() {
    int size,target;
    cout<<"Enter the size of the array = ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements = \n";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum you want to find in this array = ";
    cin>>target;
    if (findtarget(arr,size,target)){
        cout<<"True\n";
    }else{
        cout<<"False\n";
    }
    return 0;
}