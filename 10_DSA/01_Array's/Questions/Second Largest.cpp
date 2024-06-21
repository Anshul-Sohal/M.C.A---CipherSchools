#include <iostream>
using namespace std;

int secondLargest(int arr[],int size){
    int max = INT_MIN, secondMax = INT_MIN,temp;
    for (int i = 0; i < size; i++){
        temp = max;
        if(max<arr[i]){
            max = arr[i];
            if(max!=temp){
                secondMax = temp;
            }
        }
    }
    return secondMax;
} 

int main() {
    int arr[6] = {12,35,1,10,34,1};
    cout<<secondLargest(arr,6);
    return 0;
}