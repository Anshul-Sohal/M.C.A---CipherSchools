#include <iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int i = 0, j = size-1, temp;
    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int size;
    printf("Enter the size of the element = ");
    cin>>size;
    int arr[size];
    printf("Enter the elemets of the array : -\n");
    for (int i = 0; i < size; i++){
        printf("Enter the %d th elemet = ",i);
        cin>>arr[i];
    }
    reverseArray(arr,size);
    for (int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}