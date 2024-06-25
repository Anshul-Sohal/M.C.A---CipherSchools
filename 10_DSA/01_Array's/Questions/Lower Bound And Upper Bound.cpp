/*Lower Bound
Given a sorted array of N integers and an in integer x, find the lower bound of x
Lower Bound algo finds the first or the smallest index in a sorted array where the value at that given index is greater than or equal
to given key*/
#include <iostream>
using namespace std;

int lowerBound(int arr[],int size,int key){
    int start = 0, end = size-1, answer = size, mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]>=key){
            answer = mid;
            end = mid-1;
        }else{
            start = mid + 1;
        }
    }
    return answer;
}

int upperBound(int arr[], int size, int key) {
    int start = 0, end = size - 1, answer = size, mid;
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] > key) {
            answer = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
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
    cout<<"Enter the element that you want to find the Lower Bound of  = ";
    cin>>key;
    cout<<"The Lower Bound of "<<key<<" is on the index "<<lowerBound(arr,size,key)<<endl;
    cout<<"The Upper Bound of "<<key<<" is on the index "<<upperBound(arr,size,key);
    return 0;
}