/*for -> 0,n
if -> arr[i] == key ->return true
otherwise return false*/
#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    for (int i = 0; i < size; i++){
        if (arr[i]==key){
            return true;
        }
    }
    return false;
}

int main() {
    int size,key;
    cout<<"Enter the size of the array = ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element that you want to find = ";
    cin>>key;
    cout<<linearSearch(arr,size,key);
    return 0;
}