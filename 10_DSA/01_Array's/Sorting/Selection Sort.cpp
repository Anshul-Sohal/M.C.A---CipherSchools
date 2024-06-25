#include <iostream>
using namespace std;

// void selectionSort(int arr[],int size){
//     for(int i =0;i<size-1;i++){
//         for(int j = i+1;j<size;j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

void selectionSort(int arr[],int size){
    int min;
    for(int i =0;i<size-1;i++){
        min=i;
        for(int j = i+1;j<size;j++){
            if(arr[min]>arr[j]){
            min = j;
            }
        }
        int temp = arr[i];  
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int arr[size];
    for (int  i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Array without sorting = "<<endl;
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    selectionSort(arr,size);
    cout<<"\nArray after sorting = "<<endl;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}