#include <iostream>
using namespace std;

void swap_alternate(int arr[],int size){
    int i = 0,j = 1,temp;
    while(i<size&j<size){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i+=2;
        j+=2;
    }
}
   
int main() {
    int size;
    cout<<"Enter the size of the array = ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements one by one = \n";
    for (int i = 0; i < size; i++){
        printf("Enter the %d element =",i);
        cin>>arr[i];
    }
    swap_alternate(arr,size);
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}