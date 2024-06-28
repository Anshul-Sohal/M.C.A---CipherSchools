#include <iostream>
using namespace std;

bool isSorted(int arr[],int size){
    //base
    if(size == 0 || size ==1) return true;
    if(arr[0]>arr[1]){
        return false;
        //Check first and second element, if commd is true, thenn it  is not sorted.
    }else{
        return isSorted(arr+1,size-1);
    }
}

int main() {
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    if(isSorted(arr,10)){
        cout<<"Sorted";
    }else{
        cout<<"Not Sorted";
    }
    return 0;
}