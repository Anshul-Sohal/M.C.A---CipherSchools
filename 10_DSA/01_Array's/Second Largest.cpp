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
    int arr[11] = {1,2,3,4,5,6,7,8,10,10,10};
    cout<<secondLargest(arr,11);
    return 0;
}