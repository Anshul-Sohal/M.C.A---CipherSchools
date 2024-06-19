#include <iostream>
using namespace std;

bool linear_search(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key) return true;        
    }
    return false;
}

int main() {
    int size,key;
    printf("Enter the size of the element = ");
    cin>>size;
    int arr[size];
    printf("Enter the elemets of the array : -\n");
    for (int i = 0; i < size; i++){
        printf("Enter the %d th elemet = ",i);
        cin>>arr[i];
    }
    printf("Enter the elemet that you want to search = ");
    cin>>key;
    string result = linear_search(arr,size,key)?"Element exits":"Element doesn't exist";
    cout<< result;
    return 0;
}