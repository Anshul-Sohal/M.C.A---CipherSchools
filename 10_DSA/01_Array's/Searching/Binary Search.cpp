/*Binary Search sudo code ->
1.Declare start and end.
2.Calculate mid of array [(a+b)/2].
3.If mid < key then shift start to mid + 1.
4.If mid > key then shift end to mid - 1.*/

#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end =size - 1;
    int mid = (start + end)/2;
    if(arr[start]==key){
        return mid;
    }
    while (start<=mid)
    {
        if(key>arr[mid]){
            start = mid +1;
        }else{
            end = mid -1;
        }
        mid = (start + end)/2;
    }
    return mid;
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
    binarySearch(arr,size,key);
    return 0;
}