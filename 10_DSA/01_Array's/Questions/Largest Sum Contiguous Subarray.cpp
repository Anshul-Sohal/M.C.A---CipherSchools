#include <iostream>
#include <climits> // To include INT_MIN
using namespace std;

// int KadaneAlgorithm(int arr[], int size) {
//     int max_so_far = INT_MIN;
//     int max_ending_here = 0;
//     for (int i = 0; i < size; i++) {
//         max_ending_here += arr[i];
//         if (max_so_far < max_ending_here) {
//             max_so_far = max_ending_here;
//         }
//         if (max_ending_here < 0) {
//             max_ending_here = 0;
//         }
//     }
//     return max_so_far;
// }

int KadaneAlgorithm(int arr[],int size){
    int max=INT_MIN,sum=0;
    for (int i = 0; i < size; i++){
        sum+=arr[i];
        if(sum>max) max = sum;
        if(sum<0) sum=0;
    }
    return max;
}

int main() {
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << KadaneAlgorithm(arr, 8);
    return 0;
}
