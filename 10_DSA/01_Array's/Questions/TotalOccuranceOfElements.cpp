#include <iostream>
using namespace std;

int findFirstOccurance(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int answer;
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            answer = mid;
            end = mid-1;
        }else if(arr[mid]>key){
            end = mid -1;
        }else{
            start = mid +1;
        }
    }
    return answer;
}

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

int totalOccuranceOfElemets(int arr[],int size,int key){
    return lastOccuranceOfElement(arr,size,key) - findFirstOccurance(arr,size,key) + 1;
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
    cout<<"The total occurance of "<<key<<" is are "<<totalOccuranceOfElemets(arr,size,key);
    return 0;
}