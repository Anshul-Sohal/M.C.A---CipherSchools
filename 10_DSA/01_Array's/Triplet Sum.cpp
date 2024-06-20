#include <iostream>
using namespace std;

bool findTripletSum(int arr[],int size,int TripletSum){
    for (int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){
            for (int k = j+1; k < size; k++){
                if(arr[i]+arr[j]+arr[k] == TripletSum){
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int size, TripletSum;
    cout<<"Enter the size of the array = ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in the array = \n";
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the triplet sum that you want to find from array = ";
    cin>>TripletSum;
    if( findTripletSum(arr,size,TripletSum)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}