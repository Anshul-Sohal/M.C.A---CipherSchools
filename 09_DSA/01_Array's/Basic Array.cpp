/*Array is an homogenous contigeous data structure alocated dynamically(Variable Size) or statically(Fixed size).
Elements can be accessed by indexs.*/
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2,3,5,7,9};
    int hello[3] = {1,2,3};

    for(int item : arr){
        cout<<item<<" ";
    }
    return 0;
}