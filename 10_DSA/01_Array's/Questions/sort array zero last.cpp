#include <iostream>
using namespace std;

int count = 0;

void sortArrayZeroLast(int arr[],int size){
    int i = 0 ,j = size - 1;
    while (i<j)
    {
        while(arr[i] != 0) {
            i++;
        }
        while(arr[j] == 0){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
            count++;
        }
    }
}
 
void sortArray(int arr[],int size){
    int pivot = arr[0];
    for (int i = 0; i < size - count; i++){
        
    }
    
}

int main() {
    int size;
    cout<<"Enter the size of the array = ";
    cin>>size;
    int arr[size];
    for(int i = 0; i<size;i++){
        cin>>arr[i];
    }
    sortArrayZeroLast(arr,size);
    sortArray(arr,size);
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<count;
    return 0;
}