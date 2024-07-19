#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp;
    int left = start;
    int right = mid + 1;
    while(left <= mid && right <= end){
        if(arr[left]<=arr[right]) {
            temp.push_back(arr[left++]);
        }else{
            temp.push_back(arr[right++]);
        }
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=end){
        temp.push_back(arr[right++]);
    }
    for(int i=0;i<temp.size();i++){
        arr[start+i] = temp[i];
    }
}
void mergeSort(vector<int> &arr, int start, int end) {
    if(start >= end) return;
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
int main() {
    vector<int> arr = {3,2,8,5,1,4,10};
    int n = arr.size();
    cout<<"Before Sorting:\n";
    for(int num : arr){
        cout << num << " ";
    }
    cout<<endl;
    mergeSort(arr,0,n-1);
    cout<<"After Sorting:\n";
    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
