#include <iostream>
using namespace std;

// void bubbleSort(int arr[],int size){
//     for(int i = size-1;i>=0;i--){
//         for(int j = 0;j<i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
//Optimized version
void bubbleSort(int arr[],int size){
    for(int i = size-1; i>=0; i--){
        int hasSwapped = 0;
        for(int j = 0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                hasSwapped = 1;
            }
        }
        if(hasSwapped == 0){
            break;
        }
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
    bubbleSort(arr,size);
    cout<<"\nArray after sorting = "<<endl;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}