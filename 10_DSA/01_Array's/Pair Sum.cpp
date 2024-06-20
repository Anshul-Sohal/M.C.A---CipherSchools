#include <iostream>
using namespace std;

bool findPairSum(int arr[],int size,int PairSum){
    for(int i = 0;i<size;i++){
        for (int j = i+1; j < size; j++){
            if(arr[i] + arr[j] == PairSum){
            return true;
            }
        }
    }
    return false;
}

int main() {
    int size,PairSum;
    cout<<"Enter the size of the array = ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements = \n";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum you want to find in this array = ";
    cin>>PairSum;
    if (findPairSum(arr,size,PairSum)){
        cout<<"True\n";
    }else{
        cout<<"False\n";
    }
    return 0;
}