#include <iostream>
using namespace std;

int lastOccuranceOfElement(int arr[],int size,int key){
    int start = 0, end = size-1,answer;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            answer = mid;
            start = mid + 1;
        }else if(arr[mid]<key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return answer;
}

int main() {
    int size,key;
    cout<<"Enter the size of the array = ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element that you want to find the first occurance of  = ";
    cin>>key;
    cout<<"The first occurance of "<<key<<" is on the index "<<lastOccuranceOfElement(arr,size,key);
    return 0;
}