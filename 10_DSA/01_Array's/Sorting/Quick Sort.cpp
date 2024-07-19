/*
Pick a pivot element usually the first one.
Take it to its place and all the element less then it should be at its left and all the element greater then it should be at its right
Now divide the array(per say) and select the pivot again and reapeat the step 2 untill all the elements are sorted
*/

#include <iostream>
using namespace std;

int partition(int arr[],int s, int e){
    int pivot = arr[s];
    int count = 0;
    for (int i = s+1; i <= e; i++){
        if(arr[i]<=pivot){
            count ++;
        }
    }

    /*after count, we get to know about the right place of pivot, now we will create a var pivotIndex at that Position*/

    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    int  i = s, j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    if(s>=e) return;

    int p = partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main() {
    int arr[10] = {6,5,7,8,4,9,0,3,2,1};
    int size = 10;
    quickSort(arr,0,size-1);

    for(int a : arr){
        cout<<a<<" ";
    }
    return 0;
}